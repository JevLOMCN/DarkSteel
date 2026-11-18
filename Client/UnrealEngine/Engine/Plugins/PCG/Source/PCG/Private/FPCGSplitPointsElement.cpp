// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149c55230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGSplitPointsElement::ExecuteInternal'::__l18::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  long64 lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int iVar20;
  bool bVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  TTransform<double> *pTVar25;
  float *pfVar26;
  TVector<double> *pTVar27;
  TVector4<double> *pTVar28;
  int *piVar29;
  long64 *plVar30;
  longlong lVar31;
  TVector<double>_u_0 *pTVar32;
  TVector<double>_u_0 *pTVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStackY_5f8 [32];
  int local_5c8;
  double local_5a8 [4];
  FPCGPointValueRanges local_588;
  FPCGPointValueRanges local_3f8;
  FConstPCGPointValueRanges local_268;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_268,*(UPCGBasePointData **)((longlong)this + 0x10));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_588,*(UPCGBasePointData **)((longlong)this + 0x18),false);
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_3f8,*(UPCGBasePointData **)((longlong)this + 0x20),false);
  if (param_1 < param_1 + param_3) {
    iVar23 = param_1 - param_2;
    local_5c8 = param_1;
    do {
      uVar35 = iVar23 + param_2;
      uVar34 = ~uVar35 >> 0x1f;
      uVar24 = 0;
      if (local_5c8 < local_268.BoundsMaxRange.NumElements) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      iVar9 = local_268.BoundsMinRange.NumElements;
      pTVar33 = (TVector<double>_u_0 *)
                ((longlong)&(local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                (longlong)((int)uVar35 % local_268.BoundsMaxRange.ElementView.NumElements) *
                (longlong)local_268.BoundsMaxRange.ElementView.BytesBetweenElements);
      uVar24 = 0;
      if ((int)uVar35 < local_268.BoundsMinRange.NumElements) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      iVar20 = local_268.BoundsMinRange.ElementView.NumElements;
      pTVar27 = local_268.BoundsMinRange.ElementView.FirstElementPtr;
      dVar2 = (pTVar33->_s_0).X;
      dVar3 = *(double *)((longlong)pTVar33 + 8);
      dVar4 = *(double *)((longlong)pTVar33 + 0x10);
      lVar31 = (longlong)((int)uVar35 % local_268.BoundsMinRange.ElementView.NumElements) *
               (longlong)local_268.BoundsMinRange.ElementView.BytesBetweenElements;
      dVar5 = (((TVector<double>_u_0 *)
               ((longlong)&(local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar31))->_s_0).X;
      dVar6 = *(double *)
               ((longlong)&(local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar31 + 8);
      dVar7 = *(double *)
               ((longlong)&(local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar31 + 0x10);
      dVar12 = (double)*(float *)((longlong)this + 8);
      uVar24 = 0;
      if ((int)uVar35 < iVar9) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      lVar31 = (longlong)((int)uVar35 % iVar20) *
               (longlong)local_268.BoundsMinRange.ElementView.BytesBetweenElements;
      local_5a8[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_5a8[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_5a8[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar24 = *(uint *)(*(longlong *)this + 0xcc);
      dVar2 = (dVar2 - dVar5) * dVar12 +
              (((TVector<double>_u_0 *)((longlong)&pTVar27->field0_0x0 + lVar31))->_s_0).X;
      dVar3 = (dVar3 - dVar6) * dVar12 + *(double *)((longlong)&pTVar27->field0_0x0 + lVar31 + 8);
      dVar4 = (dVar4 - dVar7) * dVar12 + *(double *)((longlong)&pTVar27->field0_0x0 + lVar31 + 0x10)
      ;
      if (uVar24 < 3) {
        if ((2 < (int)uVar24) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar21)) {
          pcVar11 = (code *)swi(3);
          iVar23 = (*pcVar11)();
          return iVar23;
        }
        local_5a8[(int)uVar24] = 1.0;
      }
      else {
        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8901773617398808458>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitPoints.cpp"
                            ,0x76,"AxisIndex >= 0 && AxisIndex <= 2");
        if (bVar21) {
          pcVar11 = (code *)swi(3);
          iVar23 = (*pcVar11)();
          return iVar23;
        }
      }
      cVar22 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x440))();
      if (cVar22 == '\0') {
        if (local_588.TransformRange.NumElements != 0) {
          pTVar25 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_268.TransformRange,uVar35);
          dVar5 = (pTVar25->Rotation).XY.m128d_f64[0];
          dVar6 = (pTVar25->Rotation).XY.m128d_f64[1];
          dVar7 = (pTVar25->Rotation).ZW.m128d_f64[0];
          dVar12 = (pTVar25->Rotation).ZW.m128d_f64[1];
          dVar8 = (pTVar25->Translation).XY.m128d_f64[0];
          dVar13 = (pTVar25->Translation).XY.m128d_f64[1];
          dVar14 = (pTVar25->Translation).ZW.m128d_f64[0];
          dVar15 = (pTVar25->Translation).ZW.m128d_f64[1];
          dVar16 = (pTVar25->Scale3D).XY.m128d_f64[0];
          dVar17 = (pTVar25->Scale3D).XY.m128d_f64[1];
          dVar18 = (pTVar25->Scale3D).ZW.m128d_f64[0];
          dVar19 = (pTVar25->Scale3D).ZW.m128d_f64[1];
          pTVar25 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_588.TransformRange,param_2);
          (pTVar25->Rotation).XY.m128d_f64[0] = dVar5;
          (pTVar25->Rotation).XY.m128d_f64[1] = dVar6;
          (pTVar25->Rotation).ZW.m128d_f64[0] = dVar7;
          (pTVar25->Rotation).ZW.m128d_f64[1] = dVar12;
          (pTVar25->Translation).XY.m128d_f64[0] = dVar8;
          (pTVar25->Translation).XY.m128d_f64[1] = dVar13;
          (pTVar25->Translation).ZW.m128d_f64[0] = dVar14;
          (pTVar25->Translation).ZW.m128d_f64[1] = dVar15;
          (pTVar25->Scale3D).XY.m128d_f64[0] = dVar16;
          (pTVar25->Scale3D).XY.m128d_f64[1] = dVar17;
          (pTVar25->Scale3D).ZW.m128d_f64[0] = dVar18;
          (pTVar25->Scale3D).ZW.m128d_f64[1] = dVar19;
        }
        if (local_588.DensityRange.NumElements != 0) {
          pfVar26 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_268.DensityRange,uVar35);
          fVar1 = *pfVar26;
          pfVar26 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_588.DensityRange,param_2);
          *pfVar26 = fVar1;
        }
        if (local_588.SteepnessRange.NumElements != 0) {
          pfVar26 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_268.SteepnessRange,uVar35);
          fVar1 = *pfVar26;
          pfVar26 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_588.SteepnessRange,param_2);
          *pfVar26 = fVar1;
        }
        if (local_588.BoundsMinRange.NumElements != 0) {
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_268.BoundsMinRange,uVar35);
          dVar6 = (pTVar27->field0_0x0)._s_0.X;
          dVar7 = (pTVar27->field0_0x0)._s_0.Y;
          dVar5 = (pTVar27->field0_0x0)._s_0.Z;
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_588.BoundsMinRange,param_2);
          (pTVar27->field0_0x0)._s_0.X = dVar6;
          (pTVar27->field0_0x0)._s_0.Y = dVar7;
          (pTVar27->field0_0x0)._s_0.Z = dVar5;
        }
        if (local_588.BoundsMaxRange.NumElements != 0) {
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_268.BoundsMaxRange,uVar35);
          dVar6 = (pTVar27->field0_0x0)._s_0.X;
          dVar7 = (pTVar27->field0_0x0)._s_0.Y;
          dVar5 = (pTVar27->field0_0x0)._s_0.Z;
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_588.BoundsMaxRange,param_2);
          (pTVar27->field0_0x0)._s_0.X = dVar6;
          (pTVar27->field0_0x0)._s_0.Y = dVar7;
          (pTVar27->field0_0x0)._s_0.Z = dVar5;
        }
        if (local_588.ColorRange.NumElements != 0) {
          pTVar28 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_268.ColorRange,uVar35);
          dVar5 = (pTVar28->field0_0x0)._s_0.X;
          dVar6 = (pTVar28->field0_0x0)._s_0.Y;
          dVar7 = (pTVar28->field0_0x0)._s_0.Z;
          dVar12 = (pTVar28->field0_0x0)._s_0.W;
          pTVar28 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_588.ColorRange,param_2);
          (pTVar28->field0_0x0)._s_0.X = dVar5;
          (pTVar28->field0_0x0)._s_0.Y = dVar6;
          (pTVar28->field0_0x0)._s_0.Z = dVar7;
          (pTVar28->field0_0x0)._s_0.W = dVar12;
        }
        if (local_588.SeedRange.NumElements != 0) {
          piVar29 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_268.SeedRange,uVar35);
          iVar9 = *piVar29;
          piVar29 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_588.SeedRange,param_2);
          *piVar29 = iVar9;
        }
        if (local_588.MetadataEntryRange.NumElements != 0) {
          plVar30 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_268.MetadataEntryRange,uVar35);
          lVar10 = *plVar30;
          plVar30 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_588.MetadataEntryRange,param_2);
          *plVar30 = lVar10;
        }
      }
      uVar34 = (uint)~param_2 >> 0x1f;
      uVar24 = 0;
      if (param_2 < local_588.BoundsMaxRange.NumElements) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      if (param_2 == param_2 % local_588.BoundsMaxRange.ElementView.NumElements) {
        pTVar33 = (TVector<double>_u_0 *)
                  ((longlong)&(local_588.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_588.BoundsMaxRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_588.BoundsMaxRange.ElementView.NumElements));
      }
      else {
        pTVar33 = &local_588.BoundsMaxRange.StubValue.field0_0x0;
      }
      uVar24 = 0;
      if (param_2 < local_588.BoundsMaxRange.NumElements) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      if (param_2 == param_2 % local_588.BoundsMaxRange.ElementView.NumElements) {
        pTVar32 = (TVector<double>_u_0 *)
                  ((longlong)&(local_588.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_588.BoundsMaxRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_588.BoundsMaxRange.ElementView.NumElements));
      }
      else {
        pTVar32 = &local_588.BoundsMaxRange.StubValue.field0_0x0;
      }
      dVar5 = (dVar2 - (((TVector<double>_u_0 *)&(pTVar32->_s_0).X)->_s_0).X) * local_5a8[0];
      dVar6 = (dVar3 - *(double *)((longlong)pTVar32 + 8)) * local_5a8[1];
      uVar24 = 0;
      if (param_2 < local_588.BoundsMaxRange.NumElements) {
        uVar24 = uVar34;
      }
      dVar13 = (dVar4 - *(double *)((longlong)pTVar32 + 0x10)) * local_5a8[2];
      dVar7 = (((TVector<double>_u_0 *)&(pTVar33->_s_0).X)->_s_0).X;
      dVar12 = *(double *)((longlong)pTVar33 + 8);
      dVar8 = *(double *)((longlong)pTVar33 + 0x10);
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      if (param_2 == param_2 % local_588.BoundsMaxRange.ElementView.NumElements) {
        pTVar33 = (TVector<double>_u_0 *)
                  ((longlong)&(local_588.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_588.BoundsMaxRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_588.BoundsMaxRange.ElementView.NumElements));
      }
      else {
        pTVar33 = &local_588.BoundsMaxRange.StubValue.field0_0x0;
      }
      (((TVector<double>_u_0 *)&(pTVar33->_s_0).X)->_s_0).X = dVar5 + dVar7;
      *(double *)((longlong)pTVar33 + 8) = dVar6 + dVar12;
      *(double *)((longlong)pTVar33 + 0x10) = dVar13 + dVar8;
      cVar22 = (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x440))();
      if (cVar22 == '\0') {
        if (local_3f8.TransformRange.NumElements != 0) {
          pTVar25 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_268.TransformRange,uVar35);
          dVar5 = (pTVar25->Rotation).XY.m128d_f64[0];
          dVar6 = (pTVar25->Rotation).XY.m128d_f64[1];
          dVar7 = (pTVar25->Rotation).ZW.m128d_f64[0];
          dVar12 = (pTVar25->Rotation).ZW.m128d_f64[1];
          dVar8 = (pTVar25->Translation).XY.m128d_f64[0];
          dVar13 = (pTVar25->Translation).XY.m128d_f64[1];
          dVar14 = (pTVar25->Translation).ZW.m128d_f64[0];
          dVar15 = (pTVar25->Translation).ZW.m128d_f64[1];
          dVar16 = (pTVar25->Scale3D).XY.m128d_f64[0];
          dVar17 = (pTVar25->Scale3D).XY.m128d_f64[1];
          dVar18 = (pTVar25->Scale3D).ZW.m128d_f64[0];
          dVar19 = (pTVar25->Scale3D).ZW.m128d_f64[1];
          pTVar25 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3f8.TransformRange,param_2);
          (pTVar25->Rotation).XY.m128d_f64[0] = dVar5;
          (pTVar25->Rotation).XY.m128d_f64[1] = dVar6;
          (pTVar25->Rotation).ZW.m128d_f64[0] = dVar7;
          (pTVar25->Rotation).ZW.m128d_f64[1] = dVar12;
          (pTVar25->Translation).XY.m128d_f64[0] = dVar8;
          (pTVar25->Translation).XY.m128d_f64[1] = dVar13;
          (pTVar25->Translation).ZW.m128d_f64[0] = dVar14;
          (pTVar25->Translation).ZW.m128d_f64[1] = dVar15;
          (pTVar25->Scale3D).XY.m128d_f64[0] = dVar16;
          (pTVar25->Scale3D).XY.m128d_f64[1] = dVar17;
          (pTVar25->Scale3D).ZW.m128d_f64[0] = dVar18;
          (pTVar25->Scale3D).ZW.m128d_f64[1] = dVar19;
        }
        if (local_3f8.DensityRange.NumElements != 0) {
          pfVar26 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_268.DensityRange,uVar35);
          fVar1 = *pfVar26;
          pfVar26 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3f8.DensityRange,param_2);
          *pfVar26 = fVar1;
        }
        if (local_3f8.SteepnessRange.NumElements != 0) {
          pfVar26 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_268.SteepnessRange,uVar35);
          fVar1 = *pfVar26;
          pfVar26 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3f8.SteepnessRange,param_2);
          *pfVar26 = fVar1;
        }
        if (local_3f8.BoundsMinRange.NumElements != 0) {
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_268.BoundsMinRange,uVar35);
          dVar6 = (pTVar27->field0_0x0)._s_0.X;
          dVar7 = (pTVar27->field0_0x0)._s_0.Y;
          dVar5 = (pTVar27->field0_0x0)._s_0.Z;
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3f8.BoundsMinRange,param_2);
          (pTVar27->field0_0x0)._s_0.X = dVar6;
          (pTVar27->field0_0x0)._s_0.Y = dVar7;
          (pTVar27->field0_0x0)._s_0.Z = dVar5;
        }
        if (local_3f8.BoundsMaxRange.NumElements != 0) {
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_268.BoundsMaxRange,uVar35);
          dVar6 = (pTVar27->field0_0x0)._s_0.X;
          dVar7 = (pTVar27->field0_0x0)._s_0.Y;
          dVar5 = (pTVar27->field0_0x0)._s_0.Z;
          pTVar27 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3f8.BoundsMaxRange,param_2);
          (pTVar27->field0_0x0)._s_0.X = dVar6;
          (pTVar27->field0_0x0)._s_0.Y = dVar7;
          (pTVar27->field0_0x0)._s_0.Z = dVar5;
        }
        if (local_3f8.ColorRange.NumElements != 0) {
          pTVar28 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_268.ColorRange,uVar35);
          dVar5 = (pTVar28->field0_0x0)._s_0.X;
          dVar6 = (pTVar28->field0_0x0)._s_0.Y;
          dVar7 = (pTVar28->field0_0x0)._s_0.Z;
          dVar12 = (pTVar28->field0_0x0)._s_0.W;
          pTVar28 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3f8.ColorRange,param_2);
          (pTVar28->field0_0x0)._s_0.X = dVar5;
          (pTVar28->field0_0x0)._s_0.Y = dVar6;
          (pTVar28->field0_0x0)._s_0.Z = dVar7;
          (pTVar28->field0_0x0)._s_0.W = dVar12;
        }
        if (local_3f8.SeedRange.NumElements != 0) {
          piVar29 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_268.SeedRange,uVar35);
          iVar9 = *piVar29;
          piVar29 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3f8.SeedRange,param_2);
          *piVar29 = iVar9;
        }
        if (local_3f8.MetadataEntryRange.NumElements != 0) {
          plVar30 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_268.MetadataEntryRange,uVar35);
          lVar10 = *plVar30;
          plVar30 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3f8.MetadataEntryRange,param_2);
          *plVar30 = lVar10;
        }
      }
      uVar24 = 0;
      if (param_2 < local_3f8.BoundsMinRange.NumElements) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      if (param_2 == param_2 % local_3f8.BoundsMinRange.ElementView.NumElements) {
        pTVar33 = (TVector<double>_u_0 *)
                  ((longlong)&(local_3f8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_3f8.BoundsMinRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_3f8.BoundsMinRange.ElementView.NumElements));
      }
      else {
        pTVar33 = &local_3f8.BoundsMinRange.StubValue.field0_0x0;
      }
      uVar24 = 0;
      if (param_2 < local_3f8.BoundsMinRange.NumElements) {
        uVar24 = uVar34;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      if (param_2 == param_2 % local_3f8.BoundsMinRange.ElementView.NumElements) {
        pTVar32 = (TVector<double>_u_0 *)
                  ((longlong)&(local_3f8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_3f8.BoundsMinRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_3f8.BoundsMinRange.ElementView.NumElements));
      }
      else {
        pTVar32 = &local_3f8.BoundsMinRange.StubValue.field0_0x0;
      }
      dVar2 = (dVar2 - (((TVector<double>_u_0 *)&(pTVar32->_s_0).X)->_s_0).X) * local_5a8[0];
      uVar24 = 0;
      if (param_2 < local_3f8.BoundsMinRange.NumElements) {
        uVar24 = uVar34;
      }
      dVar6 = (dVar3 - *(double *)((longlong)pTVar32 + 8)) * local_5a8[1];
      dVar7 = (dVar4 - *(double *)((longlong)pTVar32 + 0x10)) * local_5a8[2];
      dVar3 = (((TVector<double>_u_0 *)&(pTVar33->_s_0).X)->_s_0).X;
      dVar4 = *(double *)((longlong)pTVar33 + 8);
      dVar5 = *(double *)((longlong)pTVar33 + 0x10);
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        iVar23 = (*pcVar11)();
        return iVar23;
      }
      if (param_2 == param_2 % local_3f8.BoundsMinRange.ElementView.NumElements) {
        pTVar33 = (TVector<double>_u_0 *)
                  ((longlong)&(local_3f8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_3f8.BoundsMinRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_3f8.BoundsMinRange.ElementView.NumElements));
      }
      else {
        pTVar33 = &local_3f8.BoundsMinRange.StubValue.field0_0x0;
      }
      param_2 = param_2 + 1;
      local_5c8 = local_5c8 + 1;
      (((TVector<double>_u_0 *)&(pTVar33->_s_0).X)->_s_0).X = dVar2 + dVar3;
      *(double *)((longlong)pTVar33 + 8) = dVar6 + dVar4;
      *(double *)((longlong)pTVar33 + 0x10) = dVar7 + dVar5;
    } while (iVar23 + param_2 < param_1 + param_3);
  }
  else if ((param_3 != 0) &&
          (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumWritten == Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitPoints.cpp"
                               ,0x8e,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    iVar23 = (*pcVar11)();
    return iVar23;
  }
  return param_3;
}

// ExecuteInternal @ 149c6bd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGSplitPointsElement::ExecuteInternal(FPCGSplitPointsElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  UPCGNode *this_00;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  UPCGBasePointData *this_01;
  FPCGTaggedData *pFVar13;
  UPCGBasePointData *this_02;
  FText *pFVar14;
  FTextFormat *pFVar15;
  uint uVar16;
  FPCGTaggedData *pFVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  <lambda_1> local_res10;
  <lambda_2> local_res20 [8];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_138;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  TObjectPtr<UPCGSettings>_u_0 local_118;
  FObjectPtr_u_0 local_110;
  FPCGTaggedData *local_108;
  longlong local_100;
  longlong local_f8;
  FTextFormat local_f0;
  FText local_e0;
  FFormatArgumentValue local_d0;
  TObjectPtr<UPCGSettings>_u_0 local_b0;
  float local_a8;
  FObjectPtr_u_0 local_a0;
  UPCGBasePointData *local_98;
  UPCGBasePointData *local_90;
  FString local_88;
  FString local_78;
  FText local_68;
  FTextFormat local_58 [2];
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId46,"FPCGSplitPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitPoints.cpp"
               ,0x2e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitPoints.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar10 = UPCGSplitPointsSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar4) {
      TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar12.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c6beb5;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    local_res10 = SUB81(param_1,0);
    pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitPointsSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_res10);
    if (pFVar13 != (FPCGTaggedData *)0x0) {
      local_118.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_118.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c6beae;
        UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
      }
      if (local_118.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGSplitPointsSettings::StaticClass();
        bVar4 = FObjectPtr::IsA(&local_118.ObjectPtr,pUVar10);
        TVar12 = local_118;
        if (bVar4) goto LAB_149c6beb5;
      }
    }
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
    if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
      pUVar10 = UPCGSplitPointsSettings::StaticClass();
      iVar8 = (int)pUVar10->_padding_;
      if ((iVar8 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8)
          == &pUVar10->_padding_)) goto LAB_149c6beb5;
    }
  }
LAB_149c6beae:
  TVar12.DebugPtr = (UPCGSettings *)0x0;
LAB_149c6beb5:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitPoints.cpp"
                         ,0x32,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_138,&PCGPinConstants::DefaultInputLabel);
  pFVar1 = &param_1->OutputData;
  fVar21 = *(float *)&TVar12.DebugPtr[1]._padding_;
  if (__real_3f800000 <= *(float *)&TVar12.DebugPtr[1]._padding_) {
    fVar21 = __real_3f800000;
  }
  uVar19 = 0;
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  if (0 < local_138.ArrayNum) {
    local_100 = 0;
    do {
      lVar18 = local_100;
      uVar16 = ~uVar19 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar19 < local_138.ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      local_110 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(local_138.AllocatorInstance.Data + lVar18))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6bfaa:
        if ((UPCGSpatialData *)local_110.Handle == (UPCGSpatialData *)0x0) goto LAB_149c6c3d3;
        pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_110,pUVar10);
        FVar3 = local_110;
        if ((!bVar4) || ((UPCGSpatialData *)local_110.Handle == (UPCGSpatialData *)0x0))
        goto LAB_149c6c3d3;
        uVar7 = 0;
        if ((int)uVar19 < local_138.ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        local_f8 = (longlong)(int)uVar19 * 0x78;
        pFVar17 = (FPCGTaggedData *)(local_138.AllocatorInstance.Data + local_f8);
        pFVar13 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
        if (((pFVar13 <= pFVar17) && (pFVar17 < pFVar13 + (param_1->OutputData).TaggedData.ArrayMax)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        if (iVar8 == (param_1->OutputData).TaggedData.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)pFVar1,
                             &(param_1->OutputData).TaggedData.ArrayMax);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        local_108 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar8 * 0x78
                               ),pFVar17);
        this_01 = FPCGContext::NewPointData_AnyThread(param_1);
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)this_01,(UPCGSpatialData *)FVar3.Handle,(UPCGMetadata *)0x0,
                   true,true);
        pcVar2 = *(code **)(this_01->_padding_ + 0x490);
        uVar9 = (**(code **)(*(longlong *)FVar3.Handle + 0x488))(FVar3.Handle);
        (*pcVar2)(this_01,uVar9);
        cVar6 = (**(code **)(this_01->_padding_ + 0x440))(this_01);
        if (cVar6 == '\0') {
          pcVar2 = *(code **)(this_01->_padding_ + 0x498);
          uVar9 = (**(code **)(*(longlong *)FVar3.Handle + 0x640))(FVar3.Handle,1);
          (*pcVar2)(this_01,uVar9);
          (**(code **)(this_01->_padding_ + 0x4b0))(this_01,FVar3.Handle);
        }
        (**(code **)(this_01->_padding_ + 0x498))(this_01,8);
        pFVar13 = local_108;
        FPCGDataPtrWrapper::operator=(&local_108->Data,(UPCGData *)this_01);
        pFVar13->Pin = PCGSplitPointsConstants::OutputALabel;
        uVar7 = 0;
        if ((int)uVar19 < local_138.ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar17 = (FPCGTaggedData *)(local_138.AllocatorInstance.Data + local_f8);
        pFVar13 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
        if (((pFVar13 <= pFVar17) && (pFVar17 < pFVar13 + (param_1->OutputData).TaggedData.ArrayMax)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
        if (iVar8 == (param_1->OutputData).TaggedData.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)pFVar1,
                             &(param_1->OutputData).TaggedData.ArrayMax);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
        pFVar13 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar8 * 0x78),
                             pFVar17);
        this_02 = FPCGContext::NewPointData_AnyThread(param_1);
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)this_02,(UPCGSpatialData *)FVar3.Handle,(UPCGMetadata *)0x0,
                   true,true);
        pcVar2 = *(code **)(this_02->_padding_ + 0x490);
        uVar9 = (**(code **)(*(longlong *)FVar3.Handle + 0x488))(FVar3.Handle);
        (*pcVar2)(this_02,uVar9,1);
        cVar6 = (**(code **)(this_02->_padding_ + 0x440))(this_02);
        if (cVar6 == '\0') {
          pcVar2 = *(code **)(this_02->_padding_ + 0x498);
          uVar9 = (**(code **)(*(longlong *)FVar3.Handle + 0x640))(FVar3.Handle,1);
          (*pcVar2)(this_02,uVar9);
          (**(code **)(this_02->_padding_ + 0x4b0))(this_02,FVar3.Handle);
        }
        (**(code **)(this_02->_padding_ + 0x498))(this_02,4);
        FPCGDataPtrWrapper::operator=(&pFVar13->Data,(UPCGData *)this_02);
        pFVar13->Pin = PCGSplitPointsConstants::OutputBLabel;
        local_a0.Handle = FVar3.Handle;
        local_b0 = TVar12;
        local_a8 = fVar21;
        local_98 = this_01;
        local_90 = this_02;
        iVar8 = (**(code **)(*(longlong *)FVar3.Handle + 0x488))(FVar3.Handle);
        FPCGAsync::
        AsyncProcessingOneToOneRangeEx<_FPCGSplitPointsElement::ExecuteInternal_::__l18::<lambda_2>,_FPCGSplitPointsElement::ExecuteInternal_::__l18::<lambda_1>_&>
                  (&param_1->AsyncState,iVar8,local_res20,(<lambda_1> *)&local_b0.ObjectPtr,false,
                   0x40,true);
        lVar18 = local_100;
      }
      else {
        if ((UPCGSpatialData *)local_110.Handle != (UPCGSpatialData *)0x0) {
          UE::GC::MarkAsReachable(local_110.Handle);
          goto LAB_149c6bfaa;
        }
LAB_149c6c3d3:
        if (5 < (byte)LogPCG._0_1_) {
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_68,L"PCGSplitPointsElement",L"InvalidPointData",
                               L"Input {0} is not point data");
          pFVar15 = FTextFormat::FTextFormat(local_58,pFVar14,Default);
          local_d0.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar19;
          local_d0.Type = Int;
          local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_d0.TextValue.field0_0x0.TypedValue.Flags = 0;
          local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_128.AllocatorInstance.Data,&local_d0,1);
          local_f0.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_f0.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_f0.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(local_f0.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_e0,&local_f0,&local_128);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
          if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          FText::ToString(&local_e0);
          FPCGContext::GetTaskName(param_1,&local_78);
          FPCGContext::GetExecutionSourceName(param_1,&local_88);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
        }
      }
      local_100 = lVar18 + 0x78;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < local_138.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((FPCGTaggedData *)local_138.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c75b40

EPCGElementExecutionLoopMode __thiscall
FPCGSplitPointsElement::ExecutionLoopMode(FPCGSplitPointsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c928f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSplitPointsElement::SupportsBasePointDataInputs
          (FPCGSplitPointsElement *this,FPCGContext *param_1)

{
  return true;
}

