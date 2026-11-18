// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 22

// GetRangeImpl @ 1498bfa10

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
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
  double *pdVar17;
  bool bVar18;
  char cVar19;
  undefined1 uVar20;
  int iVar21;
  uint uVar22;
  TQuat<double> *pTVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double *local_178 [2];
  TArrayView<void_const_*,int> local_168;
  TArrayView<void_const_*,int> local_158;
  TQuat<double> local_148;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TQuat<double> local_a8 [4];
  
  uVar26 = local_168._12_4_;
  local_168.ArrayNum = 1;
  local_178[0] = (double *)0x0;
  local_168.DataPtr = local_178;
  bVar18 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_168);
  if (bVar18) {
    cVar19 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar19 == '\0') {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820729906>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar20 = (*pcVar4)();
        return (bool)uVar20;
      }
    }
    else {
      local_158.ArrayNum = 1;
      local_158._12_4_ = uVar26;
      local_158.DataPtr = local_178;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 &local_158);
      pdVar17 = local_178[0];
      dVar10 = *local_178[0];
      dVar11 = local_178[0][1];
      dVar12 = local_178[0][2];
      dVar13 = local_178[0][3];
      local_e8 = local_178[0][4];
      dStack_e0 = local_178[0][5];
      local_d8 = local_178[0][6];
      dStack_d0 = local_178[0][7];
      local_c8 = local_178[0][8];
      dStack_c0 = local_178[0][9];
      local_b8 = local_178[0][10];
      dStack_b0 = local_178[0][0xb];
      if ((PCGSplineStruct::GUseSplineCurves == false) && (*(char *)(local_178[0] + 0x2d) != '\0'))
      {
        iVar21 = FSpline::GetNumControlPoints((FSpline *)(local_178[0] + 0x2d));
      }
      else {
        iVar21 = *(int *)(local_178[0] + 0x1f);
      }
      if (iVar21 != 0) {
        iVar3 = param_1->ArrayNum;
        iVar25 = 0;
        if (0 < iVar3) {
          do {
            uVar24 = (iVar25 + param_2) % iVar21;
            if ((PCGSplineStruct::GUseSplineCurves == false) && (*(char *)(pdVar17 + 0x2d) != '\0'))
            {
              pTVar23 = FSpline::GetRotation((FSpline *)(pdVar17 + 0x2d),local_a8,uVar24);
            }
            else {
              uVar22 = 0;
              if ((int)uVar24 < *(int *)(pdVar17 + 0x22)) {
                uVar22 = ~uVar24 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar4 = (code *)swi(3);
                uVar20 = (*pcVar4)();
                return (bool)uVar20;
              }
              pdVar1 = (double *)((longlong)(int)uVar24 * 0x80 + 0x10 + (longlong)pdVar17[0x21]);
              pdVar2 = (double *)((longlong)(int)uVar24 * 0x80 + 0x20 + (longlong)pdVar17[0x21]);
              pTVar23 = &local_148;
              local_148.X = *pdVar1;
              local_148.Y = pdVar1[1];
              local_148.Z = *pdVar2;
              local_148.W = pdVar2[1];
            }
            dVar9 = pTVar23->X;
            dVar6 = pTVar23->Y;
            dVar8 = pTVar23->Z;
            dVar14 = pTVar23->W;
            pTVar23 = TArrayView<UE::Math::TQuat<double>,int>::operator[](param_1,iVar25);
            pTVar23->X = dVar9;
            pTVar23->Y = dVar6;
            pTVar23->Z = dVar8;
            pTVar23->W = dVar14;
            pTVar23 = TArrayView<UE::Math::TQuat<double>,int>::operator[](param_1,iVar25);
            dVar6 = pTVar23->Z;
            dVar14 = pTVar23->W;
            dVar15 = pTVar23->X;
            dVar16 = pTVar23->Y;
            dVar8 = dVar10 * dVar14 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar13 * dVar15 +
                    dVar11 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                    + dVar12 * dVar16 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar9 = dVar10 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                    + dVar13 * dVar16 +
                    dVar11 * dVar14 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    dVar12 * dVar15 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar28 = SUB84(dVar9,0);
            uVar29 = (undefined4)((ulonglong)dVar9 >> 0x20);
            local_128._8_4_ = uVar28;
            local_128._0_8_ = dVar8;
            local_128._12_4_ = uVar29;
            dVar9 = dVar10 * dVar16 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar13 * dVar6
                    + dVar11 * dVar15 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar12 * dVar14 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar6 = dVar10 * dVar15 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dVar13 * dVar14 +
                    dVar11 * dVar16 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar12 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
            ;
            uVar26 = SUB84(dVar6,0);
            uVar27 = (undefined4)((ulonglong)dVar6 >> 0x20);
            local_118._8_4_ = uVar26;
            local_118._0_8_ = dVar9;
            local_118._12_4_ = uVar27;
            pTVar23 = TArrayView<UE::Math::TQuat<double>,int>::operator[](param_1,iVar25);
            iVar25 = iVar25 + 1;
            auVar7._8_4_ = uVar28;
            auVar7._0_8_ = dVar8;
            auVar7._12_4_ = uVar29;
            pTVar23->X = dVar8;
            pTVar23->Y = (double)auVar7._8_8_;
            auVar5._8_4_ = uVar26;
            auVar5._0_8_ = dVar9;
            auVar5._12_4_ = uVar27;
            pTVar23->Z = dVar9;
            pTVar23->W = (double)auVar5._8_8_;
          } while (iVar25 < iVar3);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498bfd90

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  TQuat<double> *pTVar16;
  uint uVar17;
  int iVar18;
  void *local_b8 [2];
  TArrayView<void_const_*,int> local_a8;
  TArrayView<void_const_*,int> local_98;
  TQuat<double> local_88;
  TQuat<double> local_68 [2];
  
  uVar10 = local_a8._12_4_;
  local_a8.ArrayNum = 1;
  local_b8[0] = (void *)0x0;
  local_a8.DataPtr = local_b8;
  bVar11 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_a8);
  if (bVar11) {
    cVar12 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar12 == '\0') {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820729906>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
    }
    else {
      local_98.ArrayNum = 1;
      local_98._12_4_ = uVar10;
      local_98.DataPtr = local_b8;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_98
                );
      pvVar9 = local_b8[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (*(char *)((longlong)local_b8[0] + 0x168) != '\0')) {
        iVar14 = FSpline::GetNumControlPoints((FSpline *)((longlong)local_b8[0] + 0x168));
      }
      else {
        iVar14 = *(int *)((longlong)local_b8[0] + 0xf8);
      }
      if (iVar14 != 0) {
        iVar3 = param_1->ArrayNum;
        iVar18 = 0;
        if (0 < iVar3) {
          do {
            uVar17 = (iVar18 + param_2) % iVar14;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (*(char *)((longlong)pvVar9 + 0x168) != '\0')) {
              pTVar16 = FSpline::GetRotation((FSpline *)((longlong)pvVar9 + 0x168),local_68,uVar17);
            }
            else {
              uVar15 = 0;
              if ((int)uVar17 < *(int *)((longlong)pvVar9 + 0x110)) {
                uVar15 = ~uVar17 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              pdVar1 = (double *)
                       ((longlong)(int)uVar17 * 0x80 + 0x10 +
                       *(longlong *)((longlong)pvVar9 + 0x108));
              pdVar2 = (double *)
                       ((longlong)(int)uVar17 * 0x80 + 0x20 +
                       *(longlong *)((longlong)pvVar9 + 0x108));
              pTVar16 = &local_88;
              local_88.X = *pdVar1;
              local_88.Y = pdVar1[1];
              local_88.Z = *pdVar2;
              local_88.W = pdVar2[1];
            }
            dVar5 = pTVar16->X;
            dVar6 = pTVar16->Y;
            dVar7 = pTVar16->Z;
            dVar8 = pTVar16->W;
            pTVar16 = TArrayView<UE::Math::TQuat<double>,int>::operator[](param_1,iVar18);
            iVar18 = iVar18 + 1;
            pTVar16->X = dVar5;
            pTVar16->Y = dVar6;
            pTVar16->Z = dVar7;
            pTVar16->W = dVar8;
          } while (iVar18 < iVar3);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498bffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1> *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FPCGSplineStruct *this_00;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  char cVar24;
  undefined1 uVar25;
  int iVar26;
  TVector<double> *pTVar27;
  TVector<double> *pTVar28;
  TQuat<double> *pTVar29;
  TTransform<double> *pTVar30;
  int iVar31;
  int iVar32;
  undefined1 auStackY_238 [32];
  FPCGSplineStruct *local_200;
  TArrayView<void_const_*,int> local_1f8;
  TArrayView<void_const_*,int> local_1e8;
  TVector<double> local_1d8;
  TVector<double> local_1c0;
  TQuat<double> local_1a8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar7 = local_1f8._12_4_;
  local_1f8.ArrayNum = 1;
  iVar32 = 0;
  local_200 = (FPCGSplineStruct *)0x0;
  local_1f8.DataPtr = &local_200;
  bVar23 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_1f8);
  if (bVar23) {
    cVar24 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar24 == '\0') {
      bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820729906>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar23) {
        pcVar6 = (code *)swi(3);
        uVar25 = (*pcVar6)();
        return (bool)uVar25;
      }
    }
    else {
      local_1e8.ArrayNum = 1;
      local_1e8._12_4_ = uVar7;
      local_1e8.DataPtr = &local_200;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 &local_1e8);
      this_00 = local_200;
      local_128.Rotation.XY.m128d_f64[0] = (local_200->Transform).Rotation.XY.m128d_f64[0];
      local_128.Rotation.XY.m128d_f64[1] = (local_200->Transform).Rotation.XY.m128d_f64[1];
      local_128.Rotation.ZW.m128d_f64[0] = (local_200->Transform).Rotation.ZW.m128d_f64[0];
      local_128.Rotation.ZW.m128d_f64[1] = (local_200->Transform).Rotation.ZW.m128d_f64[1];
      local_128.Translation.XY.m128d_f64[0] = (local_200->Transform).Translation.XY.m128d_f64[0];
      local_128.Translation.XY.m128d_f64[1] = (local_200->Transform).Translation.XY.m128d_f64[1];
      local_128.Translation.ZW.m128d_f64[0] = (local_200->Transform).Translation.ZW.m128d_f64[0];
      local_128.Translation.ZW.m128d_f64[1] = (local_200->Transform).Translation.ZW.m128d_f64[1];
      local_128.Scale3D.XY.m128d_f64[0] = (local_200->Transform).Scale3D.XY.m128d_f64[0];
      local_128.Scale3D.XY.m128d_f64[1] = (local_200->Transform).Scale3D.XY.m128d_f64[1];
      local_128.Scale3D.ZW.m128d_f64[0] = (local_200->Transform).Scale3D.ZW.m128d_f64[0];
      local_128.Scale3D.ZW.m128d_f64[1] = (local_200->Transform).Scale3D.ZW.m128d_f64[1];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((local_200->Spline).CurrentImplementation != '\0')) {
        iVar26 = FSpline::GetNumControlPoints(&local_200->Spline);
      }
      else {
        iVar26 = *(int *)&(local_200->SplineCurves).Position.field_0x8;
      }
      if (iVar26 != 0) {
        iVar5 = param_1->ArrayNum;
        if (0 < iVar5) {
          do {
            iVar31 = (param_2 + iVar32) % iVar26;
            pTVar27 = FPCGSplineStruct::GetScale(this_00,&local_1d8,iVar31);
            pTVar28 = FPCGSplineStruct::GetLocation(this_00,&local_1c0,iVar31);
            pTVar29 = FPCGSplineStruct::GetRotation(this_00,&local_1a8,iVar31);
            uVar1 = *(undefined8 *)((longlong)&pTVar28->field0_0x0 + 8);
            uVar10 = *(undefined4 *)&pTVar28->field0_0x0;
            uVar11 = *(undefined4 *)((longlong)&pTVar28->field0_0x0 + 4);
            uVar12 = *(undefined4 *)((longlong)&pTVar28->field0_0x0 + 8);
            dVar2 = (pTVar28->field0_0x0)._s_0.Z;
            dVar3 = (pTVar27->field0_0x0)._s_0.Z;
            dVar13 = pTVar29->X;
            dVar14 = pTVar29->Y;
            dVar15 = pTVar29->Z;
            dVar16 = pTVar29->W;
            uVar4 = *(undefined8 *)((longlong)&pTVar27->field0_0x0 + 8);
            uVar7 = *(undefined4 *)&pTVar27->field0_0x0;
            uVar8 = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 4);
            uVar9 = *(undefined4 *)((longlong)&pTVar27->field0_0x0 + 8);
            pTVar30 = TArrayView<UE::Math::TTransform<double>,int>::operator[](param_1,iVar32);
            (pTVar30->Rotation).XY.m128d_f64[0] = dVar13;
            (pTVar30->Rotation).XY.m128d_f64[1] = dVar14;
            (pTVar30->Rotation).ZW.m128d_f64[0] = dVar15;
            (pTVar30->Rotation).ZW.m128d_f64[1] = dVar16;
            *(undefined4 *)(pTVar30->Translation).XY.m128d_f64 = uVar10;
            *(undefined4 *)((longlong)(pTVar30->Translation).XY.m128d_f64 + 4) = uVar11;
            *(undefined4 *)((pTVar30->Translation).XY.m128d_f64 + 1) = uVar12;
            *(int *)((longlong)(pTVar30->Translation).XY.m128d_f64 + 0xc) =
                 (int)((ulonglong)uVar1 >> 0x20);
            (pTVar30->Translation).ZW.m128d_f64[0] = dVar2;
            (pTVar30->Translation).ZW.m128d_f64[1] = 0.0;
            *(undefined4 *)(pTVar30->Scale3D).XY.m128d_f64 = uVar7;
            *(undefined4 *)((longlong)(pTVar30->Scale3D).XY.m128d_f64 + 4) = uVar8;
            *(undefined4 *)((pTVar30->Scale3D).XY.m128d_f64 + 1) = uVar9;
            *(int *)((longlong)(pTVar30->Scale3D).XY.m128d_f64 + 0xc) =
                 (int)((ulonglong)uVar4 >> 0x20);
            (pTVar30->Scale3D).ZW.m128d_f64[0] = dVar3;
            (pTVar30->Scale3D).ZW.m128d_f64[1] = 0.0;
            pTVar30 = TArrayView<UE::Math::TTransform<double>,int>::operator[](param_1,iVar32);
            local_188.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_188.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_188.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_188.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_188.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_188.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_188.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_188.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_188.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_188.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_188,pTVar30,&local_128);
            dVar2 = local_188.Rotation.XY.m128d_f64[0];
            dVar3 = local_188.Rotation.XY.m128d_f64[1];
            dVar13 = local_188.Rotation.ZW.m128d_f64[0];
            dVar14 = local_188.Rotation.ZW.m128d_f64[1];
            dVar15 = local_188.Translation.XY.m128d_f64[0];
            dVar16 = local_188.Translation.XY.m128d_f64[1];
            dVar17 = local_188.Translation.ZW.m128d_f64[0];
            dVar18 = local_188.Translation.ZW.m128d_f64[1];
            dVar19 = local_188.Scale3D.XY.m128d_f64[0];
            dVar20 = local_188.Scale3D.XY.m128d_f64[1];
            dVar21 = local_188.Scale3D.ZW.m128d_f64[0];
            dVar22 = local_188.Scale3D.ZW.m128d_f64[1];
            pTVar30 = TArrayView<UE::Math::TTransform<double>,int>::operator[](param_1,iVar32);
            (pTVar30->Rotation).XY.m128d_f64[0] = dVar2;
            (pTVar30->Rotation).XY.m128d_f64[1] = dVar3;
            (pTVar30->Rotation).ZW.m128d_f64[0] = dVar13;
            (pTVar30->Rotation).ZW.m128d_f64[1] = dVar14;
            (pTVar30->Translation).XY.m128d_f64[0] = dVar15;
            (pTVar30->Translation).XY.m128d_f64[1] = dVar16;
            (pTVar30->Translation).ZW.m128d_f64[0] = dVar17;
            (pTVar30->Translation).ZW.m128d_f64[1] = dVar18;
            (pTVar30->Scale3D).XY.m128d_f64[0] = dVar19;
            (pTVar30->Scale3D).XY.m128d_f64[1] = dVar20;
            (pTVar30->Scale3D).ZW.m128d_f64[0] = dVar21;
            (pTVar30->Scale3D).ZW.m128d_f64[1] = dVar22;
            iVar32 = iVar32 + 1;
          } while (iVar32 < iVar5);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c0300

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0> *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FPCGSplineStruct *this_00;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  TVector<double>_u_0 *pTVar18;
  TVector<double> *pTVar19;
  TQuat<double> *pTVar20;
  TTransform<double> *pTVar21;
  uint uVar22;
  int iVar23;
  FPCGSplineStruct *local_138 [2];
  TArrayView<void_const_*,int> local_128;
  double local_118;
  double dStack_110;
  double local_108;
  TArrayView<void_const_*,int> local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  TQuat<double> local_98 [3];
  
  uVar6 = local_128._12_4_;
  local_128.ArrayNum = 1;
  local_138[0] = (FPCGSplineStruct *)0x0;
  local_128.DataPtr = local_138;
  bVar13 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_128);
  if (bVar13) {
    cVar14 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar14 == '\0') {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820729906>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
    }
    else {
      local_f8.ArrayNum = 1;
      local_f8._12_4_ = uVar6;
      local_f8.DataPtr = local_138;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_f8
                );
      this_00 = local_138[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((local_138[0]->Spline).CurrentImplementation != '\0')) {
        iVar16 = FSpline::GetNumControlPoints(&local_138[0]->Spline);
      }
      else {
        iVar16 = *(int *)&(local_138[0]->SplineCurves).Position.field_0x8;
      }
      if (iVar16 != 0) {
        iVar23 = 0;
        if (0 < param_1->ArrayNum) {
          do {
            uVar22 = (iVar23 + param_2) % iVar16;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               ((this_00->Spline).CurrentImplementation != '\0')) {
              pTVar18 = &FSpline::GetScale(&this_00->Spline,&local_d0,uVar22)->field0_0x0;
            }
            else {
              uVar17 = 0;
              if ((int)uVar22 < *(int *)&(this_00->SplineCurves).Scale.field_0x8) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              lVar4 = *(longlong *)&(this_00->SplineCurves).Scale;
              pdVar1 = (double *)((longlong)(int)uVar22 * 0x58 + 8 + lVar4);
              pTVar18 = &local_e8;
              local_e8._s_0.X = *pdVar1;
              local_e8._s_0.Y = pdVar1[1];
              local_e8._s_0.Z = *(double *)((longlong)(int)uVar22 * 0x58 + 0x18 + lVar4);
            }
            local_118 = (((TVector<double>_u_0 *)&(pTVar18->_s_0).X)->_s_0).X;
            dStack_110 = (pTVar18->_s_0).Y;
            local_108 = (pTVar18->_s_0).Z;
            pTVar19 = FPCGSplineStruct::GetLocation(this_00,&local_b8,uVar22);
            pTVar20 = FPCGSplineStruct::GetRotation(this_00,local_98,uVar22);
            uVar2 = *(undefined8 *)((longlong)&pTVar19->field0_0x0 + 8);
            uVar6 = *(undefined4 *)&pTVar19->field0_0x0;
            uVar7 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 4);
            uVar8 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 8);
            dVar3 = (pTVar19->field0_0x0)._s_0.Z;
            dVar9 = pTVar20->X;
            dVar10 = pTVar20->Y;
            dVar11 = pTVar20->Z;
            dVar12 = pTVar20->W;
            pTVar21 = TArrayView<UE::Math::TTransform<double>,int>::operator[](param_1,iVar23);
            iVar23 = iVar23 + 1;
            (pTVar21->Rotation).XY.m128d_f64[0] = dVar9;
            (pTVar21->Rotation).XY.m128d_f64[1] = dVar10;
            (pTVar21->Rotation).ZW.m128d_f64[0] = dVar11;
            (pTVar21->Rotation).ZW.m128d_f64[1] = dVar12;
            *(undefined4 *)(pTVar21->Translation).XY.m128d_f64 = uVar6;
            *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 4) = uVar7;
            *(undefined4 *)((pTVar21->Translation).XY.m128d_f64 + 1) = uVar8;
            *(int *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 0xc) =
                 (int)((ulonglong)uVar2 >> 0x20);
            (pTVar21->Translation).ZW.m128d_f64[0] = dVar3;
            (pTVar21->Translation).ZW.m128d_f64[1] = 0.0;
            (pTVar21->Scale3D).XY.m128d_f64[0] = local_118;
            (pTVar21->Scale3D).XY.m128d_f64[1] = dStack_110;
            (pTVar21->Scale3D).ZW.m128d_f64[0] = local_108;
            (pTVar21->Scale3D).ZW.m128d_f64[1] = 0.0;
          } while (iVar23 < param_1->ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c05f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FPCGSplineStruct *this_00;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<double> *pTVar11;
  int iVar12;
  undefined1 auStackY_208 [32];
  FPCGSplineStruct *local_1d8 [2];
  TArrayView<void_const_*,int> local_1c8;
  TArrayView<void_const_*,int> local_1b8;
  TVector<double> local_1a8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar6 = local_1c8._12_4_;
  local_1c8.ArrayNum = 1;
  iVar12 = 0;
  local_1d8[0] = (FPCGSplineStruct *)0x0;
  local_1c8.DataPtr = local_1d8;
  bVar7 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_1c8);
  if (bVar7) {
    cVar8 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar8 == '\0') {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820729906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    else {
      local_1b8.ArrayNum = 1;
      local_1b8._12_4_ = uVar6;
      local_1b8.DataPtr = local_1d8;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 &local_1b8);
      this_00 = local_1d8[0];
      local_128.Rotation.XY.m128d_f64[0] = (local_1d8[0]->Transform).Rotation.XY.m128d_f64[0];
      local_128.Rotation.XY.m128d_f64[1] = (local_1d8[0]->Transform).Rotation.XY.m128d_f64[1];
      local_128.Rotation.ZW.m128d_f64[0] = (local_1d8[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_128.Rotation.ZW.m128d_f64[1] = (local_1d8[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_128.Translation.XY.m128d_f64[0] = (local_1d8[0]->Transform).Translation.XY.m128d_f64[0];
      local_128.Translation.XY.m128d_f64[1] = (local_1d8[0]->Transform).Translation.XY.m128d_f64[1];
      local_128.Translation.ZW.m128d_f64[0] = (local_1d8[0]->Transform).Translation.ZW.m128d_f64[0];
      local_128.Translation.ZW.m128d_f64[1] = (local_1d8[0]->Transform).Translation.ZW.m128d_f64[1];
      local_128.Scale3D.XY.m128d_f64[0] = (local_1d8[0]->Transform).Scale3D.XY.m128d_f64[0];
      local_128.Scale3D.XY.m128d_f64[1] = (local_1d8[0]->Transform).Scale3D.XY.m128d_f64[1];
      local_128.Scale3D.ZW.m128d_f64[0] = (local_1d8[0]->Transform).Scale3D.ZW.m128d_f64[0];
      local_128.Scale3D.ZW.m128d_f64[1] = (local_1d8[0]->Transform).Scale3D.ZW.m128d_f64[1];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((local_1d8[0]->Spline).CurrentImplementation != '\0')) {
        iVar10 = FSpline::GetNumControlPoints(&local_1d8[0]->Spline);
      }
      else {
        iVar10 = *(int *)&(local_1d8[0]->SplineCurves).Position.field_0x8;
      }
      if (iVar10 != 0) {
        iVar2 = param_1->ArrayNum;
        if (0 < iVar2) {
          do {
            pTVar11 = FPCGSplineStruct::GetScale(this_00,&local_1a8,(param_2 + iVar12) % iVar10);
            dVar4 = (pTVar11->field0_0x0)._s_0.X;
            dVar5 = (pTVar11->field0_0x0)._s_0.Y;
            dVar1 = (pTVar11->field0_0x0)._s_0.Z;
            pTVar11 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar12);
            (pTVar11->field0_0x0)._s_0.X = dVar4;
            (pTVar11->field0_0x0)._s_0.Y = dVar5;
            (pTVar11->field0_0x0)._s_0.Z = dVar1;
            pTVar11 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar12);
            local_c8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
            local_c8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
            local_c8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
            local_c8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
            local_c8.Translation.XY.m128d_f64[0] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_c8.Translation.XY.m128d_f64[1] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_c8.Translation.ZW.m128d_f64[0] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_c8.Translation.ZW.m128d_f64[1] = 0.0;
            local_c8.Scale3D.ZW.m128d_f64[0] = (pTVar11->field0_0x0)._s_0.Z;
            local_c8.Scale3D.XY.m128d_f64[0] = (pTVar11->field0_0x0)._s_0.X;
            local_c8.Scale3D.XY.m128d_f64[1] = (pTVar11->field0_0x0)._s_0.Y;
            local_c8.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_188.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_188.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_188.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_188.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_188.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_188.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_188.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_188.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_188.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_188.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_188,&local_c8,&local_128);
            dVar1 = local_188.Scale3D.XY.m128d_f64[0];
            dVar4 = local_188.Scale3D.XY.m128d_f64[1];
            dVar5 = local_188.Scale3D.ZW.m128d_f64[0];
            pTVar11 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar12);
            iVar12 = iVar12 + 1;
            (pTVar11->field0_0x0)._s_0.X = dVar1;
            (pTVar11->field0_0x0)._s_0.Y = dVar4;
            (pTVar11->field0_0x0)._s_0.Z = dVar5;
          } while (iVar12 < iVar2);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c0880

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  TVector<double>_u_0 *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  int iVar17;
  void *local_a8 [2];
  TArrayView<void_const_*,int> local_98;
  TArrayView<void_const_*,int> local_88;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [2];
  
  uVar8 = local_98._12_4_;
  local_98.ArrayNum = 1;
  local_a8[0] = (void *)0x0;
  local_98.DataPtr = local_a8;
  bVar9 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_98);
  if (bVar9) {
    cVar10 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar10 == '\0') {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820729906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
    }
    else {
      local_88.ArrayNum = 1;
      local_88._12_4_ = uVar8;
      local_88.DataPtr = local_a8;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_88
                );
      pvVar7 = local_a8[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (*(char *)((longlong)local_a8[0] + 0x168) != '\0')) {
        iVar12 = FSpline::GetNumControlPoints((FSpline *)((longlong)local_a8[0] + 0x168));
      }
      else {
        iVar12 = *(int *)((longlong)local_a8[0] + 0xf8);
      }
      if (iVar12 != 0) {
        iVar3 = param_1->ArrayNum;
        iVar17 = 0;
        if (0 < iVar3) {
          do {
            uVar16 = (iVar17 + param_2) % iVar12;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (*(char *)((longlong)pvVar7 + 0x168) != '\0')) {
              pTVar14 = &FSpline::GetScale((FSpline *)((longlong)pvVar7 + 0x168),local_60,uVar16)->
                         field0_0x0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar16 < *(int *)((longlong)pvVar7 + 0x128)) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              pdVar1 = (double *)
                       ((longlong)(int)uVar16 * 0x58 + 8 + *(longlong *)((longlong)pvVar7 + 0x120));
              pTVar14 = &local_78;
              local_78._s_0.X = *pdVar1;
              local_78._s_0.Y = pdVar1[1];
              local_78._s_0.Z =
                   *(double *)
                    ((longlong)(int)uVar16 * 0x58 + 0x18 + *(longlong *)((longlong)pvVar7 + 0x120));
            }
            dVar5 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
            dVar6 = (pTVar14->_s_0).Y;
            dVar2 = (pTVar14->_s_0).Z;
            pTVar15 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar17);
            iVar17 = iVar17 + 1;
            (pTVar15->field0_0x0)._s_0.X = dVar5;
            (pTVar15->field0_0x0)._s_0.Y = dVar6;
            (pTVar15->field0_0x0)._s_0.Z = dVar2;
          } while (iVar17 < iVar3);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c0aa0

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  TVector<double>_u_0 *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  int iVar17;
  void *local_a8 [2];
  TArrayView<void_const_*,int> local_98;
  TArrayView<void_const_*,int> local_88;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [2];
  
  uVar8 = local_98._12_4_;
  local_98.ArrayNum = 1;
  local_a8[0] = (void *)0x0;
  local_98.DataPtr = local_a8;
  bVar9 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_98);
  if (bVar9) {
    cVar10 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar10 == '\0') {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820729906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
    }
    else {
      local_88.ArrayNum = 1;
      local_88._12_4_ = uVar8;
      local_88.DataPtr = local_a8;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_88
                );
      pvVar7 = local_a8[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (*(char *)((longlong)local_a8[0] + 0x168) != '\0')) {
        iVar12 = FSpline::GetNumControlPoints((FSpline *)((longlong)local_a8[0] + 0x168));
      }
      else {
        iVar12 = *(int *)((longlong)local_a8[0] + 0xf8);
      }
      if (iVar12 != 0) {
        iVar3 = param_1->ArrayNum;
        iVar17 = 0;
        if (0 < iVar3) {
          do {
            uVar16 = (iVar17 + param_2) % iVar12;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (*(char *)((longlong)pvVar7 + 0x168) != '\0')) {
              pTVar14 = &FSpline::GetInTangent
                                   ((FSpline *)((longlong)pvVar7 + 0x168),local_60,uVar16)->
                         field0_0x0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar16 < *(int *)((longlong)pvVar7 + 0xf8)) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              pdVar1 = (double *)
                       ((longlong)(int)uVar16 * 0x58 + 0x20 + *(longlong *)((longlong)pvVar7 + 0xf0)
                       );
              pTVar14 = &local_78;
              local_78._s_0.X = *pdVar1;
              local_78._s_0.Y = pdVar1[1];
              local_78._s_0.Z =
                   *(double *)
                    ((longlong)(int)uVar16 * 0x58 + 0x30 + *(longlong *)((longlong)pvVar7 + 0xf0));
            }
            dVar5 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
            dVar6 = (pTVar14->_s_0).Y;
            dVar2 = (pTVar14->_s_0).Z;
            pTVar15 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar17);
            iVar17 = iVar17 + 1;
            (pTVar15->field0_0x0)._s_0.X = dVar5;
            (pTVar15->field0_0x0)._s_0.Y = dVar6;
            (pTVar15->field0_0x0)._s_0.Z = dVar2;
          } while (iVar17 < iVar3);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c0cc0

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  TVector<double>_u_0 *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  int iVar17;
  void *local_a8 [2];
  TArrayView<void_const_*,int> local_98;
  TArrayView<void_const_*,int> local_88;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [2];
  
  uVar8 = local_98._12_4_;
  local_98.ArrayNum = 1;
  local_a8[0] = (void *)0x0;
  local_98.DataPtr = local_a8;
  bVar9 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_98);
  if (bVar9) {
    cVar10 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar10 == '\0') {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820729906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
    }
    else {
      local_88.ArrayNum = 1;
      local_88._12_4_ = uVar8;
      local_88.DataPtr = local_a8;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_88
                );
      pvVar7 = local_a8[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (*(char *)((longlong)local_a8[0] + 0x168) != '\0')) {
        iVar12 = FSpline::GetNumControlPoints((FSpline *)((longlong)local_a8[0] + 0x168));
      }
      else {
        iVar12 = *(int *)((longlong)local_a8[0] + 0xf8);
      }
      if (iVar12 != 0) {
        iVar3 = param_1->ArrayNum;
        iVar17 = 0;
        if (0 < iVar3) {
          do {
            uVar16 = (iVar17 + param_2) % iVar12;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (*(char *)((longlong)pvVar7 + 0x168) != '\0')) {
              pTVar14 = &FSpline::GetOutTangent
                                   ((FSpline *)((longlong)pvVar7 + 0x168),local_60,uVar16)->
                         field0_0x0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar16 < *(int *)((longlong)pvVar7 + 0xf8)) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              pdVar1 = (double *)
                       ((longlong)(int)uVar16 * 0x58 + 0x38 + *(longlong *)((longlong)pvVar7 + 0xf0)
                       );
              pTVar14 = &local_78;
              local_78._s_0.X = *pdVar1;
              local_78._s_0.Y = pdVar1[1];
              local_78._s_0.Z =
                   *(double *)
                    ((longlong)(int)uVar16 * 0x58 + 0x48 + *(longlong *)((longlong)pvVar7 + 0xf0));
            }
            dVar5 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
            dVar6 = (pTVar14->_s_0).Y;
            dVar2 = (pTVar14->_s_0).Z;
            pTVar15 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar17);
            iVar17 = iVar17 + 1;
            (pTVar15->field0_0x0)._s_0.X = dVar5;
            (pTVar15->field0_0x0)._s_0.Y = dVar6;
            (pTVar15->field0_0x0)._s_0.Z = dVar2;
          } while (iVar17 < iVar3);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c0ee0

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 (*pauVar15) [16];
  bool bVar16;
  char cVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  TVector<double>_u_0 *pTVar21;
  TVector<double> *pTVar22;
  uint uVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  double dVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 (*local_158 [2]) [16];
  TArrayView<void_const_*,int> local_148;
  TArrayView<void_const_*,int> local_138;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  undefined1 local_100 [16];
  double local_f0;
  TVector<double> local_e8 [8];
  
  uVar38 = local_148._12_4_;
  local_148.ArrayNum = 1;
  local_158[0] = (undefined1 (*) [16])0x0;
  local_148.DataPtr = local_158;
  bVar16 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_148);
  if (bVar16) {
    cVar17 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar17 == '\0') {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820729906>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar16) {
        pcVar5 = (code *)swi(3);
        uVar18 = (*pcVar5)();
        return (bool)uVar18;
      }
    }
    else {
      local_138.ArrayNum = 1;
      local_138._12_4_ = uVar38;
      local_138.DataPtr = local_158;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 &local_138);
      pauVar15 = local_158[0];
      local_128 = *(double *)local_158[0][5];
      dStack_120 = *(double *)(local_158[0][5] + 8);
      auVar3 = *local_158[0];
      auVar26 = local_158[0][1];
      dVar10 = *(double *)local_158[0][2];
      dVar11 = *(double *)(local_158[0][2] + 8);
      dVar12 = *(double *)local_158[0][3];
      dVar13 = *(double *)local_158[0][4];
      dVar14 = *(double *)(local_158[0][4] + 8);
      if ((PCGSplineStruct::GUseSplineCurves == false) && (local_158[0][0x16][8] != '\0')) {
        iVar19 = FSpline::GetNumControlPoints((FSpline *)(local_158[0][0x16] + 8));
      }
      else {
        iVar19 = *(int *)(local_158[0][0xf] + 8);
      }
      if (iVar19 != 0) {
        iVar4 = param_1->ArrayNum;
        iVar24 = 0;
        if (0 < iVar4) {
          auVar41 = blendpd(auVar3,auVar26,2);
          dVar8 = auVar26._8_8_;
          dVar7 = auVar26._0_8_;
          dVar9 = auVar3._8_8_;
          do {
            uVar23 = (iVar24 + param_2) % iVar19;
            if ((PCGSplineStruct::GUseSplineCurves == false) && (pauVar15[0x16][8] != '\0')) {
              pTVar21 = &FSpline::GetLocation((FSpline *)(pauVar15[0x16] + 8),local_e8,uVar23)->
                         field0_0x0;
            }
            else {
              uVar20 = 0;
              if ((int)uVar23 < *(int *)(pauVar15[0xf] + 8)) {
                uVar20 = ~uVar23 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                uVar18 = (*pcVar5)();
                return (bool)uVar18;
              }
              pdVar1 = (double *)((longlong)(int)uVar23 * 0x58 + 8 + *(longlong *)pauVar15[0xf]);
              pTVar21 = &local_118;
              local_118._s_0.X = *pdVar1;
              local_118._s_0.Y = pdVar1[1];
              local_118._s_0.Z =
                   *(double *)((longlong)(int)uVar23 * 0x58 + 0x18 + *(longlong *)pauVar15[0xf]);
            }
            dVar32 = (((TVector<double>_u_0 *)&(pTVar21->_s_0).X)->_s_0).X;
            dVar36 = (pTVar21->_s_0).Y;
            dVar2 = (pTVar21->_s_0).Z;
            pTVar22 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar24);
            (pTVar22->field0_0x0)._s_0.X = dVar32;
            (pTVar22->field0_0x0)._s_0.Y = dVar36;
            (pTVar22->field0_0x0)._s_0.Z = dVar2;
            pTVar22 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar24);
            dVar39 = (pTVar22->field0_0x0)._s_0.Z * local_128;
            dVar36 = (pTVar22->field0_0x0)._s_0.X * dVar13;
            dVar37 = (pTVar22->field0_0x0)._s_0.Y * dVar14;
            auVar33._8_4_ = SUB84(dVar37,0);
            auVar33._0_8_ = dVar36;
            uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
            auVar33._12_4_ = uVar38;
            auVar25._8_4_ = SUB84(dVar37,0);
            auVar25._0_8_ = dVar36;
            auVar25._12_4_ = uVar38;
            auVar26._8_8_ = dStack_120 * 0.0;
            auVar26._0_8_ = dVar39;
            auVar26 = blendpd(auVar25,auVar26,2);
            auVar34._0_8_ = auVar33._8_8_ * auVar3._0_8_ - dVar9 * dVar36;
            auVar34._8_8_ = dVar39 * dVar9 - dVar7 * dVar37;
            auVar27._0_8_ = auVar26._0_8_ * dVar7 - auVar41._0_8_ * dVar39;
            auVar27._8_8_ = auVar26._8_8_ * dVar8 - auVar41._8_8_ * dStack_120 * 0.0;
            auVar26 = blendpd(auVar34,auVar27,2);
            dVar2 = auVar34._8_8_ + auVar34._8_8_;
            dVar32 = auVar27._0_8_ + auVar27._0_8_;
            uVar38 = (undefined4)((ulonglong)dVar32 >> 0x20);
            auVar35._0_8_ = auVar26._0_8_ + auVar26._0_8_;
            auVar35._8_8_ = auVar26._8_8_ + auVar26._8_8_;
            auVar30._8_4_ = SUB84(dVar32,0);
            auVar30._0_8_ = dVar2;
            auVar30._12_4_ = uVar38;
            auVar28._8_4_ = SUB84(dVar32,0);
            auVar28._0_8_ = dVar2;
            auVar28._12_4_ = uVar38;
            auVar26 = blendpd(auVar28,auVar35,2);
            auVar31._0_8_ = auVar30._8_8_ * auVar3._0_8_ - dVar2 * dVar9;
            auVar31._8_8_ = auVar35._0_8_ * dVar9 - dVar32 * dVar7;
            auVar29._0_8_ = auVar26._0_8_ * dVar7 - auVar35._0_8_ * auVar41._0_8_;
            auVar29._8_8_ = auVar26._8_8_ * dVar8 - auVar35._8_8_ * auVar41._8_8_;
            auVar26 = blendpd(auVar31,auVar29,2);
            dVar2 = dVar2 * dVar8 + dVar36 + auVar31._8_8_ + dVar10;
            dVar32 = dVar32 * dVar8 + dVar37 + auVar29._0_8_ + dVar11;
            uVar38 = SUB84(dVar32,0);
            uVar40 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = auVar35._0_8_ * dVar8 + dVar39 + auVar26._0_8_ + dVar12;
            local_100._8_4_ = uVar38;
            local_100._0_8_ = dVar2;
            local_100._12_4_ = uVar40;
            local_f0 = dVar32;
            pTVar22 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar24);
            iVar24 = iVar24 + 1;
            auVar6._8_4_ = uVar38;
            auVar6._0_8_ = dVar2;
            auVar6._12_4_ = uVar40;
            *(undefined1 (*) [16])&pTVar22->field0_0x0 = auVar6;
            (pTVar22->field0_0x0)._s_0.Z = dVar32;
          } while (iVar24 < iVar4);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c12b0

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>::GetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  TVector<double>_u_0 *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  int iVar17;
  void *local_a8 [2];
  TArrayView<void_const_*,int> local_98;
  TArrayView<void_const_*,int> local_88;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [2];
  
  uVar8 = local_98._12_4_;
  local_98.ArrayNum = 1;
  local_a8[0] = (void *)0x0;
  local_98.DataPtr = local_a8;
  bVar9 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_98);
  if (bVar9) {
    cVar10 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar10 == '\0') {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820729906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
    }
    else {
      local_88.ArrayNum = 1;
      local_88._12_4_ = uVar8;
      local_88.DataPtr = local_a8;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_88
                );
      pvVar7 = local_a8[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (*(char *)((longlong)local_a8[0] + 0x168) != '\0')) {
        iVar12 = FSpline::GetNumControlPoints((FSpline *)((longlong)local_a8[0] + 0x168));
      }
      else {
        iVar12 = *(int *)((longlong)local_a8[0] + 0xf8);
      }
      if (iVar12 != 0) {
        iVar3 = param_1->ArrayNum;
        iVar17 = 0;
        if (0 < iVar3) {
          do {
            uVar16 = (iVar17 + param_2) % iVar12;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (*(char *)((longlong)pvVar7 + 0x168) != '\0')) {
              pTVar14 = &FSpline::GetLocation((FSpline *)((longlong)pvVar7 + 0x168),local_60,uVar16)
                         ->field0_0x0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar16 < *(int *)((longlong)pvVar7 + 0xf8)) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              pdVar1 = (double *)
                       ((longlong)(int)uVar16 * 0x58 + 8 + *(longlong *)((longlong)pvVar7 + 0xf0));
              pTVar14 = &local_78;
              local_78._s_0.X = *pdVar1;
              local_78._s_0.Y = pdVar1[1];
              local_78._s_0.Z =
                   *(double *)
                    ((longlong)(int)uVar16 * 0x58 + 0x18 + *(longlong *)((longlong)pvVar7 + 0xf0));
            }
            dVar5 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
            dVar6 = (pTVar14->_s_0).Y;
            dVar2 = (pTVar14->_s_0).Z;
            pTVar15 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar17);
            iVar17 = iVar17 + 1;
            (pTVar15->field0_0x0)._s_0.X = dVar5;
            (pTVar15->field0_0x0)._s_0.Y = dVar6;
            (pTVar15->field0_0x0)._s_0.Z = dVar2;
          } while (iVar17 < iVar3);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c14d0

bool __thiscall
FPCGControlPointsAccessor<__int64,6,0>::GetRangeImpl
          (FPCGControlPointsAccessor<__int64,6,0> *this,TArrayView<__int64,int> *param_1,int param_2
          ,IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  EInterpCurveMode EVar9;
  uint uVar10;
  Type TVar11;
  long64 *plVar12;
  uint uVar13;
  int iVar14;
  void *local_68 [2];
  TArrayView<void_const_*,int> local_58;
  TArrayView<void_const_*,int> local_48 [2];
  
  uVar4 = local_58._12_4_;
  local_58.ArrayNum = 1;
  local_68[0] = (void *)0x0;
  local_58.DataPtr = local_68;
  bVar5 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_58);
  if (bVar5) {
    cVar6 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar6 == '\0') {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820729906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x32,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    else {
      local_48[0].ArrayNum = 1;
      local_48[0]._12_4_ = uVar4;
      local_48[0].DataPtr = local_68;
      PCGPropertyAccessor::AddressOffset<void_const_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_48)
      ;
      pvVar3 = local_68[0];
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (*(char *)((longlong)local_68[0] + 0x168) != '\0')) {
        iVar8 = FSpline::GetNumControlPoints((FSpline *)((longlong)local_68[0] + 0x168));
      }
      else {
        iVar8 = *(int *)((longlong)local_68[0] + 0xf8);
      }
      if (iVar8 != 0) {
        iVar1 = param_1->ArrayNum;
        iVar14 = 0;
        if (0 < iVar1) {
          do {
            uVar13 = (iVar14 + param_2) % iVar8;
            if ((PCGSplineStruct::GUseSplineCurves == false) &&
               (*(char *)((longlong)pvVar3 + 0x168) != '\0')) {
              EVar9 = FSpline::GetSplinePointType((FSpline *)((longlong)pvVar3 + 0x168),uVar13);
            }
            else {
              uVar10 = 0;
              if ((int)uVar13 < *(int *)((longlong)pvVar3 + 0xf8)) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar7 = (*pcVar2)();
                return (bool)uVar7;
              }
              EVar9 = (EInterpCurveMode)
                      *(byte *)((longlong)(int)uVar13 * 0x58 + 0x50 +
                               *(longlong *)((longlong)pvVar3 + 0xf0));
            }
            TVar11 = ConvertInterpCurveModeToSplinePointType(EVar9);
            plVar12 = TArrayView<__int64,int>::operator[](param_1,iVar14);
            iVar14 = iVar14 + 1;
            *plVar12 = (longlong)(int)TVar11;
          } while (iVar14 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e61e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,1> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FPCGSplineStruct *this_00;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  undefined4 extraout_EAX;
  int iVar13;
  TQuat<double> *pTVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  FPCGSplineStruct *local_1a8 [2];
  TArrayView<void_*,int> local_198;
  TArrayView<void_*,int> local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TTransform<double> local_158;
  TTransform<double> local_f8 [2];
  
  uVar19 = local_198._12_4_;
  local_198.ArrayNum = 1;
  iVar17 = 0;
  local_1a8[0] = (FPCGSplineStruct *)0x0;
  local_198.DataPtr = local_1a8;
  bVar10 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_198);
  if (bVar10) {
    cVar11 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar11 == '\0') {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820730008>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return (bool)uVar12;
      }
    }
    else {
      plVar16 = &this->_padding_;
      local_188.ArrayNum = 1;
      local_188._12_4_ = uVar19;
      local_188.DataPtr = local_1a8;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar16,&local_188);
      this_00 = local_1a8[0];
      local_158.Rotation.XY.m128d_f64[0] = (local_1a8[0]->Transform).Rotation.XY.m128d_f64[0];
      local_158.Rotation.XY.m128d_f64[1] = (local_1a8[0]->Transform).Rotation.XY.m128d_f64[1];
      local_158.Rotation.ZW.m128d_f64[0] = (local_1a8[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_158.Rotation.ZW.m128d_f64[1] = (local_1a8[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_158.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_1a8[0]->Transform).Scale3D.ZW.m128d_f64;
      local_158.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_1a8[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_1a8[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_1a8[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      local_158.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_1a8[0]->Transform).Scale3D.XY.m128d_f64;
      local_158.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_1a8[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_1a8[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_1a8[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_158.Translation.XY.m128d_f64[0] = (local_1a8[0]->Transform).Translation.XY.m128d_f64[0];
      local_158.Translation.XY.m128d_f64[1] = (local_1a8[0]->Transform).Translation.XY.m128d_f64[1];
      local_158.Translation.ZW.m128d_f64[0] = (local_1a8[0]->Transform).Translation.ZW.m128d_f64[0];
      local_158.Translation.ZW.m128d_f64[1] = (local_1a8[0]->Transform).Translation.ZW.m128d_f64[1];
      lVar18 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(local_158.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                                 local_158.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar18;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(local_158.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       local_158.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar15 = movmskpd((int)plVar16,auVar4);
      lVar18 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(local_158.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                                 local_158.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar18;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                      (double)CONCAT44(local_158.Scale3D.XY.m128d_f64[0]._4_4_ &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       local_158.Scale3D.XY.m128d_f64[0]._0_4_ &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar13 = movmskpd(extraout_EAX,auVar3);
      if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
        uVar19 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar20 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar21 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar22 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar23 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar24 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar25 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar26 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_158,local_f8);
        uVar19 = local_f8[0].Rotation.XY.m128d_f64[0]._0_4_;
        uVar20 = local_f8[0].Rotation.XY.m128d_f64[0]._4_4_;
        uVar21 = local_f8[0].Rotation.XY.m128d_f64[1]._0_4_;
        uVar22 = local_f8[0].Rotation.XY.m128d_f64[1]._4_4_;
        uVar23 = local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_;
        uVar24 = local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_;
        uVar25 = local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_;
        uVar26 = local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_;
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar13 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar13 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar13 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar14 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,iVar17);
            dVar6 = pTVar14->X;
            dVar7 = pTVar14->Y;
            dVar8 = pTVar14->Z;
            dVar9 = pTVar14->W;
            dVar5 = (double)CONCAT44(uVar20,uVar19) * dVar8 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    (double)CONCAT44(uVar26,uVar25) * dVar7 +
                    dVar9 * (double)CONCAT44(uVar22,uVar21) *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    (double)CONCAT44(uVar24,uVar23) * dVar6 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            local_178._8_4_ = SUB84(dVar5,0);
            local_178._0_8_ =
                 (double)CONCAT44(uVar20,uVar19) * dVar9 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 (double)CONCAT44(uVar26,uVar25) * dVar6 +
                 dVar8 * (double)CONCAT44(uVar22,uVar21) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 (double)CONCAT44(uVar24,uVar23) * dVar7 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(uVar20,uVar19) * dVar6 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dVar9 * (double)CONCAT44(uVar26,uVar25) +
                    (double)CONCAT44(uVar22,uVar21) * dVar7 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    (double)CONCAT44(uVar24,uVar23) * dVar8 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_168._8_4_ = SUB84(dVar5,0);
            local_168._0_8_ =
                 (double)CONCAT44(uVar20,uVar19) * dVar7 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar8 * (double)CONCAT44(uVar26,uVar25) +
                 (double)CONCAT44(uVar22,uVar21) * dVar6 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 (double)CONCAT44(uVar24,uVar23) * dVar9 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            FPCGSplineStruct::SetRotation
                      (this_00,(param_2 + iVar17) % iVar13,(TQuat<double> *)local_178);
            iVar17 = iVar17 + 1;
          } while (iVar17 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e64e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TQuat<double>,1,0> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FPCGSplineStruct *this_00;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 extraout_EAX;
  int iVar9;
  TQuat<double> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  FPCGSplineStruct *local_158 [2];
  TArrayView<void_*,int> local_148;
  TArrayView<void_*,int> local_138;
  TQuat<double> local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  
  uVar5 = local_148._12_4_;
  local_148.ArrayNum = 1;
  iVar13 = 0;
  local_158[0] = (FPCGSplineStruct *)0x0;
  local_148.DataPtr = local_158;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_148);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820730008>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      plVar12 = &this->_padding_;
      local_138.ArrayNum = 1;
      local_138._12_4_ = uVar5;
      local_138.DataPtr = local_158;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar12,&local_138);
      this_00 = local_158[0];
      local_108.Rotation.XY.m128d_f64[0] = (local_158[0]->Transform).Rotation.XY.m128d_f64[0];
      local_108.Rotation.XY.m128d_f64[1] = (local_158[0]->Transform).Rotation.XY.m128d_f64[1];
      local_108.Rotation.ZW.m128d_f64[0] = (local_158[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = (local_158[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_108.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_158[0]->Transform).Scale3D.XY.m128d_f64;
      local_108.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_158[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_108.Translation.XY.m128d_f64[0] = (local_158[0]->Transform).Translation.XY.m128d_f64[0];
      local_108.Translation.XY.m128d_f64[1] = (local_158[0]->Transform).Translation.XY.m128d_f64[1];
      auVar15._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_108.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_108.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar15._8_4_ = _UNK_15061cc88 & local_108.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar15._12_4_ = _UNK_15061cc8c & local_108.Scale3D.XY.m128d_f64[1]._4_4_;
      local_108.Translation.ZW.m128d_f64[0] = (local_158[0]->Transform).Translation.ZW.m128d_f64[0];
      local_108.Translation.ZW.m128d_f64[1] = (local_158[0]->Transform).Translation.ZW.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_158[0]->Transform).Scale3D.ZW.m128d_f64;
      local_108.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      lVar14 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_108.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_108.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_108.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_108.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar4);
      lVar14 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar15._8_8_);
      auVar3._8_4_ = (int)lVar14;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar15._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar9 = movmskpd(extraout_EAX,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar9 != 0) {
        UE::Math::TTransform<double>::InverseFast(&local_108,&local_a8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar9 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar9 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar9 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar10 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,iVar13);
            local_128.X = pTVar10->X;
            local_128.Y = pTVar10->Y;
            local_128.Z = pTVar10->Z;
            local_128.W = pTVar10->W;
            FPCGSplineStruct::SetRotation(this_00,(param_2 + iVar13) % iVar9,&local_128);
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e66d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,1> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FPCGSplineStruct *this_00;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 extraout_EAX;
  int iVar9;
  TTransform<double> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auStackY_298 [32];
  FPCGSplineStruct *local_268 [2];
  TArrayView<void_*,int> local_258;
  TArrayView<void_*,int> local_248;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TQuat<double> local_208;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar5 = local_258._12_4_;
  local_258.ArrayNum = 1;
  iVar14 = 0;
  local_268[0] = (FPCGSplineStruct *)0x0;
  local_258.DataPtr = local_268;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_258);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820730008>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      plVar12 = &this->_padding_;
      local_248.ArrayNum = 1;
      local_248._12_4_ = uVar5;
      local_248.DataPtr = local_268;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar12,&local_248);
      this_00 = local_268[0];
      local_1e8.Rotation.XY.m128d_f64[0] = (local_268[0]->Transform).Rotation.XY.m128d_f64[0];
      local_1e8.Rotation.XY.m128d_f64[1] = (local_268[0]->Transform).Rotation.XY.m128d_f64[1];
      local_1e8.Rotation.ZW.m128d_f64[0] = (local_268[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_1e8.Rotation.ZW.m128d_f64[1] = (local_268[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_1e8.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_268[0]->Transform).Scale3D.XY.m128d_f64;
      local_1e8.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_268[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_1e8.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_268[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_1e8.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_268[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_1e8.Translation.XY.m128d_f64[0] = (local_268[0]->Transform).Translation.XY.m128d_f64[0];
      local_1e8.Translation.XY.m128d_f64[1] = (local_268[0]->Transform).Translation.XY.m128d_f64[1];
      auVar16._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_1e8.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_1e8.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar16._8_4_ = _UNK_15061cc88 & local_1e8.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar16._12_4_ = _UNK_15061cc8c & local_1e8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_1e8.Translation.ZW.m128d_f64[0] = (local_268[0]->Transform).Translation.ZW.m128d_f64[0];
      local_1e8.Translation.ZW.m128d_f64[1] = (local_268[0]->Transform).Translation.ZW.m128d_f64[1];
      local_1e8.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_268[0]->Transform).Scale3D.ZW.m128d_f64;
      local_1e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_268[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_268[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_268[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      lVar15 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar15;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_1e8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_1e8.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar4);
      lVar15 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar16._8_8_);
      auVar3._8_4_ = (int)lVar15;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar16._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar9 = movmskpd(extraout_EAX,auVar3);
      if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
        local_c8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_c8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_c8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_c8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_1e8,&local_c8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar9 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar9 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar9 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            iVar13 = (param_2 + iVar14) % iVar9;
            pTVar10 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                (param_1,iVar14);
            local_188.Rotation.XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
            local_188.Rotation.XY.m128d_f64[1] = (pTVar10->Rotation).XY.m128d_f64[1];
            local_188.Rotation.ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
            local_188.Rotation.ZW.m128d_f64[1] = (pTVar10->Rotation).ZW.m128d_f64[1];
            local_188.Translation.XY.m128d_f64[0] = (pTVar10->Translation).XY.m128d_f64[0];
            local_188.Translation.XY.m128d_f64[1] = (pTVar10->Translation).XY.m128d_f64[1];
            local_188.Translation.ZW.m128d_f64[0] = (pTVar10->Translation).ZW.m128d_f64[0];
            local_188.Translation.ZW.m128d_f64[1] = (pTVar10->Translation).ZW.m128d_f64[1];
            local_188.Scale3D.XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
            local_188.Scale3D.XY.m128d_f64[1] = (pTVar10->Scale3D).XY.m128d_f64[1];
            local_188.Scale3D.ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
            local_188.Scale3D.ZW.m128d_f64[1] = (pTVar10->Scale3D).ZW.m128d_f64[1];
            local_128.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_128.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_128.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_128.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_128.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_128.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_128.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_128.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_128.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_128.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_128,&local_188,&local_c8);
            local_188.Rotation.XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
            local_188.Rotation.XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
            local_188.Rotation.ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
            local_188.Rotation.ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
            local_188.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
            local_188.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
            local_188.Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
            local_188.Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1];
            local_188.Translation.XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0];
            local_188.Translation.XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1];
            local_188.Translation.ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0];
            local_188.Translation.ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1];
            local_238._s_0.X = local_128.Translation.XY.m128d_f64[0];
            local_238._s_0.Y = local_128.Translation.XY.m128d_f64[1];
            local_238._s_0.Z = local_128.Translation.ZW.m128d_f64[0];
            FPCGSplineStruct::SetLocation(this_00,iVar13,(TVector<double> *)&local_238._s_0);
            local_208.X = local_188.Rotation.XY.m128d_f64[0];
            local_208.Y = local_188.Rotation.XY.m128d_f64[1];
            local_208.Z = local_188.Rotation.ZW.m128d_f64[0];
            local_208.W = local_188.Rotation.ZW.m128d_f64[1];
            FPCGSplineStruct::SetRotation(this_00,iVar13,&local_208);
            local_220._s_0.Z = local_188.Scale3D.ZW.m128d_f64[0];
            local_220._s_0.X = local_188.Scale3D.XY.m128d_f64[0];
            local_220._s_0.Y = local_188.Scale3D.XY.m128d_f64[1];
            FPCGSplineStruct::SetScale(this_00,iVar13,(TVector<double> *)&local_220._s_0);
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e6a50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TTransform<double>,3,0> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FPCGSplineStruct *this_00;
  undefined4 uVar12;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 extraout_EAX;
  int iVar16;
  TTransform<double> *pTVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  FPCGSplineStruct *local_1c8 [2];
  TArrayView<void_*,int> local_1b8;
  TArrayView<void_*,int> local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  
  uVar12 = local_1b8._12_4_;
  local_1b8.ArrayNum = 1;
  iVar21 = 0;
  local_1c8[0] = (FPCGSplineStruct *)0x0;
  local_1b8.DataPtr = local_1c8;
  bVar13 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_1b8);
  if (bVar13) {
    cVar14 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar14 == '\0') {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820730008>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        uVar15 = (*pcVar2)();
        return (bool)uVar15;
      }
    }
    else {
      plVar19 = &this->_padding_;
      local_1a8.ArrayNum = 1;
      local_1a8._12_4_ = uVar12;
      local_1a8.DataPtr = local_1c8;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar19,&local_1a8);
      this_00 = local_1c8[0];
      local_148.Rotation.XY.m128d_f64[0] = (local_1c8[0]->Transform).Rotation.XY.m128d_f64[0];
      local_148.Rotation.XY.m128d_f64[1] = (local_1c8[0]->Transform).Rotation.XY.m128d_f64[1];
      local_148.Rotation.ZW.m128d_f64[0] = (local_1c8[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_148.Rotation.ZW.m128d_f64[1] = (local_1c8[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_148.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_1c8[0]->Transform).Scale3D.XY.m128d_f64;
      local_148.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_1c8[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_1c8[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_1c8[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_148.Translation.XY.m128d_f64[0] = (local_1c8[0]->Transform).Translation.XY.m128d_f64[0];
      local_148.Translation.XY.m128d_f64[1] = (local_1c8[0]->Transform).Translation.XY.m128d_f64[1];
      auVar23._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_148.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_148.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar23._8_4_ = _UNK_15061cc88 & local_148.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar23._12_4_ = _UNK_15061cc8c & local_148.Scale3D.XY.m128d_f64[1]._4_4_;
      local_148.Translation.ZW.m128d_f64[0] = (local_1c8[0]->Transform).Translation.ZW.m128d_f64[0];
      local_148.Translation.ZW.m128d_f64[1] = (local_1c8[0]->Transform).Translation.ZW.m128d_f64[1];
      local_148.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_1c8[0]->Transform).Scale3D.ZW.m128d_f64;
      local_148.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_1c8[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_1c8[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_1c8[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      lVar22 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_148.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_148.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar22;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_148.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_148.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      uVar18 = movmskpd((int)plVar19,auVar4);
      lVar22 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar23._8_8_);
      auVar3._8_4_ = (int)lVar22;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar23._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar16 = movmskpd(extraout_EAX,auVar3);
      if ((uVar18 & 0x3fffffff) != 0 || iVar16 != 0) {
        UE::Math::TTransform<double>::InverseFast(&local_148,&local_e8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar16 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar16 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar16 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            iVar20 = (param_2 + iVar21) % iVar16;
            pTVar17 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                (param_1,iVar21);
            local_198._s_0.X = (pTVar17->Translation).XY.m128d_f64[0];
            local_198._s_0.Y = (pTVar17->Translation).XY.m128d_f64[1];
            local_198._s_0.Z = (pTVar17->Translation).ZW.m128d_f64[0];
            dVar6 = (pTVar17->Rotation).XY.m128d_f64[0];
            dVar7 = (pTVar17->Rotation).XY.m128d_f64[1];
            dVar8 = (pTVar17->Rotation).ZW.m128d_f64[0];
            dVar9 = (pTVar17->Rotation).ZW.m128d_f64[1];
            dVar10 = (pTVar17->Scale3D).XY.m128d_f64[0];
            dVar11 = (pTVar17->Scale3D).XY.m128d_f64[1];
            dVar5 = (pTVar17->Scale3D).ZW.m128d_f64[0];
            FPCGSplineStruct::SetLocation(this_00,iVar20,(TVector<double> *)&local_198._s_0);
            local_168.X = dVar6;
            local_168.Y = dVar7;
            local_168.Z = dVar8;
            local_168.W = dVar9;
            FPCGSplineStruct::SetRotation(this_00,iVar20,&local_168);
            local_180._s_0.X = dVar10;
            local_180._s_0.Y = dVar11;
            local_180._s_0.Z = dVar5;
            FPCGSplineStruct::SetScale(this_00,iVar20,(TVector<double> *)&local_180._s_0);
            iVar21 = iVar21 + 1;
          } while (iVar21 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,1> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FPCGSplineStruct *this_00;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 extraout_EAX;
  int iVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auStackY_258 [32];
  FPCGSplineStruct *local_228 [2];
  TArrayView<void_*,int> local_218;
  TVector<double>_u_0 local_208;
  TArrayView<void_*,int> local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar5 = local_218._12_4_;
  local_218.ArrayNum = 1;
  iVar13 = 0;
  local_228[0] = (FPCGSplineStruct *)0x0;
  local_218.DataPtr = local_228;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_218);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820730008>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      plVar12 = &this->_padding_;
      local_1e8.ArrayNum = 1;
      local_1e8._12_4_ = uVar5;
      local_1e8.DataPtr = local_228;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar12,&local_1e8);
      this_00 = local_228[0];
      local_1d8.Rotation.XY.m128d_f64[0] = (local_228[0]->Transform).Rotation.XY.m128d_f64[0];
      local_1d8.Rotation.XY.m128d_f64[1] = (local_228[0]->Transform).Rotation.XY.m128d_f64[1];
      local_1d8.Rotation.ZW.m128d_f64[0] = (local_228[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_1d8.Rotation.ZW.m128d_f64[1] = (local_228[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_1d8.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_228[0]->Transform).Scale3D.XY.m128d_f64;
      local_1d8.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_228[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_228[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_228[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_1d8.Translation.XY.m128d_f64[0] = (local_228[0]->Transform).Translation.XY.m128d_f64[0];
      local_1d8.Translation.XY.m128d_f64[1] = (local_228[0]->Transform).Translation.XY.m128d_f64[1];
      auVar15._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_1d8.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_1d8.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar15._8_4_ = _UNK_15061cc88 & local_1d8.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar15._12_4_ = _UNK_15061cc8c & local_1d8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_1d8.Translation.ZW.m128d_f64[0] = (local_228[0]->Transform).Translation.ZW.m128d_f64[0];
      local_1d8.Translation.ZW.m128d_f64[1] = (local_228[0]->Transform).Translation.ZW.m128d_f64[1];
      local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_228[0]->Transform).Scale3D.ZW.m128d_f64;
      local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_228[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_228[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_228[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      lVar14 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar4);
      lVar14 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar15._8_8_);
      auVar3._8_4_ = (int)lVar14;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar15._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar9 = movmskpd(extraout_EAX,auVar3);
      if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
        local_118.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_118.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_118.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_118.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_1d8,&local_118);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar9 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar9 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar9 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar10 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar13);
            local_b8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
            local_b8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
            local_208._s_0.X = (pTVar10->field0_0x0)._s_0.X;
            local_208._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
            local_b8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
            local_b8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
            local_b8.Translation.XY.m128d_f64[0] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_b8.Translation.XY.m128d_f64[1] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_b8.Translation.ZW.m128d_f64[0] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_b8.Translation.ZW.m128d_f64[1] = 0.0;
            local_208._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
            local_178.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_178.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_178.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_178.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_178.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_178.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_178.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_178.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_178.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_178.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_b8.Scale3D.XY.m128d_f64[0] = local_208._s_0.X;
            local_b8.Scale3D.XY.m128d_f64[1] = local_208._s_0.Y;
            local_b8.Scale3D.ZW.m128d_f64[0] = local_208._s_0.Z;
            UE::Math::TTransform<double>::Multiply(&local_178,&local_b8,&local_118);
            local_208._s_0.Z = local_178.Scale3D.ZW.m128d_f64[0];
            local_208._s_0.X = local_178.Scale3D.XY.m128d_f64[0];
            local_208._s_0.Y = local_178.Scale3D.XY.m128d_f64[1];
            FPCGSplineStruct::SetScale
                      (this_00,(param_2 + iVar13) % iVar9,(TVector<double> *)&local_208._s_0);
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e6fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,2,0> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FPCGSplineStruct *this_00;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 extraout_EAX;
  int iVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  FPCGSplineStruct *local_158 [2];
  TArrayView<void_*,int> local_148;
  TArrayView<void_*,int> local_138;
  TVector<double>_u_0 local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  
  uVar5 = local_148._12_4_;
  local_148.ArrayNum = 1;
  iVar13 = 0;
  local_158[0] = (FPCGSplineStruct *)0x0;
  local_148.DataPtr = local_158;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_148);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820730008>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      plVar12 = &this->_padding_;
      local_138.ArrayNum = 1;
      local_138._12_4_ = uVar5;
      local_138.DataPtr = local_158;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar12,&local_138);
      this_00 = local_158[0];
      local_108.Rotation.XY.m128d_f64[0] = (local_158[0]->Transform).Rotation.XY.m128d_f64[0];
      local_108.Rotation.XY.m128d_f64[1] = (local_158[0]->Transform).Rotation.XY.m128d_f64[1];
      local_108.Rotation.ZW.m128d_f64[0] = (local_158[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = (local_158[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_108.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_158[0]->Transform).Scale3D.XY.m128d_f64;
      local_108.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_158[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_108.Translation.XY.m128d_f64[0] = (local_158[0]->Transform).Translation.XY.m128d_f64[0];
      local_108.Translation.XY.m128d_f64[1] = (local_158[0]->Transform).Translation.XY.m128d_f64[1];
      auVar15._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_108.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_108.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar15._8_4_ = _UNK_15061cc88 & local_108.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar15._12_4_ = _UNK_15061cc8c & local_108.Scale3D.XY.m128d_f64[1]._4_4_;
      local_108.Translation.ZW.m128d_f64[0] = (local_158[0]->Transform).Translation.ZW.m128d_f64[0];
      local_108.Translation.ZW.m128d_f64[1] = (local_158[0]->Transform).Translation.ZW.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_158[0]->Transform).Scale3D.ZW.m128d_f64;
      local_108.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      lVar14 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_108.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_108.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_108.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_108.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar4);
      lVar14 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar15._8_8_);
      auVar3._8_4_ = (int)lVar14;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar15._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar9 = movmskpd(extraout_EAX,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar9 != 0) {
        UE::Math::TTransform<double>::InverseFast(&local_108,&local_a8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar9 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar9 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar9 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar10 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar13);
            local_128._s_0.X = (pTVar10->field0_0x0)._s_0.X;
            local_128._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
            local_128._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
            FPCGSplineStruct::SetScale
                      (this_00,(param_2 + iVar13) % iVar9,(TVector<double> *)&local_128._s_0);
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e71d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,4,0> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  undefined4 extraout_EAX;
  int iVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  double *local_178 [2];
  TArrayView<void_*,int> local_168;
  TArrayView<void_*,int> local_158;
  TVector<double>_u_0 local_148;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  
  uVar10 = local_168._12_4_;
  local_168.ArrayNum = 1;
  local_178[0] = (double *)0x0;
  local_168.DataPtr = local_178;
  bVar11 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_168);
  if (bVar11) {
    cVar12 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar12 == '\0') {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820730008>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
    }
    else {
      plVar17 = &this->_padding_;
      local_158.ArrayNum = 1;
      local_158._12_4_ = uVar10;
      local_158.DataPtr = local_178;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar17,&local_158);
      pdVar9 = local_178[0];
      local_128.Rotation.XY.m128d_f64[0] = *local_178[0];
      local_128.Rotation.XY.m128d_f64[1] = local_178[0][1];
      local_128.Rotation.ZW.m128d_f64[0] = local_178[0][2];
      local_128.Rotation.ZW.m128d_f64[1] = local_178[0][3];
      local_128.Scale3D.XY.m128d_f64[0]._0_4_ = *(uint *)(local_178[0] + 8);
      local_128.Scale3D.XY.m128d_f64[0]._4_4_ = *(uint *)((longlong)local_178[0] + 0x44);
      local_128.Scale3D.XY.m128d_f64[1]._0_4_ = *(uint *)(local_178[0] + 9);
      local_128.Scale3D.XY.m128d_f64[1]._4_4_ = *(uint *)((longlong)local_178[0] + 0x4c);
      local_128.Translation.XY.m128d_f64[0] = local_178[0][4];
      local_128.Translation.XY.m128d_f64[1] = local_178[0][5];
      auVar21._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_128.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_128.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar21._8_4_ = _UNK_15061cc88 & local_128.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar21._12_4_ = _UNK_15061cc8c & local_128.Scale3D.XY.m128d_f64[1]._4_4_;
      local_128.Translation.ZW.m128d_f64[0] = local_178[0][6];
      local_128.Translation.ZW.m128d_f64[1] = local_178[0][7];
      local_128.Scale3D.ZW.m128d_f64[0]._0_4_ = *(uint *)(local_178[0] + 10);
      local_128.Scale3D.ZW.m128d_f64[0]._4_4_ = *(uint *)((longlong)local_178[0] + 0x54);
      local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = *(uint *)(local_178[0] + 0xb);
      local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = *(uint *)((longlong)local_178[0] + 0x5c);
      lVar20 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_128.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_128.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar6._8_4_ = (int)lVar20;
      auVar6._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_128.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_128.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar6._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar16 = movmskpd((int)plVar17,auVar6);
      lVar20 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar21._8_8_);
      auVar5._8_4_ = (int)lVar20;
      auVar5._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar21._0_8_);
      auVar5._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar14 = movmskpd(extraout_EAX,auVar5);
      if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_c8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_c8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_c8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_c8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_128,&local_c8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (((FSpline *)(pdVar9 + 0x2d))->CurrentImplementation != '\0')) {
        iVar14 = FSpline::GetNumControlPoints((FSpline *)(pdVar9 + 0x2d));
      }
      else {
        iVar14 = *(int *)(pdVar9 + 0x1f);
      }
      if (iVar14 != 0) {
        iVar19 = 0;
        if (0 < param_1->ArrayNum) {
          do {
            uVar18 = (iVar19 + param_2) % iVar14;
            pTVar15 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar19);
            local_148._s_0.X = (pTVar15->field0_0x0)._s_0.X;
            local_148._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
            local_148._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
            dVar7 = (pTVar15->field0_0x0)._s_0.X;
            dVar8 = (pTVar15->field0_0x0)._s_0.Y;
            dVar2 = (pTVar15->field0_0x0)._s_0.Z;
            uVar16 = 0;
            if ((int)uVar18 < *(int *)(pdVar9 + 0x1f)) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return (bool)uVar13;
            }
            dVar3 = pdVar9[0x1e];
            pdVar1 = (double *)((longlong)(int)uVar18 * 0x58 + 0x20 + (longlong)dVar3);
            *pdVar1 = dVar7;
            pdVar1[1] = dVar8;
            *(double *)((longlong)(int)uVar18 * 0x58 + 0x30 + (longlong)dVar3) = dVar2;
            FSpline::SetInTangent
                      ((FSpline *)(pdVar9 + 0x2d),uVar18,(TVector<double> *)&local_148._s_0);
            iVar19 = iVar19 + 1;
          } while (iVar19 < param_1->ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e7480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,5,0> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  undefined4 extraout_EAX;
  int iVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  double *local_178 [2];
  TArrayView<void_*,int> local_168;
  TArrayView<void_*,int> local_158;
  TVector<double>_u_0 local_148;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  
  uVar10 = local_168._12_4_;
  local_168.ArrayNum = 1;
  local_178[0] = (double *)0x0;
  local_168.DataPtr = local_178;
  bVar11 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_168);
  if (bVar11) {
    cVar12 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar12 == '\0') {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820730008>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
    }
    else {
      plVar17 = &this->_padding_;
      local_158.ArrayNum = 1;
      local_158._12_4_ = uVar10;
      local_158.DataPtr = local_178;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar17,&local_158);
      pdVar9 = local_178[0];
      local_128.Rotation.XY.m128d_f64[0] = *local_178[0];
      local_128.Rotation.XY.m128d_f64[1] = local_178[0][1];
      local_128.Rotation.ZW.m128d_f64[0] = local_178[0][2];
      local_128.Rotation.ZW.m128d_f64[1] = local_178[0][3];
      local_128.Scale3D.XY.m128d_f64[0]._0_4_ = *(uint *)(local_178[0] + 8);
      local_128.Scale3D.XY.m128d_f64[0]._4_4_ = *(uint *)((longlong)local_178[0] + 0x44);
      local_128.Scale3D.XY.m128d_f64[1]._0_4_ = *(uint *)(local_178[0] + 9);
      local_128.Scale3D.XY.m128d_f64[1]._4_4_ = *(uint *)((longlong)local_178[0] + 0x4c);
      local_128.Translation.XY.m128d_f64[0] = local_178[0][4];
      local_128.Translation.XY.m128d_f64[1] = local_178[0][5];
      auVar21._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_128.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_128.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar21._8_4_ = _UNK_15061cc88 & local_128.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar21._12_4_ = _UNK_15061cc8c & local_128.Scale3D.XY.m128d_f64[1]._4_4_;
      local_128.Translation.ZW.m128d_f64[0] = local_178[0][6];
      local_128.Translation.ZW.m128d_f64[1] = local_178[0][7];
      local_128.Scale3D.ZW.m128d_f64[0]._0_4_ = *(uint *)(local_178[0] + 10);
      local_128.Scale3D.ZW.m128d_f64[0]._4_4_ = *(uint *)((longlong)local_178[0] + 0x54);
      local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = *(uint *)(local_178[0] + 0xb);
      local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = *(uint *)((longlong)local_178[0] + 0x5c);
      lVar20 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_128.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_128.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar6._8_4_ = (int)lVar20;
      auVar6._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_128.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_128.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar6._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar16 = movmskpd((int)plVar17,auVar6);
      lVar20 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar21._8_8_);
      auVar5._8_4_ = (int)lVar20;
      auVar5._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar21._0_8_);
      auVar5._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar14 = movmskpd(extraout_EAX,auVar5);
      if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_c8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_c8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_c8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_c8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_128,&local_c8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (((FSpline *)(pdVar9 + 0x2d))->CurrentImplementation != '\0')) {
        iVar14 = FSpline::GetNumControlPoints((FSpline *)(pdVar9 + 0x2d));
      }
      else {
        iVar14 = *(int *)(pdVar9 + 0x1f);
      }
      if (iVar14 != 0) {
        iVar19 = 0;
        if (0 < param_1->ArrayNum) {
          do {
            uVar18 = (iVar19 + param_2) % iVar14;
            pTVar15 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar19);
            local_148._s_0.X = (pTVar15->field0_0x0)._s_0.X;
            local_148._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
            local_148._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
            dVar7 = (pTVar15->field0_0x0)._s_0.X;
            dVar8 = (pTVar15->field0_0x0)._s_0.Y;
            dVar2 = (pTVar15->field0_0x0)._s_0.Z;
            uVar16 = 0;
            if ((int)uVar18 < *(int *)(pdVar9 + 0x1f)) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return (bool)uVar13;
            }
            dVar3 = pdVar9[0x1e];
            pdVar1 = (double *)((longlong)(int)uVar18 * 0x58 + 0x38 + (longlong)dVar3);
            *pdVar1 = dVar7;
            pdVar1[1] = dVar8;
            *(double *)((longlong)(int)uVar18 * 0x58 + 0x48 + (longlong)dVar3) = dVar2;
            FSpline::SetOutTangent
                      ((FSpline *)(pdVar9 + 0x2d),uVar18,(TVector<double> *)&local_148._s_0);
            iVar19 = iVar19 + 1;
          } while (iVar19 < param_1->ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e7730

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,1> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  FPCGSplineStruct *this_00;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  undefined4 extraout_EAX;
  int iVar13;
  TVector<double> *pTVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  FPCGSplineStruct *local_1e8 [2];
  TArrayView<void_*,int> local_1d8;
  TVector<double>_u_0 local_1c8;
  TArrayView<void_*,int> local_1a8;
  TTransform<double> local_198;
  TTransform<double> local_138 [2];
  
  iVar17 = 0;
  uVar34 = local_1d8._12_4_;
  local_1d8.ArrayNum = 1;
  local_1e8[0] = (FPCGSplineStruct *)0x0;
  local_1d8.DataPtr = local_1e8;
  bVar10 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_1d8);
  if (bVar10) {
    cVar11 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar11 == '\0') {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2625181124820730008>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                          ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return (bool)uVar12;
      }
    }
    else {
      plVar16 = &this->_padding_;
      local_1a8.ArrayNum = 1;
      local_1a8._12_4_ = uVar34;
      local_1a8.DataPtr = local_1e8;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar16,&local_1a8);
      this_00 = local_1e8[0];
      local_198.Rotation.XY.m128d_f64[0] = (local_1e8[0]->Transform).Rotation.XY.m128d_f64[0];
      local_198.Rotation.XY.m128d_f64[1] = (local_1e8[0]->Transform).Rotation.XY.m128d_f64[1];
      local_198.Rotation.ZW.m128d_f64[0] = (local_1e8[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_198.Rotation.ZW.m128d_f64[1] = (local_1e8[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_198.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_1e8[0]->Transform).Scale3D.ZW.m128d_f64;
      local_198.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_1e8[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_198.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_1e8[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_198.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_1e8[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      local_198.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_1e8[0]->Transform).Scale3D.XY.m128d_f64;
      local_198.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_1e8[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_198.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_1e8[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_198.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_1e8[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_198.Translation.XY.m128d_f64[0] = (local_1e8[0]->Transform).Translation.XY.m128d_f64[0];
      local_198.Translation.XY.m128d_f64[1] = (local_1e8[0]->Transform).Translation.XY.m128d_f64[1];
      local_198.Translation.ZW.m128d_f64[0] = (local_1e8[0]->Transform).Translation.ZW.m128d_f64[0];
      local_198.Translation.ZW.m128d_f64[1] = (local_1e8[0]->Transform).Translation.ZW.m128d_f64[1];
      auVar20._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(local_198.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                             local_198.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88));
      auVar20._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
            (double)CONCAT44(local_198.Scale3D.ZW.m128d_f64[0]._4_4_ &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_198.Scale3D.ZW.m128d_f64[0]._0_4_ &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar15 = movmskpd((int)plVar16,auVar20);
      lVar18 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(local_198.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                                 local_198.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88));
      auVar39._8_4_ = (int)lVar18;
      auVar39._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
            (double)CONCAT44(local_198.Scale3D.XY.m128d_f64[0]._4_4_ &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_198.Scale3D.XY.m128d_f64[0]._0_4_ &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar39._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar13 = movmskpd(extraout_EAX,auVar39);
      if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
        uVar34 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar35 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar36 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar37 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar30 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar31 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar32 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar33 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar50 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar51 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar52 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar53 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar49 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar44 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar46 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar41 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar42 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_198,local_138);
        uVar30 = local_138[0].Rotation.ZW.m128d_f64[0]._0_4_;
        uVar31 = local_138[0].Rotation.ZW.m128d_f64[0]._4_4_;
        uVar32 = local_138[0].Rotation.ZW.m128d_f64[1]._0_4_;
        uVar33 = local_138[0].Rotation.ZW.m128d_f64[1]._4_4_;
        uVar34 = local_138[0].Rotation.XY.m128d_f64[0]._0_4_;
        uVar35 = local_138[0].Rotation.XY.m128d_f64[0]._4_4_;
        uVar36 = local_138[0].Rotation.XY.m128d_f64[1]._0_4_;
        uVar37 = local_138[0].Rotation.XY.m128d_f64[1]._4_4_;
        uVar40 = local_138[0].Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar41 = local_138[0].Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar42 = local_138[0].Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar43 = local_138[0].Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar44 = local_138[0].Scale3D.XY.m128d_f64[0]._0_4_;
        uVar45 = local_138[0].Scale3D.XY.m128d_f64[0]._4_4_;
        uVar46 = local_138[0].Scale3D.XY.m128d_f64[1]._0_4_;
        uVar47 = local_138[0].Scale3D.XY.m128d_f64[1]._4_4_;
        uVar48 = local_138[0].Translation.ZW.m128d_f64[0]._0_4_;
        uVar49 = local_138[0].Translation.ZW.m128d_f64[0]._4_4_;
        uVar50 = local_138[0].Translation.XY.m128d_f64[0]._0_4_;
        uVar51 = local_138[0].Translation.XY.m128d_f64[0]._4_4_;
        uVar52 = local_138[0].Translation.XY.m128d_f64[1]._0_4_;
        uVar53 = local_138[0].Translation.XY.m128d_f64[1]._4_4_;
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar13 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar13 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar13 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          auVar38._4_4_ = uVar35;
          auVar38._0_4_ = uVar34;
          auVar38._8_4_ = uVar36;
          auVar38._12_4_ = uVar37;
          auVar9._4_4_ = uVar31;
          auVar9._0_4_ = uVar30;
          auVar9._8_4_ = uVar32;
          auVar9._12_4_ = uVar33;
          auVar39 = blendpd(auVar38,auVar9,2);
          do {
            pTVar14 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar17);
            dVar4 = (double)CONCAT44(uVar45,uVar44) * (pTVar14->field0_0x0)._s_0.X;
            dVar5 = (double)CONCAT44(uVar47,uVar46) * (pTVar14->field0_0x0)._s_0.Y;
            uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
            auVar27._8_4_ = SUB84(dVar5,0);
            auVar27._0_8_ = dVar4;
            auVar27._12_4_ = uVar26;
            dVar7 = (pTVar14->field0_0x0)._s_0.Z * (double)CONCAT44(uVar41,uVar40);
            dVar8 = (double)CONCAT44(uVar43,uVar42) * 0.0;
            auVar19._8_4_ = SUB84(dVar5,0);
            auVar19._0_8_ = dVar4;
            auVar19._12_4_ = uVar26;
            auVar6._8_4_ = SUB84(dVar8,0);
            auVar6._0_8_ = dVar7;
            auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar20 = blendpd(auVar19,auVar6,2);
            auVar28._0_8_ =
                 auVar27._8_8_ * (double)CONCAT44(uVar35,uVar34) -
                 (double)CONCAT44(uVar37,uVar36) * dVar4;
            auVar28._8_8_ =
                 dVar7 * (double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar31,uVar30) * dVar5;
            auVar21._0_8_ = auVar20._0_8_ * (double)CONCAT44(uVar31,uVar30) - auVar39._0_8_ * dVar7;
            auVar21._8_8_ = auVar20._8_8_ * (double)CONCAT44(uVar33,uVar32) - auVar39._8_8_ * dVar8;
            auVar20 = blendpd(auVar28,auVar21,2);
            dVar8 = auVar28._8_8_ + auVar28._8_8_;
            dVar3 = auVar21._0_8_ + auVar21._0_8_;
            uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
            auVar29._0_8_ = auVar20._0_8_ + auVar20._0_8_;
            auVar29._8_8_ = auVar20._8_8_ + auVar20._8_8_;
            auVar24._8_4_ = SUB84(dVar3,0);
            auVar24._0_8_ = dVar8;
            auVar24._12_4_ = uVar26;
            auVar22._8_4_ = SUB84(dVar3,0);
            auVar22._0_8_ = dVar8;
            auVar22._12_4_ = uVar26;
            auVar20 = blendpd(auVar22,auVar29,2);
            auVar25._0_8_ =
                 auVar24._8_8_ * (double)CONCAT44(uVar35,uVar34) -
                 dVar8 * (double)CONCAT44(uVar37,uVar36);
            auVar25._8_8_ =
                 auVar29._0_8_ * (double)CONCAT44(uVar37,uVar36) -
                 dVar3 * (double)CONCAT44(uVar31,uVar30);
            auVar23._0_8_ =
                 auVar20._0_8_ * (double)CONCAT44(uVar31,uVar30) - auVar29._0_8_ * auVar39._0_8_;
            auVar23._8_8_ =
                 auVar20._8_8_ * (double)CONCAT44(uVar33,uVar32) - auVar29._8_8_ * auVar39._8_8_;
            auVar20 = blendpd(auVar25,auVar23,2);
            dVar3 = dVar3 * (double)CONCAT44(uVar33,uVar32) + dVar5 + auVar23._0_8_ +
                    (double)CONCAT44(uVar53,uVar52);
            local_1c8._s_0.Z =
                 auVar29._0_8_ * (double)CONCAT44(uVar33,uVar32) + dVar7 + auVar20._0_8_ +
                 (double)CONCAT44(uVar49,uVar48);
            local_1c8._8_4_ = SUB84(dVar3,0);
            local_1c8._0_8_ =
                 dVar8 * (double)CONCAT44(uVar33,uVar32) + dVar4 + auVar25._8_8_ +
                 (double)CONCAT44(uVar51,uVar50);
            local_1c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            FPCGSplineStruct::SetLocation
                      (this_00,(param_2 + iVar17) % iVar13,(TVector<double> *)&local_1c8._s_0);
            iVar17 = iVar17 + 1;
          } while (iVar17 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e7ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0>::SetRangeImpl
          (FPCGControlPointsAccessor<UE::Math::TVector<double>,0,0> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FPCGSplineStruct *this_00;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 extraout_EAX;
  int iVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  FPCGSplineStruct *local_158 [2];
  TArrayView<void_*,int> local_148;
  TArrayView<void_*,int> local_138;
  TVector<double>_u_0 local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  
  uVar5 = local_148._12_4_;
  local_148.ArrayNum = 1;
  iVar13 = 0;
  local_158[0] = (FPCGSplineStruct *)0x0;
  local_148.DataPtr = local_158;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_148);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820730008>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      plVar12 = &this->_padding_;
      local_138.ArrayNum = 1;
      local_138._12_4_ = uVar5;
      local_138.DataPtr = local_158;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar12,&local_138);
      this_00 = local_158[0];
      local_108.Rotation.XY.m128d_f64[0] = (local_158[0]->Transform).Rotation.XY.m128d_f64[0];
      local_108.Rotation.XY.m128d_f64[1] = (local_158[0]->Transform).Rotation.XY.m128d_f64[1];
      local_108.Rotation.ZW.m128d_f64[0] = (local_158[0]->Transform).Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = (local_158[0]->Transform).Rotation.ZW.m128d_f64[1];
      local_108.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(uint *)(local_158[0]->Transform).Scale3D.XY.m128d_f64;
      local_108.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.XY.m128d_f64 + 4);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(uint *)((local_158[0]->Transform).Scale3D.XY.m128d_f64 + 1);
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.XY.m128d_f64 + 0xc);
      local_108.Translation.XY.m128d_f64[0] = (local_158[0]->Transform).Translation.XY.m128d_f64[0];
      local_108.Translation.XY.m128d_f64[1] = (local_158[0]->Transform).Translation.XY.m128d_f64[1];
      auVar15._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_108.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_108.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar15._8_4_ = _UNK_15061cc88 & local_108.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar15._12_4_ = _UNK_15061cc8c & local_108.Scale3D.XY.m128d_f64[1]._4_4_;
      local_108.Translation.ZW.m128d_f64[0] = (local_158[0]->Transform).Translation.ZW.m128d_f64[0];
      local_108.Translation.ZW.m128d_f64[1] = (local_158[0]->Transform).Translation.ZW.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(uint *)(local_158[0]->Transform).Scale3D.ZW.m128d_f64;
      local_108.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 4);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(uint *)((local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 1);
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(uint *)((longlong)(local_158[0]->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      lVar14 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_108.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_108.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_108.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_108.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd((int)plVar12,auVar4);
      lVar14 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar15._8_8_);
      auVar3._8_4_ = (int)lVar14;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar15._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar9 = movmskpd(extraout_EAX,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar9 != 0) {
        UE::Math::TTransform<double>::InverseFast(&local_108,&local_a8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this_00->Spline).CurrentImplementation != '\0')) {
        iVar9 = FSpline::GetNumControlPoints(&this_00->Spline);
      }
      else {
        iVar9 = *(int *)&(this_00->SplineCurves).Position.field_0x8;
      }
      if (iVar9 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar10 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,iVar13);
            local_128._s_0.X = (pTVar10->field0_0x0)._s_0.X;
            local_128._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
            local_128._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
            FPCGSplineStruct::SetLocation
                      (this_00,(param_2 + iVar13) % iVar9,(TVector<double> *)&local_128._s_0);
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e7cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGControlPointsAccessor<__int64,6,0>::SetRangeImpl
          (FPCGControlPointsAccessor<__int64,6,0> *this,TArrayView<__int64_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double *pdVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 extraout_EAX;
  int iVar9;
  EInterpCurveMode EVar10;
  Type *pTVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  double *local_148 [2];
  TArrayView<void_*,int> local_138;
  TArrayView<void_*,int> local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  
  uVar5 = local_138._12_4_;
  local_138.ArrayNum = 1;
  local_148[0] = (double *)0x0;
  local_138.DataPtr = local_148;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_138);
  if (bVar6) {
    cVar7 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2625181124820730008>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGSplineAccessor.h"
                         ,0x98,"Keys.IsClassSupported(TopPropertyStruct)");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
    }
    else {
      plVar13 = &this->_padding_;
      local_128.ArrayNum = 1;
      local_128._12_4_ = uVar5;
      local_128.DataPtr = local_148;
      PCGPropertyAccessor::AddressOffset<void_*>
                ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)plVar13,&local_128);
      pdVar4 = local_148[0];
      local_118.Rotation.XY.m128d_f64[0] = *local_148[0];
      local_118.Rotation.XY.m128d_f64[1] = local_148[0][1];
      local_118.Rotation.ZW.m128d_f64[0] = local_148[0][2];
      local_118.Rotation.ZW.m128d_f64[1] = local_148[0][3];
      local_118.Scale3D.XY.m128d_f64[0]._0_4_ = *(uint *)(local_148[0] + 8);
      local_118.Scale3D.XY.m128d_f64[0]._4_4_ = *(uint *)((longlong)local_148[0] + 0x44);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ = *(uint *)(local_148[0] + 9);
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ = *(uint *)((longlong)local_148[0] + 0x4c);
      local_118.Translation.XY.m128d_f64[0] = local_148[0][4];
      local_118.Translation.XY.m128d_f64[1] = local_148[0][5];
      auVar17._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            local_118.Scale3D.XY.m128d_f64[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            local_118.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar17._8_4_ = _UNK_15061cc88 & local_118.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar17._12_4_ = _UNK_15061cc8c & local_118.Scale3D.XY.m128d_f64[1]._4_4_;
      local_118.Translation.ZW.m128d_f64[0] = local_148[0][6];
      local_118.Translation.ZW.m128d_f64[1] = local_148[0][7];
      local_118.Scale3D.ZW.m128d_f64[0]._0_4_ = *(uint *)(local_148[0] + 10);
      local_118.Scale3D.ZW.m128d_f64[0]._4_4_ = *(uint *)((longlong)local_148[0] + 0x54);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = *(uint *)(local_148[0] + 0xb);
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = *(uint *)((longlong)local_148[0] + 0x5c);
      lVar16 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c & local_118.Scale3D.ZW.m128d_f64[1]._4_4_,
                                 _UNK_15061cc88 & local_118.Scale3D.ZW.m128d_f64[1]._0_4_));
      auVar3._8_4_ = (int)lVar16;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       local_118.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_118.Scale3D.ZW.m128d_f64[0]._0_4_));
      auVar3._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      uVar12 = movmskpd((int)plVar13,auVar3);
      lVar16 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar17._8_8_);
      auVar2._8_4_ = (int)lVar16;
      auVar2._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar17._0_8_);
      auVar2._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      iVar9 = movmskpd(extraout_EAX,auVar2);
      if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
        local_b8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_b8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_b8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_b8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_118,&local_b8);
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (((FSpline *)(pdVar4 + 0x2d))->CurrentImplementation != '\0')) {
        iVar9 = FSpline::GetNumControlPoints((FSpline *)(pdVar4 + 0x2d));
      }
      else {
        iVar9 = *(int *)(pdVar4 + 0x1f);
      }
      if (iVar9 != 0) {
        iVar15 = 0;
        if (0 < param_1->ArrayNum) {
          do {
            uVar14 = (iVar15 + param_2) % iVar9;
            pTVar11 = (Type *)TArrayView<__int64_const_,int>::operator[](param_1,iVar15);
            EVar10 = ConvertSplinePointTypeToInterpCurveMode(*pTVar11);
            uVar12 = 0;
            if ((int)uVar14 < *(int *)(pdVar4 + 0x1f)) {
              uVar12 = ~uVar14 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return (bool)uVar8;
            }
            *(char *)((longlong)(int)uVar14 * 0x58 + 0x50 + (longlong)pdVar4[0x1e]) = (char)EVar10;
            FSpline::SetSplinePointType((FSpline *)(pdVar4 + 0x2d),uVar14,EVar10);
            iVar15 = iVar15 + 1;
          } while (iVar15 < param_1->ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

