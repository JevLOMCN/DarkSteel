// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// operator() @ 149ae8410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGBoundsFromMeshElement::ExecuteInternal'::__l76::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  long64 lVar5;
  double *pdVar6;
  longlong lVar7;
  code *pcVar8;
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
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  TTransform<double> *pTVar24;
  float *pfVar25;
  TVector<double> *pTVar26;
  TVector4<double> *pTVar27;
  int *piVar28;
  long64 *plVar29;
  TVector<double>_u_0 *pTVar30;
  int iVar31;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  FPCGPointValueRanges local_3c8;
  FConstPCGPointValueRanges local_238;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_238,*(UPCGBasePointData **)((longlong)this + 8));
  FPCGPointValueRanges::FPCGPointValueRanges(&local_3c8,*(UPCGBasePointData **)this,false);
  iVar23 = param_1 + param_3;
  if (param_1 < iVar23) {
    iVar31 = param_1 - param_2;
    do {
      if (local_3c8.TransformRange.NumElements != 0) {
        pTVar24 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_238.TransformRange,param_1);
        dVar2 = (pTVar24->Rotation).XY.m128d_f64[0];
        dVar9 = (pTVar24->Rotation).XY.m128d_f64[1];
        dVar10 = (pTVar24->Rotation).ZW.m128d_f64[0];
        dVar11 = (pTVar24->Rotation).ZW.m128d_f64[1];
        dVar12 = (pTVar24->Translation).XY.m128d_f64[0];
        dVar13 = (pTVar24->Translation).XY.m128d_f64[1];
        dVar14 = (pTVar24->Translation).ZW.m128d_f64[0];
        dVar15 = (pTVar24->Translation).ZW.m128d_f64[1];
        dVar16 = (pTVar24->Scale3D).XY.m128d_f64[0];
        dVar17 = (pTVar24->Scale3D).XY.m128d_f64[1];
        dVar18 = (pTVar24->Scale3D).ZW.m128d_f64[0];
        dVar19 = (pTVar24->Scale3D).ZW.m128d_f64[1];
        pTVar24 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_3c8.TransformRange,param_2);
        (pTVar24->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar24->Rotation).XY.m128d_f64[1] = dVar9;
        (pTVar24->Rotation).ZW.m128d_f64[0] = dVar10;
        (pTVar24->Rotation).ZW.m128d_f64[1] = dVar11;
        (pTVar24->Translation).XY.m128d_f64[0] = dVar12;
        (pTVar24->Translation).XY.m128d_f64[1] = dVar13;
        (pTVar24->Translation).ZW.m128d_f64[0] = dVar14;
        (pTVar24->Translation).ZW.m128d_f64[1] = dVar15;
        (pTVar24->Scale3D).XY.m128d_f64[0] = dVar16;
        (pTVar24->Scale3D).XY.m128d_f64[1] = dVar17;
        (pTVar24->Scale3D).ZW.m128d_f64[0] = dVar18;
        (pTVar24->Scale3D).ZW.m128d_f64[1] = dVar19;
      }
      if (local_3c8.DensityRange.NumElements != 0) {
        pfVar25 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_238.DensityRange,iVar31 + param_2);
        fVar1 = *pfVar25;
        pfVar25 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_3c8.DensityRange,param_2);
        *pfVar25 = fVar1;
      }
      if (local_3c8.SteepnessRange.NumElements != 0) {
        pfVar25 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_238.SteepnessRange,iVar31 + param_2);
        fVar1 = *pfVar25;
        pfVar25 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_3c8.SteepnessRange,param_2);
        *pfVar25 = fVar1;
      }
      if (local_3c8.BoundsMinRange.NumElements != 0) {
        pTVar26 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_238.BoundsMinRange,iVar31 + param_2);
        dVar9 = (pTVar26->field0_0x0)._s_0.X;
        dVar10 = (pTVar26->field0_0x0)._s_0.Y;
        dVar2 = (pTVar26->field0_0x0)._s_0.Z;
        pTVar26 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_3c8.BoundsMinRange,param_2);
        (pTVar26->field0_0x0)._s_0.X = dVar9;
        (pTVar26->field0_0x0)._s_0.Y = dVar10;
        (pTVar26->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_3c8.BoundsMaxRange.NumElements != 0) {
        pTVar26 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_238.BoundsMaxRange,iVar31 + param_2);
        dVar9 = (pTVar26->field0_0x0)._s_0.X;
        dVar10 = (pTVar26->field0_0x0)._s_0.Y;
        dVar2 = (pTVar26->field0_0x0)._s_0.Z;
        pTVar26 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_3c8.BoundsMaxRange,param_2);
        (pTVar26->field0_0x0)._s_0.X = dVar9;
        (pTVar26->field0_0x0)._s_0.Y = dVar10;
        (pTVar26->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_3c8.ColorRange.NumElements != 0) {
        pTVar27 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_238.ColorRange,iVar31 + param_2);
        dVar2 = (pTVar27->field0_0x0)._s_0.X;
        dVar9 = (pTVar27->field0_0x0)._s_0.Y;
        dVar10 = (pTVar27->field0_0x0)._s_0.Z;
        dVar11 = (pTVar27->field0_0x0)._s_0.W;
        pTVar27 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_3c8.ColorRange,param_2);
        (pTVar27->field0_0x0)._s_0.X = dVar2;
        (pTVar27->field0_0x0)._s_0.Y = dVar9;
        (pTVar27->field0_0x0)._s_0.Z = dVar10;
        (pTVar27->field0_0x0)._s_0.W = dVar11;
      }
      if (local_3c8.SeedRange.NumElements != 0) {
        piVar28 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_238.SeedRange,iVar31 + param_2);
        iVar4 = *piVar28;
        piVar28 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_3c8.SeedRange,param_2);
        *piVar28 = iVar4;
      }
      if (local_3c8.MetadataEntryRange.NumElements != 0) {
        plVar29 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_238.MetadataEntryRange,iVar31 + param_2);
        lVar5 = *plVar29;
        plVar29 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_3c8.MetadataEntryRange,param_2);
        *plVar29 = lVar5;
      }
      pdVar6 = *(double **)((longlong)this + 0x10);
      dVar9 = *pdVar6;
      dVar10 = pdVar6[1];
      dVar2 = pdVar6[2];
      uVar22 = 0;
      if (param_2 < local_3c8.BoundsMinRange.NumElements) {
        uVar22 = (uint)~param_2 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_3d8 = (longlong)param_2;
        local_3d0 = (longlong)local_3c8.BoundsMinRange.NumElements;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          iVar23 = (*pcVar8)();
          return iVar23;
        }
      }
      if (param_2 == param_2 % local_3c8.BoundsMinRange.ElementView.NumElements) {
        pTVar30 = (TVector<double>_u_0 *)
                  ((longlong)&(local_3c8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_3c8.BoundsMinRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_3c8.BoundsMinRange.ElementView.NumElements));
      }
      else {
        pTVar30 = &local_3c8.BoundsMinRange.StubValue.field0_0x0;
      }
      (((TVector<double>_u_0 *)&(pTVar30->_s_0).X)->_s_0).X = dVar9;
      *(double *)((longlong)pTVar30 + 8) = dVar10;
      *(double *)((longlong)pTVar30 + 0x10) = dVar2;
      lVar7 = *(longlong *)((longlong)this + 0x10);
      dVar2 = *(double *)(lVar7 + 0x18);
      uVar20 = *(undefined8 *)(lVar7 + 0x20);
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
      uVar22 = 0;
      if (param_2 < local_3c8.BoundsMaxRange.NumElements) {
        uVar22 = (uint)~param_2 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_3d8 = (longlong)param_2;
        local_3d0 = (longlong)local_3c8.BoundsMaxRange.NumElements;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          iVar23 = (*pcVar8)();
          return iVar23;
        }
      }
      if (param_2 == param_2 % local_3c8.BoundsMaxRange.ElementView.NumElements) {
        pTVar30 = (TVector<double>_u_0 *)
                  ((longlong)&(local_3c8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_3c8.BoundsMaxRange.ElementView.BytesBetweenElements *
                  (longlong)(param_2 % local_3c8.BoundsMaxRange.ElementView.NumElements));
      }
      else {
        pTVar30 = &local_3c8.BoundsMaxRange.StubValue.field0_0x0;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      (((TVector<double>_u_0 *)&(pTVar30->_s_0).X)->_s_0).X = dVar2;
      *(undefined8 *)((longlong)pTVar30 + 8) = uVar20;
      *(undefined8 *)((longlong)pTVar30 + 0x10) = uVar3;
    } while (iVar31 + param_2 < iVar23);
  }
  else if ((param_3 != 0) &&
          (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("Count == NumWritten",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
                               ,0x151,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    iVar23 = (*pcVar8)();
    return iVar23;
  }
  return param_3;
}

// operator() @ 149aee1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGBoundsFromMeshElement::ExecuteInternal'::__l81::<lambda_5>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  long64 lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  double dVar7;
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
  char cVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  float *pfVar23;
  TVector<double> *pTVar24;
  TVector4<double> *pTVar25;
  int *piVar26;
  long64 *plVar27;
  double *pdVar28;
  TVector<double>_u_0 *pTVar29;
  longlong lVar30;
  double *pdVar31;
  ulonglong uVar32;
  int iVar33;
  double *pdVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined1 auStack_418 [32];
  ulonglong local_3f8;
  longlong local_3f0;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  undefined8 *local_3d8;
  FPCGPointValueRanges local_3c8;
  FConstPCGPointValueRanges local_238;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_418;
  uVar32 = (ulonglong)param_1;
  local_3e0 = param_3;
  local_3d8 = this;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_238,*(UPCGBasePointData **)((longlong)this + 8));
  FPCGPointValueRanges::FPCGPointValueRanges(&local_3c8,*(UPCGBasePointData **)this,false);
  local_3e8 = param_1 + param_3;
  if (param_1 < local_3e8) {
    lVar35 = uVar32 * 4;
    local_3e4 = param_2 - param_1;
    uVar36 = uVar32;
    do {
      uVar6 = (uint)uVar32;
      iVar33 = local_3e4 + uVar6;
      cVar18 = (**(code **)(**(longlong **)this + 0x440))();
      if (cVar18 == '\0') {
        if (local_3c8.TransformRange.NumElements != 0) {
          pTVar22 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_238.TransformRange,uVar6);
          dVar2 = (pTVar22->Rotation).XY.m128d_f64[0];
          dVar7 = (pTVar22->Rotation).XY.m128d_f64[1];
          dVar8 = (pTVar22->Rotation).ZW.m128d_f64[0];
          dVar9 = (pTVar22->Rotation).ZW.m128d_f64[1];
          dVar10 = (pTVar22->Translation).XY.m128d_f64[0];
          dVar11 = (pTVar22->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar22->Translation).ZW.m128d_f64[0];
          dVar13 = (pTVar22->Translation).ZW.m128d_f64[1];
          dVar14 = (pTVar22->Scale3D).XY.m128d_f64[0];
          dVar15 = (pTVar22->Scale3D).XY.m128d_f64[1];
          dVar16 = (pTVar22->Scale3D).ZW.m128d_f64[0];
          dVar17 = (pTVar22->Scale3D).ZW.m128d_f64[1];
          pTVar22 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3c8.TransformRange,iVar33);
          (pTVar22->Rotation).XY.m128d_f64[0] = dVar2;
          (pTVar22->Rotation).XY.m128d_f64[1] = dVar7;
          (pTVar22->Rotation).ZW.m128d_f64[0] = dVar8;
          (pTVar22->Rotation).ZW.m128d_f64[1] = dVar9;
          (pTVar22->Translation).XY.m128d_f64[0] = dVar10;
          (pTVar22->Translation).XY.m128d_f64[1] = dVar11;
          (pTVar22->Translation).ZW.m128d_f64[0] = dVar12;
          (pTVar22->Translation).ZW.m128d_f64[1] = dVar13;
          (pTVar22->Scale3D).XY.m128d_f64[0] = dVar14;
          (pTVar22->Scale3D).XY.m128d_f64[1] = dVar15;
          (pTVar22->Scale3D).ZW.m128d_f64[0] = dVar16;
          (pTVar22->Scale3D).ZW.m128d_f64[1] = dVar17;
        }
        if (local_3c8.DensityRange.NumElements != 0) {
          pfVar23 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_238.DensityRange,uVar6);
          fVar1 = *pfVar23;
          pfVar23 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3c8.DensityRange,iVar33);
          *pfVar23 = fVar1;
        }
        if (local_3c8.SteepnessRange.NumElements != 0) {
          pfVar23 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_238.SteepnessRange,uVar6);
          fVar1 = *pfVar23;
          pfVar23 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3c8.SteepnessRange,iVar33);
          *pfVar23 = fVar1;
        }
        if (local_3c8.BoundsMinRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_238.BoundsMinRange,uVar6);
          dVar7 = (pTVar24->field0_0x0)._s_0.X;
          dVar8 = (pTVar24->field0_0x0)._s_0.Y;
          dVar2 = (pTVar24->field0_0x0)._s_0.Z;
          pTVar24 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3c8.BoundsMinRange,iVar33);
          (pTVar24->field0_0x0)._s_0.X = dVar7;
          (pTVar24->field0_0x0)._s_0.Y = dVar8;
          (pTVar24->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3c8.BoundsMaxRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_238.BoundsMaxRange,uVar6);
          dVar7 = (pTVar24->field0_0x0)._s_0.X;
          dVar8 = (pTVar24->field0_0x0)._s_0.Y;
          dVar2 = (pTVar24->field0_0x0)._s_0.Z;
          pTVar24 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3c8.BoundsMaxRange,iVar33);
          (pTVar24->field0_0x0)._s_0.X = dVar7;
          (pTVar24->field0_0x0)._s_0.Y = dVar8;
          (pTVar24->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3c8.ColorRange.NumElements != 0) {
          pTVar25 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_238.ColorRange,uVar6);
          dVar2 = (pTVar25->field0_0x0)._s_0.X;
          dVar7 = (pTVar25->field0_0x0)._s_0.Y;
          dVar8 = (pTVar25->field0_0x0)._s_0.Z;
          dVar9 = (pTVar25->field0_0x0)._s_0.W;
          pTVar25 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3c8.ColorRange,iVar33);
          (pTVar25->field0_0x0)._s_0.X = dVar2;
          (pTVar25->field0_0x0)._s_0.Y = dVar7;
          (pTVar25->field0_0x0)._s_0.Z = dVar8;
          (pTVar25->field0_0x0)._s_0.W = dVar9;
        }
        if (local_3c8.SeedRange.NumElements != 0) {
          piVar26 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_238.SeedRange,uVar6);
          iVar21 = *piVar26;
          piVar26 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3c8.SeedRange,iVar33);
          *piVar26 = iVar21;
        }
        if (local_3c8.MetadataEntryRange.NumElements != 0) {
          plVar27 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_238.MetadataEntryRange,uVar6);
          lVar3 = *plVar27;
          plVar27 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3c8.MetadataEntryRange,iVar33);
          *plVar27 = lVar3;
        }
      }
      lVar4 = *(longlong *)((longlong)this + 0x10);
      lVar30 = *(longlong *)((longlong)this + 0x18);
      iVar21 = *(int *)(lVar30 + 0x10);
      uVar20 = 0;
      if ((int)uVar6 < iVar21) {
        uVar20 = ~uVar6 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_3f8 = uVar36, local_3f0 = (longlong)iVar21,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        iVar33 = (*pcVar5)();
        return iVar33;
      }
      pdVar34 = (double *)0x0;
      uVar20 = *(uint *)(lVar35 + *(longlong *)(lVar30 + 8));
      pdVar28 = pdVar34;
      if (*(int *)(lVar4 + 0x2c0) != *(int *)(lVar4 + 0x2ec)) {
        lVar30 = lVar4 + 0x2f0;
        if (*(longlong *)(lVar4 + 0x2f8) != 0) {
          lVar30 = *(longlong *)(lVar4 + 0x2f8);
        }
        iVar21 = *(int *)(lVar30 + (ulonglong)(*(int *)(lVar4 + 0x300) - 1U & uVar20) * 4);
        if (iVar21 != -1) {
          do {
            pdVar28 = (double *)(*(longlong *)(lVar4 + 0x2b8) + (longlong)iVar21 * 0x48);
            if (*(uint *)(*(longlong *)(lVar4 + 0x2b8) + (longlong)iVar21 * 0x48) == uVar20) break;
            iVar21 = *(int *)(pdVar28 + 8);
            pdVar28 = pdVar34;
          } while (iVar21 != -1);
        }
      }
      pdVar31 = pdVar28 + 1;
      if (pdVar28 == (double *)0x0) {
        pdVar31 = pdVar34;
      }
      if (pdVar31 != (double *)0x0) {
        dVar7 = *pdVar31;
        dVar8 = pdVar31[1];
        dVar2 = pdVar31[2];
        uVar20 = 0;
        if (iVar33 < local_3c8.BoundsMinRange.NumElements) {
          uVar20 = (uint)~param_2 >> 0x1f;
        }
        if (uVar20 == 0) {
          local_3f8 = (ulonglong)iVar33;
          local_3f0 = (longlong)local_3c8.BoundsMinRange.NumElements;
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar19) {
            pcVar5 = (code *)swi(3);
            iVar33 = (*pcVar5)();
            return iVar33;
          }
        }
        if (iVar33 == iVar33 % local_3c8.BoundsMinRange.ElementView.NumElements) {
          pTVar29 = (TVector<double>_u_0 *)
                    ((longlong)&(local_3c8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                    (longlong)local_3c8.BoundsMinRange.ElementView.BytesBetweenElements *
                    (longlong)(iVar33 % local_3c8.BoundsMinRange.ElementView.NumElements));
        }
        else {
          pTVar29 = &local_3c8.BoundsMinRange.StubValue.field0_0x0;
        }
        (((TVector<double>_u_0 *)&(pTVar29->_s_0).X)->_s_0).X = dVar7;
        *(double *)((longlong)pTVar29 + 8) = dVar8;
        *(double *)((longlong)pTVar29 + 0x10) = dVar2;
        dVar7 = pdVar31[3];
        dVar8 = pdVar31[4];
        dVar2 = pdVar31[5];
        uVar20 = 0;
        if (iVar33 < local_3c8.BoundsMaxRange.NumElements) {
          uVar20 = (uint)~param_2 >> 0x1f;
        }
        if (uVar20 == 0) {
          local_3f8 = (ulonglong)iVar33;
          local_3f0 = (longlong)local_3c8.BoundsMaxRange.NumElements;
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar19) {
            pcVar5 = (code *)swi(3);
            iVar33 = (*pcVar5)();
            return iVar33;
          }
        }
        if (iVar33 == iVar33 % local_3c8.BoundsMaxRange.ElementView.NumElements) {
          pTVar29 = (TVector<double>_u_0 *)
                    ((longlong)&(local_3c8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                    (longlong)local_3c8.BoundsMaxRange.ElementView.BytesBetweenElements *
                    (longlong)(iVar33 % local_3c8.BoundsMaxRange.ElementView.NumElements));
        }
        else {
          pTVar29 = &local_3c8.BoundsMaxRange.StubValue.field0_0x0;
        }
        (((TVector<double>_u_0 *)&(pTVar29->_s_0).X)->_s_0).X = dVar7;
        *(double *)((longlong)pTVar29 + 8) = dVar8;
        *(double *)((longlong)pTVar29 + 0x10) = dVar2;
      }
      uVar32 = (ulonglong)(uVar6 + 1);
      uVar36 = uVar36 + 1;
      lVar35 = lVar35 + 4;
      param_2 = param_2 + 1;
      this = local_3d8;
      param_3 = local_3e0;
    } while ((int)(uVar6 + 1) < local_3e8);
  }
  else if ((param_3 != 0) &&
          (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumWritten == Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
                               ,0x183,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    iVar33 = (*pcVar5)();
    return iVar33;
  }
  return param_3;
}

// CanExecuteOnlyOnMainThread @ 149af9fe0

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
FPCGBoundsFromMeshElement::CanExecuteOnlyOnMainThread
          (FPCGBoundsFromMeshElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b09bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGBoundsFromMeshElement::ExecuteInternal(FPCGBoundsFromMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  InputMeshesData *pIVar2;
  FObjectPtr_u_0 *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FObjectPtr_u_0 FVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  UPCGBoundsFromMeshSettings *pUVar14;
  UStaticMesh *pUVar15;
  UClass *pUVar16;
  TBox<double> *pTVar17;
  FPCGTaggedData *this_00;
  double *pdVar18;
  UPCGBasePointData *pUVar19;
  FText *pFVar20;
  UStaticMesh *pUVar21;
  TRefCountPtr<ITextData> TVar22;
  FPCGDataCollection *pFVar23;
  InputMeshesData *pIVar24;
  FObjectPtr_u_0 *pFVar25;
  bool bVar26;
  undefined1 auStackY_2e8 [32];
  uint local_294;
  <lambda_3> local_290;
  <lambda_6> local_28f [7];
  FObjectPtr_u_0 local_288;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_280;
  TPairInitializer<int_const_&,UE::Math::TBox<double>_&&> local_270;
  uint *local_260;
  double *local_258;
  <lambda_2> local_250;
  <lambda_5> local_238;
  FString local_218;
  FString local_208;
  FText local_1f8;
  FString local_1e8;
  FString local_1d8;
  FText local_1c8 [4];
  undefined1 local_188;
  undefined7 uStack_187;
  undefined1 local_180 [56];
  undefined1 local_148 [56];
  undefined1 local_110 [16];
  double local_100;
  double dStack_f8;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  TBox<double> local_a0;
  TBox<double> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_294 = 0;
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId217,"FPCGBoundsFromMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
               ,0xd9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId217);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
                         ,0xdb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pUVar14 = FPCGContext::GetInputSettings<UPCGBoundsFromMeshSettings>(param_1);
  if ((pUVar14 == (UPCGBoundsFromMeshSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
                         ,0xdf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_280,&PCGPinConstants::DefaultInputLabel);
  if (param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x1 == '\0') {
    local_294 = 0;
    if (0 < param_1[1].AsyncState.CurrentChunkToCollapse) {
      do {
        uVar13 = local_294;
        uVar10 = 0;
        if ((int)local_294 < param_1[1].AsyncState.CurrentChunkToCollapse) {
          uVar10 = ~local_294 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pUVar15 = (UStaticMesh *)
                  FSoftObjectPath::ResolveObject
                            ((FSoftObjectPath *)
                             ((longlong)(int)uVar13 * 0x20 +
                             *(longlong *)&param_1[1].AsyncState.bStarted));
        local_a8 = local_a8 & 0xffffffffffffff00;
        if (pUVar15 == (UStaticMesh *)0x0) {
LAB_149b09d76:
          pUVar21 = (UStaticMesh *)0x0;
        }
        else {
          pUVar16 = Z_Construct_UClass_UStaticMesh_NoRegister();
          iVar11 = (int)pUVar16->_padding_;
          if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar11) ||
             (pUVar21 = pUVar15,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
             &pUVar16->_padding_)) goto LAB_149b09d76;
        }
        if (pUVar21 == (UStaticMesh *)0x0) {
          if (pUVar15 == (UStaticMesh *)0x0) {
LAB_149b09de3:
            pUVar15 = (UStaticMesh *)0x0;
          }
          else {
            pUVar16 = Z_Construct_UClass_USkeletalMesh_NoRegister();
            iVar11 = (int)pUVar16->_padding_;
            if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar11) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                &pUVar16->_padding_)) goto LAB_149b09de3;
          }
          if (pUVar15 != (UStaticMesh *)0x0) {
            pdVar18 = (double *)(**(code **)(pUVar15->_padding_ + 0x3e0))(pUVar15,local_180);
            local_188 = 1;
            local_d8 = *pdVar18 - pdVar18[3];
            dStack_c0 = pdVar18[3] + *pdVar18;
            dStack_d0 = pdVar18[1] - pdVar18[4];
            local_c8 = pdVar18[2] - pdVar18[5];
            local_a8 = CONCAT71(uStack_187,1);
            local_b8._8_4_ = SUB84(pdVar18[5] + pdVar18[2],0);
            local_b8._0_8_ = pdVar18[4] + pdVar18[1];
            local_b8._12_4_ = (int)((ulonglong)(pdVar18[5] + pdVar18[2]) >> 0x20);
            goto LAB_149b09e5d;
          }
        }
        else {
          pTVar17 = UStaticMesh::GetBoundingBox(pUVar21,&local_a0);
          local_d8 = (pTVar17->Min).field0_0x0._s_0.X;
          dStack_d0 = (pTVar17->Min).field0_0x0._s_0.Y;
          local_c8 = (pTVar17->Min).field0_0x0._s_0.Z;
          dStack_c0 = (pTVar17->Max).field0_0x0._s_0.X;
          local_b8 = *(undefined1 (*) [16])((longlong)&(pTVar17->Max).field0_0x0 + 8);
          local_a8._0_1_ = pTVar17->IsValid;
          local_a8._1_1_ = pTVar17->Pad[0];
          local_a8._2_1_ = pTVar17->Pad[1];
          local_a8._3_1_ = pTVar17->Pad[2];
          local_a8._4_1_ = pTVar17->Pad[3];
          local_a8._5_1_ = pTVar17->Pad[4];
          local_a8._6_1_ = pTVar17->Pad[5];
          local_a8._7_1_ = pTVar17->Pad[6];
LAB_149b09e5d:
          local_260 = &local_294;
          local_258 = &local_d8;
          TSet<TTuple<int,UE::Math::TBox<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,UE::Math::TBox<double>_&&>_>
                    ((TSet<TTuple<int,UE::Math::TBox<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
                      *)&param_1[1].OutputData.InactiveOutputPinBitmask,&local_270,
                     (bool *)&local_260);
        }
        local_294 = local_294 + 1;
      } while ((int)local_294 < param_1[1].AsyncState.CurrentChunkToCollapse);
    }
    param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x1 = 1;
  }
  uVar13 = *(uint *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
  if ((int)uVar13 < local_280.ArrayNum) {
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    do {
      pFVar23 = &param_1->OutputData;
      *(uint *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 = uVar13 + 1;
      uVar10 = 0;
      if ((int)uVar13 < local_280.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar3 = (FObjectPtr_u_0 *)(pFVar23->TaggedData).AllocatorInstance.Data;
      pFVar25 = (FObjectPtr_u_0 *)(local_280.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x78);
      if (((pFVar3 <= pFVar25) && (pFVar25 < pFVar3 + (longlong)*piVar1 * 0xf)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar11 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar23,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar11 + 1;
      this_00 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar23->TaggedData).AllocatorInstance.Data + (longlong)iVar11 * 0x78),
                           (FPCGTaggedData *)pFVar25);
      local_288 = (FObjectPtr_u_0)pFVar25->Handle;
      local_270.Value = (TBox<double> *)this_00;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b09ff5:
        if ((UPCGSpatialData *)local_288.Handle == (UPCGSpatialData *)0x0) goto LAB_149b0a466;
        pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_288,pUVar16);
        FVar6 = local_288;
        if ((!bVar7) || ((UPCGSpatialData *)local_288.Handle == (UPCGSpatialData *)0x0))
        goto LAB_149b0a466;
        lVar4._0_4_ = param_1[1].OutputData.TaggedData.ArrayNum;
        lVar4._4_4_ = param_1[1].OutputData.TaggedData.ArrayMax;
        if (lVar4 != 0) {
          pUVar15 = (UStaticMesh *)
                    FSoftObjectPath::ResolveObject
                              ((FSoftObjectPath *)&param_1[1].OutputData.TaggedData.ArrayNum);
          local_e0 = local_e0 & 0xffffffffffffff00;
          if (pUVar15 == (UStaticMesh *)0x0) {
LAB_149b0a073:
            pUVar21 = (UStaticMesh *)0x0;
          }
          else {
            pUVar16 = Z_Construct_UClass_UStaticMesh_NoRegister();
            iVar11 = (int)pUVar16->_padding_;
            if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar11) ||
               (pUVar21 = pUVar15,
               (longlong *)
               *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
               &pUVar16->_padding_)) goto LAB_149b0a073;
          }
          if (pUVar21 != (UStaticMesh *)0x0) {
            pTVar17 = UStaticMesh::GetBoundingBox(pUVar21,&local_68);
            local_110._0_8_ = (pTVar17->Min).field0_0x0._s_0.X;
            local_110._8_8_ = (pTVar17->Min).field0_0x0._s_0.Y;
            local_100 = (pTVar17->Min).field0_0x0._s_0.Z;
            dStack_f8 = (pTVar17->Max).field0_0x0._s_0.X;
            local_f0 = *(undefined1 (*) [16])((longlong)&(pTVar17->Max).field0_0x0 + 8);
            local_e0._0_1_ = pTVar17->IsValid;
            local_e0._1_1_ = pTVar17->Pad[0];
            local_e0._2_1_ = pTVar17->Pad[1];
            local_e0._3_1_ = pTVar17->Pad[2];
            local_e0._4_1_ = pTVar17->Pad[3];
            local_e0._5_1_ = pTVar17->Pad[4];
            local_e0._6_1_ = pTVar17->Pad[5];
            local_e0._7_1_ = pTVar17->Pad[6];
LAB_149b0a15d:
            pUVar19 = FPCGContext::NewPointData_AnyThread(param_1);
            UPCGSpatialData::InitializeFromData
                      ((UPCGSpatialData *)pUVar19,(UPCGSpatialData *)FVar6.Handle,
                       (UPCGMetadata *)0x0,true,true);
            pcVar5 = *(code **)(pUVar19->_padding_ + 0x490);
            uVar12 = (**(code **)(*(longlong *)FVar6.Handle + 0x488))(FVar6.Handle);
            (*pcVar5)(pUVar19,uVar12);
            cVar9 = (**(code **)(pUVar19->_padding_ + 0x440))(pUVar19);
            lVar4 = pUVar19->_padding_;
            if (cVar9 == '\0') {
              uVar13 = (**(code **)(*(longlong *)FVar6.Handle + 0x640))(FVar6.Handle,1);
              (**(code **)(lVar4 + 0x498))(pUVar19,uVar13 | 0xc);
              (**(code **)(pUVar19->_padding_ + 0x4b0))(pUVar19,FVar6.Handle);
              local_250.MeshBounds = (TBox<double> *)local_110;
              local_250.PointData = (UPCGBasePointData *)FVar6;
              local_250.OutputData = pUVar19;
              iVar11 = (**(code **)(*(longlong *)FVar6.Handle + 0x488))(FVar6.Handle);
              FPCGAsync::
              AsyncProcessingOneToOneRangeEx<_FPCGBoundsFromMeshElement::ExecuteInternal_::__l76::<lambda_3>,_FPCGBoundsFromMeshElement::ExecuteInternal_::__l76::<lambda_2>_&>
                        (&param_1->AsyncState,iVar11,&local_290,&local_250,false,0x40,true);
              FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar19);
            }
            else {
              (**(code **)(lVar4 + 0x550))(pUVar19,local_110);
              (**(code **)(pUVar19->_padding_ + 0x558))(pUVar19,&dStack_f8);
              FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar19);
            }
            goto LAB_149b0a541;
          }
          if (pUVar15 == (UStaticMesh *)0x0) {
LAB_149b0a0e0:
            pUVar15 = (UStaticMesh *)0x0;
          }
          else {
            pUVar16 = Z_Construct_UClass_USkeletalMesh_NoRegister();
            iVar11 = (int)pUVar16->_padding_;
            if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar11) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                &pUVar16->_padding_)) goto LAB_149b0a0e0;
          }
          if (pUVar15 != (UStaticMesh *)0x0) {
            pdVar18 = (double *)(**(code **)(pUVar15->_padding_ + 0x3e0))(pUVar15,local_148);
            local_188 = 1;
            local_110._0_8_ = *pdVar18 - pdVar18[3];
            dStack_f8 = pdVar18[3] + *pdVar18;
            local_110._8_8_ = pdVar18[1] - pdVar18[4];
            local_100 = pdVar18[2] - pdVar18[5];
            local_e0 = CONCAT71(uStack_187,1);
            local_f0._8_4_ = SUB84(pdVar18[2] + pdVar18[5],0);
            local_f0._0_8_ = pdVar18[1] + pdVar18[4];
            local_f0._12_4_ = (int)((ulonglong)(pdVar18[2] + pdVar18[5]) >> 0x20);
            goto LAB_149b0a15d;
          }
          if ((byte)LogPCG._0_1_ < 2) goto LAB_149b0a541;
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_1f8,L"PCGBoundsFromMeshElement",L"LoadStaticMeshFailed",
                               L"Failed to load StaticMesh or SkeletalMesh");
          FText::ToString(pFVar20);
          FPCGContext::GetTaskName(param_1,&local_208);
          FPCGContext::GetExecutionSourceName(param_1,&local_218);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          TVar22.Reference = local_1f8.TextData.Reference;
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
            TVar22.Reference = local_1f8.TextData.Reference;
          }
          goto LAB_149b0a532;
        }
        pIVar24 = (InputMeshesData *)param_1[1].InputData.InactiveOutputPinBitmask;
        pIVar2 = pIVar24 + *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
        for (; pIVar24 != pIVar2; pIVar24 = pIVar24 + 1) {
          if (pIVar24->InputIndex ==
              *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 + -1)
          goto LAB_149b0a36f;
        }
        pIVar24 = (InputMeshesData *)0x0;
LAB_149b0a36f:
        if (pIVar24 != (InputMeshesData *)0x0) {
          pUVar19 = FPCGContext::NewPointData_AnyThread(param_1);
          UPCGSpatialData::InitializeFromData
                    ((UPCGSpatialData *)pUVar19,(UPCGSpatialData *)FVar6.Handle,(UPCGMetadata *)0x0,
                     true,true);
          pcVar5 = *(code **)(pUVar19->_padding_ + 0x490);
          uVar12 = (**(code **)(*(longlong *)FVar6.Handle + 0x488))(FVar6.Handle);
          (*pcVar5)(pUVar19,uVar12,0);
          cVar9 = (**(code **)(pUVar19->_padding_ + 0x440))(pUVar19);
          if (cVar9 == '\0') {
            pcVar5 = *(code **)(pUVar19->_padding_ + 0x498);
            uVar12 = (**(code **)(*(longlong *)FVar6.Handle + 0x640))(FVar6.Handle,1);
            (*pcVar5)(pUVar19,uVar12);
          }
          (**(code **)(pUVar19->_padding_ + 0x498))(pUVar19,0xc);
          (**(code **)(pUVar19->_padding_ + 0x4b0))(pUVar19,FVar6.Handle);
          local_238.PointData = (UPCGBasePointData *)FVar6;
          local_238.OutputData = pUVar19;
          local_238.Context = (FPCGBoundsFromMeshContext *)param_1;
          local_238.InputData = pIVar24;
          iVar11 = (**(code **)(*(longlong *)FVar6.Handle + 0x488))(FVar6.Handle);
          FPCGAsync::
          AsyncProcessingOneToOneRangeEx<_FPCGBoundsFromMeshElement::ExecuteInternal_::__l81::<lambda_6>,_FPCGBoundsFromMeshElement::ExecuteInternal_::__l81::<lambda_5>_&>
                    (&param_1->AsyncState,iVar11,local_28f,&local_238,false,0x40,true);
          FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)local_270.Value,(UPCGData *)pUVar19);
        }
      }
      else {
        if ((UPCGSpatialData *)local_288.Handle != (UPCGSpatialData *)0x0) {
          UE::GC::MarkAsReachable(local_288.Handle);
          goto LAB_149b09ff5;
        }
LAB_149b0a466:
        if (1 < (byte)LogPCG._0_1_) {
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (local_1c8,L"PCGBoundsFromMeshElement",L"InvalidInputData",
                               L"Invalid input data");
          FText::ToString(pFVar20);
          FPCGContext::GetTaskName(param_1,&local_1d8);
          FPCGContext::GetExecutionSourceName(param_1,&local_1e8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          TVar22.Reference = local_1c8[0].TextData.Reference;
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            TVar22.Reference = local_1c8[0].TextData.Reference;
          }
LAB_149b0a532:
          if (TVar22.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar22.Reference + 0x10))();
          }
        }
      }
LAB_149b0a541:
      uVar13 = *(uint *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
    } while ((int)uVar13 < local_280.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_280.AllocatorInstance.Data,local_280.ArrayNum);
  if ((FPCGTaggedData *)local_280.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b11b60

EPCGElementExecutionLoopMode __thiscall
FPCGBoundsFromMeshElement::ExecutionLoopMode(FPCGBoundsFromMeshElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// PrepareDataInternal @ 149b21430

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
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FPCGBoundsFromMeshElement::PrepareDataInternal(FPCGBoundsFromMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  bool *pbVar2;
  ulong64 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  longlong lVar6;
  FSoftObjectPath *pFVar7;
  code *pcVar8;
  FObjectPtr_u_0 FVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  UPCGBoundsFromMeshSettings *pUVar15;
  UPCGParamData *pUVar16;
  UPCGMetadata *this_00;
  long64 lVar17;
  FText *pFVar18;
  FString *pFVar19;
  FTextFormat *pFVar20;
  UClass *pUVar21;
  FText *pFVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined4 local_res10;
  undefined4 uStackX_14;
  IPCGAttributeAccessorKeys *local_res18;
  IPCGAttributeAccessorKeys *local_res20;
  InputMeshesData local_398;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_380;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_370;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_360;
  FObjectPtr_u_0 local_350;
  undefined1 local_348 [56];
  TObjectPtr<UPCGMetadata>_u_0 local_310;
  int local_308;
  int *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  TSharedPtr<FCulture,1> local_2e8;
  TSharedPtr<FCulture,1> local_2d8;
  <lambda_1> local_2c8;
  TArrayView<FSoftObjectPath,int> local_2a8;
  FString local_298;
  FText local_288;
  FString local_278;
  FString local_268;
  FText local_258;
  FText local_248;
  FString local_238;
  FText local_228;
  FString local_218;
  FString local_208;
  FText local_1f8;
  FText local_1e8;
  FString local_1d8;
  FText local_1c8;
  FString local_1b8;
  FString local_1a8;
  FText local_198;
  FText local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FPCGAttributePropertySelector local_118;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FTextFormat local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  
  local_res10 = 0;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId77,"FPCGBoundsFromMeshElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
               ,0x4d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId77);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
                          ,0x4f,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pUVar15 = FPCGContext::GetInputSettings<UPCGBoundsFromMeshSettings>(param_1);
  if ((pUVar15 == (UPCGBoundsFromMeshSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGBoundsFromMesh.cpp"
                          ,0x53,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (*(char *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap == '\0') {
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_360,&PCGBoundsFromMeshSettings::AttributeLabel);
    if (local_360.ArrayNum == 0) {
LAB_149b21a7d:
      FPCGDataCollection::GetInputsByPin
                (&param_1->InputData,&local_380,&PCGPinConstants::DefaultInputLabel);
      uVar14 = *(uint *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4;
      if ((int)uVar14 < local_380.ArrayNum) {
        do {
          uVar13 = 0;
          if ((int)uVar14 < local_380.ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          local_350 = (FObjectPtr_u_0)
                      ((FObjectPtr_u_0 *)
                      (local_380.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x78))->Handle;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b21b2f:
            if ((UPCGData *)local_350.Handle == (UPCGData *)0x0) goto LAB_149b2210d;
            pUVar21 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_350,pUVar21);
            FVar9 = local_350;
            if ((!bVar10) || ((UPCGData *)local_350.Handle == (UPCGData *)0x0)) goto LAB_149b2210d;
            FPCGAttributePropertyInputSelector::CopyAndFixLast
                      (&pUVar15->MeshAttribute,
                       (FPCGAttributePropertyInputSelector *)(local_348 + 0x10),
                       (UPCGData *)local_350.Handle);
            local_398.InputIndex =
                 *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4;
            local_398.MeshValueIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4 =
                 local_398.InputIndex + 1;
            local_398.MeshValueIndex.ArrayNum = 0;
            local_398.MeshValueIndex.ArrayMax = 0;
            PCGAttributeAccessorHelpers::CreateConstAccessor
                      ((UPCGData *)&local_res10,(FPCGAttributePropertySelector *)FVar9.Handle,
                       (bool)((char)local_348 + '\x10'));
            PCGAttributeAccessorHelpers::CreateConstKeys
                      ((UPCGData *)&local_res20,(FPCGAttributePropertySelector *)FVar9.Handle);
            puVar23 = (undefined8 *)CONCAT44(uStackX_14,local_res10);
            if ((puVar23 == (undefined8 *)0x0) || (local_res20 == (IPCGAttributeAccessorKeys *)0x0))
            {
              if ((pUVar15->bSilenceAttributeNotFoundErrors == false) && (2 < (byte)LogPCG._0_1_)) {
                local_2d8.Object = (FCulture *)0x0;
                local_2d8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                pFVar18 = FText::AsNumber(&local_58,
                                          *(int *)&param_1[1].AsyncState.
                                                   ChunkToNumElementsWrittenMap.field_0x4 + -1,
                                          (FNumberFormattingOptions *)0x0,&local_2d8);
                pFVar19 = FPCGAttributePropertySelector::ToString
                                    ((FPCGAttributePropertySelector *)(local_348 + 0x10),&local_178,
                                     false);
                FText::FromString(&local_168,pFVar19);
                if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_178.Data.AllocatorInstance.Data);
                }
                pFVar22 = FText::AsLocalizable_Advanced_LocText
                                    (&local_128,L"PCGBoundsFromMeshElement",
                                     L"AttributeDoesNotExistOnInput",
                                     L"Input attribute/property \'{0}\' does not exist on input {1}, skipped"
                                    );
                pFVar20 = FTextFormat::FTextFormat(&local_98,pFVar22,Default);
                pFVar18 = FText::Format<FText,FText>(&local_138,pFVar20,&local_168,pFVar18);
                FText::ToString(pFVar18);
                FPCGContext::GetTaskName(param_1,&local_148);
                FPCGContext::GetExecutionSourceName(param_1,&local_158);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                if (local_138.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
                }
                if (local_128.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2d8.SharedReferenceCount.ReferenceController);
                puVar23 = (undefined8 *)CONCAT44(uStackX_14,local_res10);
              }
              if (local_res20 != (IPCGAttributeAccessorKeys *)0x0) {
                (**(code **)local_res20->_padding_)(local_res20,1);
                puVar23 = (undefined8 *)CONCAT44(uStackX_14,local_res10);
              }
              if (puVar23 != (undefined8 *)0x0) {
                (**(code **)*puVar23)(puVar23,1);
              }
            }
            else {
              uVar14 = (**(code **)(local_res20->_padding_ + 0x10))();
              if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
              }
              if (local_398.MeshValueIndex.ArrayMax < (int)uVar14) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar14,&local_398.MeshValueIndex.AllocatorInstance,
                           local_398.MeshValueIndex.ArrayNum,&local_398.MeshValueIndex.ArrayMax);
              }
              local_2c8.InputMeshData = &local_398;
              local_2c8.__this = this;
              local_2c8.Context = (FPCGBoundsFromMeshContext *)param_1;
              bVar10 = PCGMetadataElementCommon::
                       ApplyOnAccessorRange<FSoftObjectPath,_FPCGBoundsFromMeshElement::PrepareDataInternal_::__l101::<lambda_1>_&>
                                 (local_res20,
                                  (IPCGAttributeAccessor *)CONCAT44(uStackX_14,local_res10),
                                  &local_2c8,AllowBroadcastAndConstructible,0x100,-1);
              if (bVar10) {
                puVar3 = &param_1[1].InputData.InactiveOutputPinBitmask;
                if ((((InputMeshesData *)*puVar3 <= &local_398) &&
                    (&local_398 <
                     (InputMeshesData *)*puVar3 +
                     *(int *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data + 4
                             ))) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  uVar11 = (*pcVar8)();
                  return (bool)uVar11;
                }
                iVar12 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
                piVar5 = (int *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data
                                + 4);
                if (iVar12 == *piVar5) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,(ForAnyElementType *)puVar3,piVar5);
                }
                *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data = iVar12 + 1;
                piVar5 = (int *)(*puVar3 + (longlong)iVar12 * 0x18);
                *piVar5 = local_398.InputIndex;
                piVar5[2] = 0;
                piVar5[3] = 0;
                *(FScriptContainerElement **)(piVar5 + 2) =
                     local_398.MeshValueIndex.AllocatorInstance.Data;
                local_398.MeshValueIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                piVar5[4] = local_398.MeshValueIndex.ArrayNum;
                piVar5[5] = local_398.MeshValueIndex.ArrayMax;
                local_398.MeshValueIndex.ArrayNum = 0;
                local_398.MeshValueIndex.ArrayMax = 0;
              }
              else if ((pUVar15->bSilenceAttributeNotFoundErrors == false) &&
                      (2 < (byte)LogPCG._0_1_)) {
                local_2e8.Object = (FCulture *)0x0;
                local_2e8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                pFVar18 = FText::AsNumber(&local_78,
                                          *(int *)&param_1[1].AsyncState.
                                                   ChunkToNumElementsWrittenMap.field_0x4 + -1,
                                          (FNumberFormattingOptions *)0x0,&local_2e8);
                pFVar19 = FPCGAttributePropertySelector::ToString
                                    ((FPCGAttributePropertySelector *)(local_348 + 0x10),&local_1d8,
                                     false);
                FText::FromString(&local_1c8,pFVar19);
                if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                }
                pFVar22 = FText::AsLocalizable_Advanced_LocText
                                    (&local_188,L"PCGBoundsFromMeshElement",
                                     L"AttributeOfTheWrongTypeOnInput",
                                     L"Input attribute/property \'{0}\' on input {1} does not match the expected type, skipped"
                                    );
                pFVar20 = FTextFormat::FTextFormat(&local_68,pFVar22,Default);
                pFVar18 = FText::Format<FText,FText>(&local_198,pFVar20,&local_1c8,pFVar18);
                FText::ToString(pFVar18);
                FPCGContext::GetTaskName(param_1,&local_1a8);
                FPCGContext::GetExecutionSourceName(param_1,&local_1b8);
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151f53180,
                           (FLogCategoryBase *)&LogPCG);
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
                if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                }
                if (local_198.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
                }
                if (local_188.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2e8.SharedReferenceCount.ReferenceController);
              }
              bVar10 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
              if (bVar10) {
                if (local_res20 != (IPCGAttributeAccessorKeys *)0x0) {
                  (**(code **)local_res20->_padding_)(local_res20,1);
                }
                puVar23 = (undefined8 *)CONCAT44(uStackX_14,local_res10);
                if (puVar23 != (undefined8 *)0x0) {
                  (**(code **)*puVar23)(puVar23,1);
                }
                if (local_398.MeshValueIndex.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_398.MeshValueIndex.AllocatorInstance.Data);
                }
                DestructItems<FString,int>((FString *)local_310.DebugPtr,local_308);
                if (local_310.DebugPtr != (UPCGMetadata *)0x0) {
                  FMemory::Free(local_310.DebugPtr);
                }
                break;
              }
              if (local_res20 != (IPCGAttributeAccessorKeys *)0x0) {
                (**(code **)local_res20->_padding_)(local_res20,1);
              }
              puVar23 = (undefined8 *)CONCAT44(uStackX_14,local_res10);
              if (puVar23 != (undefined8 *)0x0) {
                (**(code **)*puVar23)(puVar23,1);
              }
            }
            if (local_398.MeshValueIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.MeshValueIndex.AllocatorInstance.Data);
            }
            DestructItems<FString,int>((FString *)local_310.DebugPtr,local_308);
            if (local_310.DebugPtr != (UPCGMetadata *)0x0) {
              FMemory::Free(local_310.DebugPtr);
            }
          }
          else {
            if ((UPCGData *)local_350.Handle != (UPCGData *)0x0) {
              UE::GC::MarkAsReachable(local_350.Handle);
              goto LAB_149b21b2f;
            }
LAB_149b2210d:
            puVar4 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4;
            *(int *)puVar4 = *(int *)puVar4 + 1;
          }
          uVar14 = *(uint *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4;
        } while ((int)uVar14 < local_380.ArrayNum);
      }
      if (*(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x4 ==
          local_380.ArrayNum) {
        *(undefined1 *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap = 1;
      }
      bVar10 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
      if (bVar10) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
        if ((FPCGTaggedData *)local_380.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_360.AllocatorInstance.Data,local_360.ArrayNum);
        if ((FPCGTaggedData *)local_360.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_360.AllocatorInstance.Data);
        }
        bVar10 = false;
        goto LAB_149b222d1;
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
      local_118.ExtraNames.AllocatorInstance.Data = local_380.AllocatorInstance.Data;
    }
    else {
      if ((local_360.ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      pUVar16 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)local_360.AllocatorInstance.Data);
      if (pUVar16 == (UPCGParamData *)0x0) goto LAB_149b21a7d;
      FPCGAttributePropertyInputSelector::CopyAndFixLast
                (&pUVar15->MeshAttribute,(FPCGAttributePropertyInputSelector *)&local_118,
                 (UPCGData *)pUVar16);
      PCGAttributeAccessorHelpers::CreateConstAccessor
                ((UPCGData *)local_348,(FPCGAttributePropertySelector *)pUVar16,SUB81(&local_118,0))
      ;
      PCGAttributeAccessorHelpers::CreateConstKeys
                ((UPCGData *)&local_res18,(FPCGAttributePropertySelector *)pUVar16);
      this_00 = (UPCGMetadata *)(**(code **)(pUVar16->_padding_ + 800))(pUVar16);
      lVar17 = UPCGMetadata::GetLocalItemCount(this_00);
      if ((1 < lVar17) && (2 < (byte)LogPCG._0_1_)) {
        pFVar18 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"PCGBoundsFromMeshElement",L"AttributeSetHasMultipleEntries"
                             ,
                             L"Input attribute set has multiple entries - only the first one will be used."
                            );
        FText::ToString(pFVar18);
        FPCGContext::GetTaskName(param_1,&local_c8);
        FPCGContext::GetExecutionSourceName(param_1,&local_d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
      if (((IPCGAttributeAccessor *)local_348._0_8_ == (IPCGAttributeAccessor *)0x0) ||
         (local_res18 == (IPCGAttributeAccessorKeys *)0x0)) {
        if ((pUVar15->bSilenceAttributeNotFoundErrors == false) && (2 < (byte)LogPCG._0_1_)) {
          pFVar19 = FPCGAttributePropertySelector::ToString(&local_118,&local_238,false);
          FText::FromString(&local_228,pFVar19);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_1e8,L"PCGBoundsFromMeshElement",
                               L"AttributeDoesNotExistOnAttributeSet",
                               L"Input attribute/property \'{0}\' does not exist on attribute set, skipped."
                              );
          pFVar20 = FTextFormat::FTextFormat(&local_88,pFVar18,Default);
          pFVar18 = FText::Format<FText>(&local_1f8,pFVar20,&local_228);
          FText::ToString(pFVar18);
          FPCGContext::GetTaskName(param_1,&local_208);
          FPCGContext::GetExecutionSourceName(param_1,&local_218);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_1f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
          }
LAB_149b21a20:
          if (local_1e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
          }
        }
      }
      else {
        uStack_2f0 = 1;
        piVar5 = &param_1[1].OutputData.TaggedData.ArrayNum;
        local_2a8._12_4_ = uStack_2ec;
        local_2a8.ArrayNum = 1;
        local_2f8 = piVar5;
        local_2a8.DataPtr = (FSoftObjectPath *)piVar5;
        bVar10 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                           ((IPCGAttributeAccessor *)local_348._0_8_,&local_2a8,0,local_res18,
                            AllowConstructible);
        if (bVar10) {
          lVar6._0_4_ = param_1[1].OutputData.TaggedData.ArrayNum;
          lVar6._4_4_ = param_1[1].OutputData.TaggedData.ArrayMax;
          if (lVar6 != 0) {
            pbVar2 = &param_1[1].AsyncState.bStarted;
            if (((*(undefined1 **)pbVar2 <= piVar5) &&
                (piVar5 < *(undefined1 **)pbVar2 + (longlong)param_1[1].AsyncState._padding_ * 0x20)
                ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            iVar12 = param_1[1].AsyncState.CurrentChunkToCollapse;
            piVar1 = &param_1[1].AsyncState._padding_;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)pbVar2,piVar1);
            }
            param_1[1].AsyncState.CurrentChunkToCollapse = iVar12 + 1;
            FSoftObjectPath::FSoftObjectPath
                      ((FSoftObjectPath *)(*(longlong *)pbVar2 + (longlong)iVar12 * 0x20),
                       (FSoftObjectPath *)piVar5);
          }
        }
        else if ((pUVar15->bSilenceAttributeNotFoundErrors == false) && (2 < (byte)LogPCG._0_1_)) {
          pFVar19 = FPCGAttributePropertySelector::ToString(&local_118,&local_298,false);
          FText::FromString(&local_288,pFVar19);
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_248,L"PCGBoundsFromMeshElement",
                               L"AttributeOfTheWrongTypeOnAttributeSet",
                               L"Input attribute/property \'{0}\' on attribute set does not match the expected type, skipped"
                              );
          pFVar20 = FTextFormat::FTextFormat(&local_a8,pFVar18,Default);
          pFVar18 = FText::Format<FText>(&local_258,pFVar20,&local_288);
          FText::ToString(pFVar18);
          FPCGContext::GetTaskName(param_1,&local_268);
          FPCGContext::GetExecutionSourceName(param_1,&local_278);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          local_1e8.TextData.Reference = local_248.TextData.Reference;
          if (local_258.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
            local_1e8.TextData.Reference = local_248.TextData.Reference;
          }
          goto LAB_149b21a20;
        }
      }
      *(undefined1 *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap = 1;
      if (local_res18 != (IPCGAttributeAccessorKeys *)0x0) {
        (**(code **)local_res18->_padding_)(local_res18,1);
      }
      if ((IPCGAttributeAccessor *)local_348._0_8_ != (IPCGAttributeAccessor *)0x0) {
        (**(code **)*(longlong *)local_348._0_8_)(local_348._0_8_,1);
      }
      DestructItems<FString,int>
                ((FString *)local_118.ExtraNames.AllocatorInstance.Data,
                 local_118.ExtraNames.ArrayNum);
    }
    if ((FPCGTaggedData *)local_118.ExtraNames.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_118.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_360.AllocatorInstance.Data,local_360.ArrayNum);
    if ((FPCGTaggedData *)local_360.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_360.AllocatorInstance.Data);
    }
  }
  if ((*(char *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap == '\0') ||
     (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data != '\0')) {
    bVar10 = true;
  }
  else {
    iVar12 = param_1[1].AsyncState.CurrentChunkToCollapse;
    pFVar7 = *(FSoftObjectPath **)&param_1[1].AsyncState.bStarted;
    local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.ArrayNum = iVar12;
    if (iVar12 == 0) {
      local_370.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar12,0,&local_370.AllocatorInstance,iVar12,&local_370.ArrayMax);
      ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                (local_370.AllocatorInstance.Data,pFVar7,iVar12);
    }
    bVar10 = IPCGAsyncLoadingContext::RequestResourceLoad
                       ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_370,
                        pUVar15->bSynchronousLoad == false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_370.AllocatorInstance.Data,local_370.ArrayNum);
    if ((FSoftObjectPath *)local_370.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_370.AllocatorInstance.Data);
    }
  }
LAB_149b222d1:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// SupportsBasePointDataInputs @ 149b2d1a0

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
FPCGBoundsFromMeshElement::SupportsBasePointDataInputs
          (FPCGBoundsFromMeshElement *this,FPCGContext *param_1)

{
  return true;
}

