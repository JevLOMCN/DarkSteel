// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b61530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGDuplicatePointElement::ExecuteInternal'::__l66::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  double *pdVar4;
  long64 lVar5;
  code *pcVar6;
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
  double dVar18;
  bool bVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  TVector4<double> *pTVar24;
  int *piVar25;
  long64 *plVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  TVector<double>_u_0 *pTVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_5b8 [32];
  ulonglong local_598;
  longlong local_590;
  int local_588;
  int local_584;
  int local_580;
  int local_57c;
  TTransform<double> *local_578;
  TVector<double>_u_0 local_570;
  TTransform<double> local_558;
  TTransform<double> local_4f8;
  FPCGPointValueRanges local_498;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  FConstPCGPointValueRanges local_248;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  uVar30 = (ulonglong)param_1;
  local_588 = param_2;
  local_57c = param_3;
  local_578 = this;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_248,*(UPCGBasePointData **)((longlong)this + 0x70));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_498,*(UPCGBasePointData **)((longlong)this + 0x78),false);
  local_580 = param_1 + param_3;
  local_584 = 0;
  piVar1 = (int *)((longlong)this + 0x60);
  uVar35 = uVar30;
  if (param_1 < local_580) {
    do {
      iVar20 = local_584;
      uVar29 = (uint)uVar30;
      uVar28 = ~uVar29 >> 0x1f;
      uVar32 = 0;
      if ((int)uVar29 < local_248.BoundsMaxRange.NumElements) {
        uVar32 = uVar28;
      }
      if ((uVar32 == 0) &&
         (local_598 = uVar35, local_590 = (longlong)local_248.BoundsMaxRange.NumElements,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        iVar20 = (*pcVar6)();
        return iVar20;
      }
      uVar27 = (int)uVar29 >> 0x1f;
      pTVar33 = (TVector<double>_u_0 *)
                ((longlong)&(local_248.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                (longlong)
                (int)((longlong)((ulonglong)uVar27 << 0x20 | uVar30 & 0xffffffff) %
                     (longlong)local_248.BoundsMaxRange.ElementView.NumElements) *
                (longlong)local_248.BoundsMaxRange.ElementView.BytesBetweenElements);
      uVar32 = 0;
      if ((int)uVar29 < local_248.BoundsMinRange.NumElements) {
        uVar32 = uVar28;
      }
      if ((uVar32 == 0) &&
         (local_598 = uVar35, local_590 = (longlong)local_248.BoundsMinRange.NumElements,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        iVar20 = (*pcVar6)();
        return iVar20;
      }
      pdVar4 = (double *)(((TTransform<double> *)((longlong)this + 0x60))->Rotation).XY.m128d_f64[1]
      ;
      local_308.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_308.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_308.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_308.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      lVar34 = (longlong)
               (int)((longlong)((ulonglong)uVar27 << 0x20 | uVar30 & 0xffffffff) %
                    (longlong)local_248.BoundsMinRange.ElementView.NumElements) *
               (longlong)local_248.BoundsMinRange.ElementView.BytesBetweenElements;
      dVar7 = (*(double *)((longlong)pTVar33 + 8) -
              *(double *)
               ((longlong)&(local_248.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar34 + 8)) * pdVar4[1];
      local_2a8.Translation.ZW.m128d_f64[0] =
           (*(double *)((longlong)pTVar33 + 0x10) -
           *(double *)
            ((longlong)&(local_248.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
            lVar34 + 0x10)) * pdVar4[2];
      uVar38 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar39 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      local_2a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
      local_2a8.Translation.XY.m128d_f64[0] =
           ((pTVar33->_s_0).X -
           (((TVector<double>_u_0 *)
            ((longlong)&(local_248.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 + lVar34)
            )->_s_0).X) * *pdVar4;
      local_2a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_2a8.Translation.ZW.m128d_f64[1] = 0.0;
      uVar36 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar37 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_308.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_308.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_308.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar38;
      local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar39;
      local_308.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_308.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_308.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar36;
      local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar37;
      local_308.Scale3D.XY.m128d_f64[1]._0_4_ = uVar38;
      local_308.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_308.Scale3D.XY.m128d_f64[1]._4_4_ = uVar39;
      local_308.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar36;
      local_308.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_308.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar37;
      local_2a8.Rotation.XY.m128d_f64[0] = local_308.Rotation.XY.m128d_f64[0];
      local_2a8.Rotation.XY.m128d_f64[1] = local_308.Rotation.XY.m128d_f64[1];
      local_2a8.Rotation.ZW.m128d_f64[0] = local_308.Rotation.ZW.m128d_f64[0];
      local_2a8.Rotation.ZW.m128d_f64[1] = local_308.Rotation.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply(&local_308,&local_2a8,this);
      uVar32 = 0;
      if ((int)uVar29 < local_248.TransformRange.NumElements) {
        uVar32 = uVar28;
      }
      if ((uVar32 == 0) &&
         (local_598 = uVar35, local_590 = (longlong)local_248.TransformRange.NumElements,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        iVar20 = (*pcVar6)();
        return iVar20;
      }
      iVar31 = 0;
      lVar34 = (longlong)
               (int)((longlong)((ulonglong)uVar27 << 0x20 | uVar30 & 0xffffffff) %
                    (longlong)local_248.TransformRange.ElementView.NumElements) *
               (longlong)local_248.TransformRange.ElementView.BytesBetweenElements;
      pdVar4 = (double *)
               ((longlong)
                ((local_248.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
               lVar34);
      local_558.Rotation.XY.m128d_f64[0] = *pdVar4;
      local_558.Rotation.XY.m128d_f64[1] = pdVar4[1];
      pdVar4 = (double *)
               ((longlong)
                ((local_248.TransformRange.ElementView.FirstElementPtr)->Rotation).ZW.m128d_f64 +
               lVar34);
      local_558.Rotation.ZW.m128d_f64[0] = *pdVar4;
      local_558.Rotation.ZW.m128d_f64[1] = pdVar4[1];
      pdVar4 = (double *)
               ((longlong)
                ((local_248.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64 +
               lVar34);
      local_558.Translation.XY.m128d_f64[0] = *pdVar4;
      local_558.Translation.XY.m128d_f64[1] = pdVar4[1];
      pdVar4 = (double *)
               ((longlong)
                ((local_248.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.m128d_f64 +
               lVar34);
      local_558.Translation.ZW.m128d_f64[0] = *pdVar4;
      local_558.Translation.ZW.m128d_f64[1] = pdVar4[1];
      pdVar4 = (double *)
               ((longlong)
                ((local_248.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.m128d_f64 +
               lVar34);
      local_558.Scale3D.XY.m128d_f64[0] = *pdVar4;
      local_558.Scale3D.XY.m128d_f64[1] = pdVar4[1];
      pdVar4 = (double *)
               ((longlong)
                ((local_248.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.m128d_f64 +
               lVar34);
      local_558.Scale3D.ZW.m128d_f64[0] = *pdVar4;
      local_558.Scale3D.ZW.m128d_f64[1] = pdVar4[1];
      if (*(char *)((longlong)local_578[1].Rotation.XY.m128d_f64 + 4) != '\0') {
        iVar31 = local_588 + iVar20;
        if (local_498.TransformRange.NumElements != 0) {
          pTVar21 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_248.TransformRange,uVar29);
          dVar7 = (pTVar21->Rotation).XY.m128d_f64[0];
          dVar8 = (pTVar21->Rotation).XY.m128d_f64[1];
          dVar9 = (pTVar21->Rotation).ZW.m128d_f64[0];
          dVar10 = (pTVar21->Rotation).ZW.m128d_f64[1];
          dVar11 = (pTVar21->Translation).XY.m128d_f64[0];
          dVar12 = (pTVar21->Translation).XY.m128d_f64[1];
          dVar13 = (pTVar21->Translation).ZW.m128d_f64[0];
          dVar14 = (pTVar21->Translation).ZW.m128d_f64[1];
          dVar15 = (pTVar21->Scale3D).XY.m128d_f64[0];
          dVar16 = (pTVar21->Scale3D).XY.m128d_f64[1];
          dVar17 = (pTVar21->Scale3D).ZW.m128d_f64[0];
          dVar18 = (pTVar21->Scale3D).ZW.m128d_f64[1];
          pTVar21 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_498.TransformRange,iVar31);
          (pTVar21->Rotation).XY.m128d_f64[0] = dVar7;
          (pTVar21->Rotation).XY.m128d_f64[1] = dVar8;
          (pTVar21->Rotation).ZW.m128d_f64[0] = dVar9;
          (pTVar21->Rotation).ZW.m128d_f64[1] = dVar10;
          (pTVar21->Translation).XY.m128d_f64[0] = dVar11;
          (pTVar21->Translation).XY.m128d_f64[1] = dVar12;
          (pTVar21->Translation).ZW.m128d_f64[0] = dVar13;
          (pTVar21->Translation).ZW.m128d_f64[1] = dVar14;
          (pTVar21->Scale3D).XY.m128d_f64[0] = dVar15;
          (pTVar21->Scale3D).XY.m128d_f64[1] = dVar16;
          (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar17;
          (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar18;
        }
        if (local_498.DensityRange.NumElements != 0) {
          pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_248.DensityRange,uVar29);
          fVar2 = *pfVar22;
          pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_498.DensityRange,iVar31);
          *pfVar22 = fVar2;
        }
        if (local_498.SteepnessRange.NumElements != 0) {
          pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_248.SteepnessRange,uVar29);
          fVar2 = *pfVar22;
          pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_498.SteepnessRange,iVar31);
          *pfVar22 = fVar2;
        }
        if (local_498.BoundsMinRange.NumElements != 0) {
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_248.BoundsMinRange,uVar29);
          dVar8 = (pTVar23->field0_0x0)._s_0.X;
          dVar9 = (pTVar23->field0_0x0)._s_0.Y;
          dVar7 = (pTVar23->field0_0x0)._s_0.Z;
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_498.BoundsMinRange,iVar31);
          (pTVar23->field0_0x0)._s_0.X = dVar8;
          (pTVar23->field0_0x0)._s_0.Y = dVar9;
          (pTVar23->field0_0x0)._s_0.Z = dVar7;
        }
        if (local_498.BoundsMaxRange.NumElements != 0) {
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_248.BoundsMaxRange,uVar29);
          dVar8 = (pTVar23->field0_0x0)._s_0.X;
          dVar9 = (pTVar23->field0_0x0)._s_0.Y;
          dVar7 = (pTVar23->field0_0x0)._s_0.Z;
          pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_498.BoundsMaxRange,iVar31);
          (pTVar23->field0_0x0)._s_0.X = dVar8;
          (pTVar23->field0_0x0)._s_0.Y = dVar9;
          (pTVar23->field0_0x0)._s_0.Z = dVar7;
        }
        if (local_498.ColorRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_248.ColorRange,uVar29);
          dVar7 = (pTVar24->field0_0x0)._s_0.X;
          dVar8 = (pTVar24->field0_0x0)._s_0.Y;
          dVar9 = (pTVar24->field0_0x0)._s_0.Z;
          dVar10 = (pTVar24->field0_0x0)._s_0.W;
          pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_498.ColorRange,iVar31);
          (pTVar24->field0_0x0)._s_0.X = dVar7;
          (pTVar24->field0_0x0)._s_0.Y = dVar8;
          (pTVar24->field0_0x0)._s_0.Z = dVar9;
          (pTVar24->field0_0x0)._s_0.W = dVar10;
        }
        if (local_498.SeedRange.NumElements != 0) {
          piVar25 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_248.SeedRange,uVar29);
          iVar3 = *piVar25;
          piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_498.SeedRange,iVar31);
          *piVar25 = iVar3;
        }
        if (local_498.MetadataEntryRange.NumElements != 0) {
          plVar26 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_248.MetadataEntryRange,uVar29);
          lVar5 = *plVar26;
          plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_498.MetadataEntryRange,iVar31);
          *plVar26 = lVar5;
        }
        iVar31 = 1;
      }
      if (iVar31 < *piVar1) {
        uVar32 = local_588 + iVar31 + iVar20;
        do {
          if (local_498.TransformRange.NumElements != 0) {
            pTVar21 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                      ::GetElement(&local_248.TransformRange,uVar29);
            dVar7 = (pTVar21->Rotation).XY.m128d_f64[0];
            dVar8 = (pTVar21->Rotation).XY.m128d_f64[1];
            dVar9 = (pTVar21->Rotation).ZW.m128d_f64[0];
            dVar10 = (pTVar21->Rotation).ZW.m128d_f64[1];
            dVar11 = (pTVar21->Translation).XY.m128d_f64[0];
            dVar12 = (pTVar21->Translation).XY.m128d_f64[1];
            dVar13 = (pTVar21->Translation).ZW.m128d_f64[0];
            dVar14 = (pTVar21->Translation).ZW.m128d_f64[1];
            dVar15 = (pTVar21->Scale3D).XY.m128d_f64[0];
            dVar16 = (pTVar21->Scale3D).XY.m128d_f64[1];
            dVar17 = (pTVar21->Scale3D).ZW.m128d_f64[0];
            dVar18 = (pTVar21->Scale3D).ZW.m128d_f64[1];
            pTVar21 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                      ::operator[](&local_498.TransformRange,uVar32);
            (pTVar21->Rotation).XY.m128d_f64[0] = dVar7;
            (pTVar21->Rotation).XY.m128d_f64[1] = dVar8;
            (pTVar21->Rotation).ZW.m128d_f64[0] = dVar9;
            (pTVar21->Rotation).ZW.m128d_f64[1] = dVar10;
            (pTVar21->Translation).XY.m128d_f64[0] = dVar11;
            (pTVar21->Translation).XY.m128d_f64[1] = dVar12;
            (pTVar21->Translation).ZW.m128d_f64[0] = dVar13;
            (pTVar21->Translation).ZW.m128d_f64[1] = dVar14;
            (pTVar21->Scale3D).XY.m128d_f64[0] = dVar15;
            (pTVar21->Scale3D).XY.m128d_f64[1] = dVar16;
            (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar17;
            (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar18;
          }
          if (local_498.DensityRange.NumElements != 0) {
            pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                (&local_248.DensityRange,uVar29);
            fVar2 = *pfVar22;
            pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_498.DensityRange,uVar32);
            *pfVar22 = fVar2;
          }
          if (local_498.SteepnessRange.NumElements != 0) {
            pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                                (&local_248.SteepnessRange,uVar29);
            fVar2 = *pfVar22;
            pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_498.SteepnessRange,uVar32);
            *pfVar22 = fVar2;
          }
          if (local_498.BoundsMinRange.NumElements != 0) {
            pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                      ::GetElement(&local_248.BoundsMinRange,uVar29);
            dVar8 = (pTVar23->field0_0x0)._s_0.X;
            dVar9 = (pTVar23->field0_0x0)._s_0.Y;
            dVar7 = (pTVar23->field0_0x0)._s_0.Z;
            pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_498.BoundsMinRange,uVar32);
            (pTVar23->field0_0x0)._s_0.X = dVar8;
            (pTVar23->field0_0x0)._s_0.Y = dVar9;
            (pTVar23->field0_0x0)._s_0.Z = dVar7;
          }
          if (local_498.BoundsMaxRange.NumElements != 0) {
            pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                      ::GetElement(&local_248.BoundsMaxRange,uVar29);
            dVar8 = (pTVar23->field0_0x0)._s_0.X;
            dVar9 = (pTVar23->field0_0x0)._s_0.Y;
            dVar7 = (pTVar23->field0_0x0)._s_0.Z;
            pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_498.BoundsMaxRange,uVar32);
            (pTVar23->field0_0x0)._s_0.X = dVar8;
            (pTVar23->field0_0x0)._s_0.Y = dVar9;
            (pTVar23->field0_0x0)._s_0.Z = dVar7;
          }
          if (local_498.ColorRange.NumElements != 0) {
            pTVar24 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                      ::GetElement(&local_248.ColorRange,uVar29);
            dVar7 = (pTVar24->field0_0x0)._s_0.X;
            dVar8 = (pTVar24->field0_0x0)._s_0.Y;
            dVar9 = (pTVar24->field0_0x0)._s_0.Z;
            dVar10 = (pTVar24->field0_0x0)._s_0.W;
            pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                      ::operator[](&local_498.ColorRange,uVar32);
            (pTVar24->field0_0x0)._s_0.X = dVar7;
            (pTVar24->field0_0x0)._s_0.Y = dVar8;
            (pTVar24->field0_0x0)._s_0.Z = dVar9;
            (pTVar24->field0_0x0)._s_0.W = dVar10;
          }
          if (local_498.SeedRange.NumElements != 0) {
            piVar25 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                                (&local_248.SeedRange,uVar29);
            iVar20 = *piVar25;
            piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                (&local_498.SeedRange,uVar32);
            *piVar25 = iVar20;
          }
          if (local_498.MetadataEntryRange.NumElements != 0) {
            plVar26 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                                (&local_248.MetadataEntryRange,uVar29);
            lVar5 = *plVar26;
            plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                (&local_498.MetadataEntryRange,uVar32);
            *plVar26 = lVar5;
          }
          local_4f8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_4f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_4f8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_4f8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_4f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_4f8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_4f8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_4f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_4f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_4f8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_4f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_4f8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_4f8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_4f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_4f8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_4f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_4f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_4f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_4f8,&local_308,&local_558);
          dVar7 = local_4f8.Rotation.XY.m128d_f64[0];
          dVar8 = local_4f8.Rotation.XY.m128d_f64[1];
          dVar9 = local_4f8.Rotation.ZW.m128d_f64[0];
          dVar10 = local_4f8.Rotation.ZW.m128d_f64[1];
          dVar11 = local_4f8.Translation.XY.m128d_f64[0];
          dVar12 = local_4f8.Translation.XY.m128d_f64[1];
          dVar13 = local_4f8.Translation.ZW.m128d_f64[0];
          dVar14 = local_4f8.Translation.ZW.m128d_f64[1];
          dVar15 = local_4f8.Scale3D.XY.m128d_f64[0];
          dVar16 = local_4f8.Scale3D.XY.m128d_f64[1];
          dVar17 = local_4f8.Scale3D.ZW.m128d_f64[0];
          dVar18 = local_4f8.Scale3D.ZW.m128d_f64[1];
          local_558.Rotation.XY.m128d_f64[0] = local_4f8.Rotation.XY.m128d_f64[0];
          local_558.Rotation.XY.m128d_f64[1] = local_4f8.Rotation.XY.m128d_f64[1];
          local_558.Rotation.ZW.m128d_f64[0] = local_4f8.Rotation.ZW.m128d_f64[0];
          local_558.Rotation.ZW.m128d_f64[1] = local_4f8.Rotation.ZW.m128d_f64[1];
          uVar28 = 0;
          if ((int)uVar32 < local_498.TransformRange.NumElements) {
            uVar28 = ~uVar32 >> 0x1f;
          }
          local_558.Translation.XY.m128d_f64[0] = local_4f8.Translation.XY.m128d_f64[0];
          local_558.Translation.XY.m128d_f64[1] = local_4f8.Translation.XY.m128d_f64[1];
          local_558.Translation.ZW.m128d_f64[0] = local_4f8.Translation.ZW.m128d_f64[0];
          local_558.Translation.ZW.m128d_f64[1] = local_4f8.Translation.ZW.m128d_f64[1];
          local_558.Scale3D.XY.m128d_f64[0] = local_4f8.Scale3D.XY.m128d_f64[0];
          local_558.Scale3D.XY.m128d_f64[1] = local_4f8.Scale3D.XY.m128d_f64[1];
          local_558.Scale3D.ZW.m128d_f64[0] = local_4f8.Scale3D.ZW.m128d_f64[0];
          local_558.Scale3D.ZW.m128d_f64[1] = local_4f8.Scale3D.ZW.m128d_f64[1];
          if (uVar28 == 0) {
            local_598 = (ulonglong)(int)uVar32;
            local_590 = (longlong)local_498.TransformRange.NumElements;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              iVar20 = (*pcVar6)();
              return iVar20;
            }
          }
          if (uVar32 == (int)uVar32 % local_498.TransformRange.ElementView.NumElements) {
            pTVar21 = (TTransform<double> *)
                      ((longlong)
                       ((local_498.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)local_498.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)((int)uVar32 % local_498.TransformRange.ElementView.NumElements));
          }
          else {
            pTVar21 = &local_498.TransformRange.StubValue;
          }
          (pTVar21->Rotation).XY.m128d_f64[0] = dVar7;
          (pTVar21->Rotation).XY.m128d_f64[1] = dVar8;
          (pTVar21->Rotation).ZW.m128d_f64[0] = dVar9;
          (pTVar21->Rotation).ZW.m128d_f64[1] = dVar10;
          (pTVar21->Translation).XY.m128d_f64[0] = dVar11;
          (pTVar21->Translation).XY.m128d_f64[1] = dVar12;
          (pTVar21->Translation).ZW.m128d_f64[0] = dVar13;
          (pTVar21->Translation).ZW.m128d_f64[1] = dVar14;
          (pTVar21->Scale3D).XY.m128d_f64[0] = dVar15;
          (pTVar21->Scale3D).XY.m128d_f64[1] = dVar16;
          (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar17;
          (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar18;
          local_570._s_0.X = local_558.Translation.XY.m128d_f64[0];
          local_570._s_0.Y = local_558.Translation.XY.m128d_f64[1];
          local_570._s_0.Z = local_558.Translation.ZW.m128d_f64[0];
          iVar20 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_570._s_0);
          uVar28 = 0;
          if ((int)uVar32 < local_498.SeedRange.NumElements) {
            uVar28 = ~uVar32 >> 0x1f;
          }
          if (uVar28 == 0) {
            local_598 = (ulonglong)(int)uVar32;
            local_590 = (longlong)local_498.SeedRange.NumElements;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              iVar20 = (*pcVar6)();
              return iVar20;
            }
          }
          if (uVar32 == (int)uVar32 % local_498.SeedRange.ElementView.NumElements) {
            piVar25 = (int *)((longlong)local_498.SeedRange.ElementView.BytesBetweenElements *
                              (longlong)((int)uVar32 % local_498.SeedRange.ElementView.NumElements)
                             + (longlong)local_498.SeedRange.ElementView.FirstElementPtr);
          }
          else {
            piVar25 = &local_498.SeedRange.StubValue;
          }
          iVar31 = iVar31 + 1;
          *piVar25 = iVar20;
          uVar32 = uVar32 + 1;
          iVar20 = local_584;
        } while (iVar31 < *piVar1);
      }
      local_584 = iVar20 + iVar31;
      uVar30 = (ulonglong)(uVar29 + 1);
      uVar35 = uVar35 + 1;
      this = local_578;
      param_3 = local_57c;
    } while ((int)(uVar29 + 1) < local_580);
  }
  if ((local_584 != param_3 * *piVar1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumWritten == Count * DuplicatesPerPoint",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDuplicatePoint.cpp"
                          ,0x77,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    iVar20 = (*pcVar6)();
    return iVar20;
  }
  return param_3;
}

// operator() @ 149b62d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGDuplicatePointElement::ExecuteInternal'::__l68::<lambda_3>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  long64 lVar4;
  double *pdVar5;
  ulonglong uVar6;
  code *pcVar7;
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
  bool bVar18;
  int iVar19;
  uint uVar20;
  TTransform<double> *pTVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  TVector4<double> *pTVar24;
  int *piVar25;
  long64 *plVar26;
  TQuat<double> *pTVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  TVector<double>_u_0 *pTVar31;
  int iVar32;
  double dVar33;
  undefined1 auStack_788 [32];
  longlong local_768;
  longlong local_760;
  int local_758;
  int local_754;
  int local_750;
  TRotator<double> local_748;
  undefined1 local_730 [16];
  double local_720;
  TVector<double>_u_0 local_718;
  TQuat<double> local_6f8;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double local_6c0;
  double dStack_6b8;
  double local_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double local_690;
  double dStack_688;
  double local_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  TQuat<double> local_658;
  FConstPCGPointValueRanges local_638;
  TTransform<double> local_4a8;
  FPCGPointValueRanges local_448;
  TTransform<double> local_2b8;
  FConstPCGPointValueRanges local_258;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_788;
  local_750 = param_3;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_258,*(UPCGBasePointData **)((longlong)this + 0x68));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_448,*(UPCGBasePointData **)((longlong)this + 0x70),false);
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_638,*(UPCGBasePointData **)((longlong)this + 0x70));
  local_754 = (**(code **)(**(longlong **)((longlong)this + 0x68) + 0x488))();
  local_758 = param_1 + param_3;
  if (param_1 < local_758) {
    iVar32 = param_1 - param_2;
    do {
      iVar19 = param_2 + iVar32;
      uVar6 = (longlong)iVar19 % (longlong)local_754;
      iVar19 = *(int *)((longlong)this + 0x78) + iVar19 / local_754;
      uVar28 = (uint)uVar6;
      if (local_448.TransformRange.NumElements != 0) {
        pTVar21 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_258.TransformRange,uVar28);
        dVar2 = (pTVar21->Rotation).XY.m128d_f64[0];
        dVar8 = (pTVar21->Rotation).XY.m128d_f64[1];
        dVar9 = (pTVar21->Rotation).ZW.m128d_f64[0];
        dVar10 = (pTVar21->Rotation).ZW.m128d_f64[1];
        dVar11 = (pTVar21->Translation).XY.m128d_f64[0];
        dVar12 = (pTVar21->Translation).XY.m128d_f64[1];
        dVar33 = (pTVar21->Translation).ZW.m128d_f64[0];
        dVar13 = (pTVar21->Translation).ZW.m128d_f64[1];
        dVar14 = (pTVar21->Scale3D).XY.m128d_f64[0];
        dVar15 = (pTVar21->Scale3D).XY.m128d_f64[1];
        dVar16 = (pTVar21->Scale3D).ZW.m128d_f64[0];
        dVar17 = (pTVar21->Scale3D).ZW.m128d_f64[1];
        pTVar21 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_448.TransformRange,param_2);
        (pTVar21->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar21->Rotation).XY.m128d_f64[1] = dVar8;
        (pTVar21->Rotation).ZW.m128d_f64[0] = dVar9;
        (pTVar21->Rotation).ZW.m128d_f64[1] = dVar10;
        (pTVar21->Translation).XY.m128d_f64[0] = dVar11;
        (pTVar21->Translation).XY.m128d_f64[1] = dVar12;
        (pTVar21->Translation).ZW.m128d_f64[0] = dVar33;
        (pTVar21->Translation).ZW.m128d_f64[1] = dVar13;
        (pTVar21->Scale3D).XY.m128d_f64[0] = dVar14;
        (pTVar21->Scale3D).XY.m128d_f64[1] = dVar15;
        (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar16;
        (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar17;
      }
      if (local_448.DensityRange.NumElements != 0) {
        pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_258.DensityRange,uVar28);
        fVar1 = *pfVar22;
        pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_448.DensityRange,param_2);
        *pfVar22 = fVar1;
      }
      if (local_448.SteepnessRange.NumElements != 0) {
        pfVar22 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_258.SteepnessRange,uVar28);
        fVar1 = *pfVar22;
        pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_448.SteepnessRange,param_2);
        *pfVar22 = fVar1;
      }
      if (local_448.BoundsMinRange.NumElements != 0) {
        pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_258.BoundsMinRange,uVar28);
        dVar8 = (pTVar23->field0_0x0)._s_0.X;
        dVar9 = (pTVar23->field0_0x0)._s_0.Y;
        dVar2 = (pTVar23->field0_0x0)._s_0.Z;
        pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_448.BoundsMinRange,param_2);
        (pTVar23->field0_0x0)._s_0.X = dVar8;
        (pTVar23->field0_0x0)._s_0.Y = dVar9;
        (pTVar23->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_448.BoundsMaxRange.NumElements != 0) {
        pTVar23 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_258.BoundsMaxRange,uVar28);
        dVar8 = (pTVar23->field0_0x0)._s_0.X;
        dVar9 = (pTVar23->field0_0x0)._s_0.Y;
        dVar2 = (pTVar23->field0_0x0)._s_0.Z;
        pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_448.BoundsMaxRange,param_2);
        (pTVar23->field0_0x0)._s_0.X = dVar8;
        (pTVar23->field0_0x0)._s_0.Y = dVar9;
        (pTVar23->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_448.ColorRange.NumElements != 0) {
        pTVar24 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_258.ColorRange,uVar28);
        dVar2 = (pTVar24->field0_0x0)._s_0.X;
        dVar8 = (pTVar24->field0_0x0)._s_0.Y;
        dVar9 = (pTVar24->field0_0x0)._s_0.Z;
        dVar10 = (pTVar24->field0_0x0)._s_0.W;
        pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_448.ColorRange,param_2);
        (pTVar24->field0_0x0)._s_0.X = dVar2;
        (pTVar24->field0_0x0)._s_0.Y = dVar8;
        (pTVar24->field0_0x0)._s_0.Z = dVar9;
        (pTVar24->field0_0x0)._s_0.W = dVar10;
      }
      if (local_448.SeedRange.NumElements != 0) {
        piVar25 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_258.SeedRange,uVar28);
        iVar3 = *piVar25;
        piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_448.SeedRange,param_2);
        *piVar25 = iVar3;
      }
      if (local_448.MetadataEntryRange.NumElements != 0) {
        plVar26 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_258.MetadataEntryRange,uVar28);
        lVar4 = *plVar26;
        plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_448.MetadataEntryRange,param_2);
        *plVar26 = lVar4;
      }
      if (iVar19 != 0) {
        uVar29 = (uint)~param_2 >> 0x1f;
        uVar20 = 0;
        if (param_2 < local_638.BoundsMaxRange.NumElements) {
          uVar20 = uVar29;
        }
        if (uVar20 == 0) {
          local_768 = (longlong)param_2;
          local_760 = (longlong)local_638.BoundsMaxRange.NumElements;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar18) {
            pcVar7 = (code *)swi(3);
            iVar32 = (*pcVar7)();
            return iVar32;
          }
        }
        pTVar31 = (TVector<double>_u_0 *)
                  ((longlong)&(local_638.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)(param_2 % local_638.BoundsMaxRange.ElementView.NumElements) *
                  (longlong)local_638.BoundsMaxRange.ElementView.BytesBetweenElements);
        uVar20 = 0;
        if (param_2 < local_638.BoundsMinRange.NumElements) {
          uVar20 = uVar29;
        }
        if (uVar20 == 0) {
          local_768 = (longlong)param_2;
          local_760 = (longlong)local_638.BoundsMinRange.NumElements;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar18) {
            pcVar7 = (code *)swi(3);
            iVar32 = (*pcVar7)();
            return iVar32;
          }
        }
        pdVar5 = *(double **)((longlong)this + 0x60);
        local_6d8 = *(double *)((longlong)this + 0x20);
        dStack_6d0 = *(double *)((longlong)this + 0x28);
        local_6c8 = *(double *)((longlong)this + 0x30);
        lVar30 = (longlong)(param_2 % local_638.BoundsMinRange.ElementView.NumElements) *
                 (longlong)local_638.BoundsMinRange.ElementView.BytesBetweenElements;
        dVar9 = ((pTVar31->_s_0).X -
                (((TVector<double>_u_0 *)
                 ((longlong)&(local_638.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                 lVar30))->_s_0).X) * *pdVar5 + local_6d8;
        dVar2 = (*(double *)((longlong)pTVar31 + 8) -
                *(double *)
                 ((longlong)&(local_638.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                 lVar30 + 8)) * pdVar5[1] + dStack_6d0;
        local_6f8.Z = *(double *)((longlong)this + 0x10);
        local_6f8.W = *(double *)((longlong)this + 0x18);
        dVar8 = (*(double *)((longlong)pTVar31 + 0x10) -
                *(double *)
                 ((longlong)&(local_638.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                 lVar30 + 0x10)) * pdVar5[2] + local_6c8;
        local_6f8.X = *(double *)this;
        local_6f8.Y = *(double *)((longlong)this + 8);
        UE::Math::TQuat<double>::Rotator(&local_6f8,&local_748);
        dVar10 = *(double *)((longlong)this + 0x50);
        dVar33 = (double)iVar19;
        local_730._8_4_ = SUB84(local_748.Yaw * dVar33,0);
        local_730._0_8_ = local_748.Pitch * dVar33;
        local_730._12_4_ = (int)((ulonglong)(local_748.Yaw * dVar33) >> 0x20);
        local_720 = local_748.Roll * dVar33;
        dVar11 = *(double *)((longlong)this + 0x40);
        dVar12 = *(double *)((longlong)this + 0x48);
        local_6c0 = dVar11;
        dStack_6b8 = dVar12;
        local_6b0 = dVar10;
        local_6a8 = dVar11;
        dStack_6a0 = dVar12;
        local_698 = dVar10;
        local_690 = dVar11;
        dStack_688 = dVar12;
        pTVar27 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_730,&local_658);
        local_678 = pTVar27->X;
        dStack_670 = pTVar27->Y;
        local_668 = pTVar27->Z;
        dStack_660 = pTVar27->W;
        dVar2 = dVar33 * dVar2;
        local_2b8.Translation.ZW.m128d_f64[0] = dVar33 * dVar8;
        local_2b8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
        local_2b8.Translation.XY.m128d_f64[0] = dVar33 * dVar9;
        local_2b8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
        local_2b8.Rotation.XY.m128d_f64[0] = local_678;
        local_2b8.Rotation.XY.m128d_f64[1] = dStack_670;
        local_2b8.Rotation.ZW.m128d_f64[0] = local_668;
        local_2b8.Rotation.ZW.m128d_f64[1] = dStack_660;
        dVar2 = pow(dVar11,dVar33);
        dVar8 = pow(dVar12,dVar33);
        local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
        local_2b8.Scale3D.XY.m128d_f64[0] = dVar2;
        local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_680 = dVar10;
        local_2b8.Scale3D.ZW.m128d_f64[0] = pow(dVar10,dVar33);
        local_2b8.Scale3D.ZW.m128d_f64[1] = 0.0;
        uVar20 = 0;
        if ((int)uVar28 < local_258.TransformRange.NumElements) {
          uVar20 = ~uVar28 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (local_768 = (longlong)(int)uVar28,
           local_760 = (longlong)local_258.TransformRange.NumElements,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar18)) {
          pcVar7 = (code *)swi(3);
          iVar32 = (*pcVar7)();
          return iVar32;
        }
        local_4a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_4a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_4a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_4a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_4a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_4a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_4a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_4a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_4a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_4a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_4a8,&local_2b8,
                   (TTransform<double> *)
                   ((longlong)
                    ((local_258.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64
                   + (longlong)
                     (int)((longlong)
                           ((ulonglong)(uint)((int)uVar28 >> 0x1f) << 0x20 | uVar6 & 0xffffffff) %
                          (longlong)local_258.TransformRange.ElementView.NumElements) *
                     (longlong)local_258.TransformRange.ElementView.BytesBetweenElements));
        dVar2 = local_4a8.Rotation.XY.m128d_f64[0];
        dVar8 = local_4a8.Rotation.XY.m128d_f64[1];
        dVar9 = local_4a8.Rotation.ZW.m128d_f64[0];
        dVar10 = local_4a8.Rotation.ZW.m128d_f64[1];
        dVar11 = local_4a8.Translation.XY.m128d_f64[0];
        dVar12 = local_4a8.Translation.XY.m128d_f64[1];
        uVar28 = 0;
        if (param_2 < local_448.TransformRange.NumElements) {
          uVar28 = uVar29;
        }
        dVar33 = local_4a8.Translation.ZW.m128d_f64[0];
        dVar13 = local_4a8.Translation.ZW.m128d_f64[1];
        dVar14 = local_4a8.Scale3D.XY.m128d_f64[0];
        dVar15 = local_4a8.Scale3D.XY.m128d_f64[1];
        dVar16 = local_4a8.Scale3D.ZW.m128d_f64[0];
        dVar17 = local_4a8.Scale3D.ZW.m128d_f64[1];
        if (uVar28 == 0) {
          local_768 = (longlong)param_2;
          local_760 = (longlong)local_448.TransformRange.NumElements;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar18) {
            pcVar7 = (code *)swi(3);
            iVar32 = (*pcVar7)();
            return iVar32;
          }
        }
        if (param_2 == param_2 % local_448.TransformRange.ElementView.NumElements) {
          pTVar21 = (TTransform<double> *)
                    ((longlong)
                     ((local_448.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64
                    + (longlong)local_448.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_448.TransformRange.ElementView.NumElements));
        }
        else {
          pTVar21 = &local_448.TransformRange.StubValue;
        }
        (pTVar21->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar21->Rotation).XY.m128d_f64[1] = dVar8;
        (pTVar21->Rotation).ZW.m128d_f64[0] = dVar9;
        (pTVar21->Rotation).ZW.m128d_f64[1] = dVar10;
        (pTVar21->Translation).XY.m128d_f64[0] = dVar11;
        (pTVar21->Translation).XY.m128d_f64[1] = dVar12;
        (pTVar21->Translation).ZW.m128d_f64[0] = dVar33;
        (pTVar21->Translation).ZW.m128d_f64[1] = dVar13;
        (pTVar21->Scale3D).XY.m128d_f64[0] = dVar14;
        (pTVar21->Scale3D).XY.m128d_f64[1] = dVar15;
        (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar16;
        (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar17;
        uVar28 = 0;
        if (param_2 < local_448.TransformRange.NumElements) {
          uVar28 = uVar29;
        }
        if (uVar28 == 0) {
          local_768 = (longlong)param_2;
          local_760 = (longlong)local_448.TransformRange.NumElements;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar18) {
            pcVar7 = (code *)swi(3);
            iVar32 = (*pcVar7)();
            return iVar32;
          }
        }
        if (param_2 == param_2 % local_448.TransformRange.ElementView.NumElements) {
          pTVar21 = (TTransform<double> *)
                    ((longlong)
                     ((local_448.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64
                    + (longlong)local_448.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_448.TransformRange.ElementView.NumElements));
        }
        else {
          pTVar21 = &local_448.TransformRange.StubValue;
        }
        local_718._s_0.X = (pTVar21->Translation).XY.m128d_f64[0];
        local_718._s_0.Y = (pTVar21->Translation).XY.m128d_f64[1];
        local_718._s_0.Z = (pTVar21->Translation).ZW.m128d_f64[0];
        iVar19 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_718._s_0);
        uVar28 = 0;
        if (param_2 < local_448.SeedRange.NumElements) {
          uVar28 = uVar29;
        }
        if (uVar28 == 0) {
          local_768 = (longlong)param_2;
          local_760 = (longlong)local_448.SeedRange.NumElements;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar18) {
            pcVar7 = (code *)swi(3);
            iVar32 = (*pcVar7)();
            return iVar32;
          }
        }
        if (param_2 == param_2 % local_448.SeedRange.ElementView.NumElements) {
          piVar25 = (int *)((longlong)local_448.SeedRange.ElementView.BytesBetweenElements *
                            (longlong)(param_2 % local_448.SeedRange.ElementView.NumElements) +
                           (longlong)local_448.SeedRange.ElementView.FirstElementPtr);
        }
        else {
          piVar25 = &local_448.SeedRange.StubValue;
        }
        *piVar25 = iVar19;
      }
      param_2 = param_2 + 1;
      param_3 = local_750;
    } while (param_2 + iVar32 < local_758);
  }
  else if ((param_3 != 0) &&
          (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumWritten == Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDuplicatePoint.cpp"
                               ,0xa0,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    iVar32 = (*pcVar7)();
    return iVar32;
  }
  return param_3;
}

// ExecuteInternal @ 149b7d850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FPCGDuplicatePointElement::ExecuteInternal(FPCGDuplicatePointElement *this,FPCGContext *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  UPCGNode *this_00;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  FPCGDataCollection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  FText *pFVar13;
  FPCGTaggedData *pFVar14;
  UPCGBasePointData *this_01;
  FPCGTaggedData *pFVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auStackY_2b8 [32];
  <lambda_1> local_268;
  longlong local_260;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_248;
  int local_238;
  int local_234;
  int local_230;
  TObjectPtr<UPCGSettings>_u_0 local_228;
  FObjectPtr_u_0 local_220;
  FPCGDataCollection *local_218;
  undefined1 local_210 [16];
  double local_200;
  <lambda_1> local_1f8;
  FString local_1e0;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FString local_1a0;
  FText local_190;
  FPCGInitializeFromDataParams local_178;
  <lambda_2> local_138;
  <lambda_3> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"FPCGDuplicatePointElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDuplicatePoint.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDuplicatePoint.cpp"
                         ,0x18,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar10 = UPCGDuplicatePointSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar7) {
      TVar12.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar12.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149b7d9ad;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDuplicatePointSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_268);
    if (pFVar14 != (FPCGTaggedData *)0x0) {
      local_228.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar14->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_228.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b7d9aa;
        UE::GC::MarkAsReachable((UObject *)local_228.DebugPtr);
      }
      if (local_228.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGDuplicatePointSettings::StaticClass();
        bVar7 = FObjectPtr::IsA(&local_228.ObjectPtr,pUVar10);
        TVar12 = local_228;
        if (bVar7) goto LAB_149b7d9ad;
      }
    }
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
    if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
      pUVar10 = UPCGDuplicatePointSettings::StaticClass();
      iVar17 = (int)pUVar10->_padding_;
      if ((iVar17 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar10->_padding_)) goto LAB_149b7d9ad;
    }
  }
LAB_149b7d9aa:
  TVar12.DebugPtr = (UPCGSettings *)0x0;
LAB_149b7d9ad:
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDuplicatePoint.cpp"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_248,&PCGPinConstants::DefaultInputLabel);
  local_218 = &param_1->OutputData;
  local_238 = (int)TVar12.DebugPtr[1]._padding_;
  if (local_238 < 1) {
    if (5 < (byte)LogPCG._0_1_) {
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_1c0,L"PCGDuplicatePointElement",L"InvalidNumberOfIterations",
                           L"The number of interations must be at least 1.");
      FText::ToString(pFVar13);
      FPCGContext::GetTaskName(param_1,&local_1d0);
      FPCGContext::GetExecutionSourceName(param_1,&local_1e0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    auVar19._0_8_ = (TVar12.DebugPtr + 200)->_padding_;
    auVar19._8_8_ = (TVar12.DebugPtr + 200)->_padding_;
    uVar16 = 0;
    local_200 = (double)TVar12.DebugPtr[1]._padding_;
    if ((double)__xmm_3ff00000000000003ff0000000000000 <= (double)TVar12.DebugPtr[1]._padding_) {
      local_200 = (double)__xmm_3ff00000000000003ff0000000000000;
    }
    auVar19 = minpd(auVar19,___xmm_3ff00000000000003ff0000000000000);
    if (local_200 <= (double)__xmm_bff0000000000000bff0000000000000) {
      local_200 = (double)__xmm_bff0000000000000bff0000000000000;
    }
    local_210 = maxpd(auVar19,___xmm_bff0000000000000bff0000000000000);
    if (0 < local_248.ArrayNum) {
      local_260 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar16 < local_248.ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_220 = (FObjectPtr_u_0)
                    ((FObjectPtr_u_0 *)(local_248.AllocatorInstance.Data + local_260))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b7dbfa:
          if ((UPCGSpatialData *)local_220.Handle == (UPCGSpatialData *)0x0) goto LAB_149b7df50;
          pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_220,pUVar10);
          FVar5 = local_220;
          if ((!bVar7) || ((UPCGSpatialData *)local_220.Handle == (UPCGSpatialData *)0x0))
          goto LAB_149b7df50;
          cVar2 = *(char *)((longlong)&TVar12.DebugPtr[1]._padding_ + 1);
          iVar17 = local_238 + (uint)(cVar2 != '\0');
          local_230 = iVar17;
          local_234 = (**(code **)(*(longlong *)local_220.Handle + 0x488))(local_220.Handle);
          local_234 = local_234 * iVar17;
          cVar3 = *(char *)((longlong)&TVar12.DebugPtr[1]._padding_ + 1);
          uVar9 = 0;
          if ((int)uVar16 < local_248.ArrayNum) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar6 = local_218;
          pFVar14 = (FPCGTaggedData *)(local_218->TaggedData).AllocatorInstance.Data;
          pFVar15 = (FPCGTaggedData *)
                    (local_248.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x78);
          if (((pFVar14 <= pFVar15) && (pFVar15 < pFVar14 + (local_218->TaggedData).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar17 = (pFVar6->TaggedData).ArrayNum;
          piVar1 = &(pFVar6->TaggedData).ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar6,piVar1);
          }
          (pFVar6->TaggedData).ArrayNum = iVar17 + 1;
          pFVar14 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar6->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar17 * 0x78),pFVar15);
          iVar17 = (**(code **)(*(longlong *)FVar5.Handle + 0x488))(FVar5.Handle);
          if (iVar17 == 0) {
            FPCGDataPtrWrapper::operator=(&pFVar14->Data,(UPCGData *)FVar5.Handle);
            break;
          }
          this_01 = FPCGContext::NewPointData_AnyThread(param_1);
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_178,(UPCGSpatialData *)FVar5.Handle);
          local_178.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_178);
          FPCGDataPtrWrapper::operator=(&pFVar14->Data,(UPCGData *)this_01);
          local_1f8.NumIterations = local_234;
          local_1f8.InputPointData = (UPCGBasePointData *)FVar5;
          local_1f8.OutPointData = this_01;
          if ((char)TVar12.DebugPtr[1]._padding_ == '\0') {
            local_b8.Direction = (TVector<double> *)local_210;
            local_b8.SourceDuplicateTransform.Translation.XY.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_b8.SourceDuplicateTransform.Translation.XY.m128d_f64[1] =
                 *(double *)&TVar12.DebugPtr[1].Seed;
            local_b8.SourceDuplicateTransform.Translation.ZW.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1].OriginalSettings;
            local_b8.SourceDuplicateTransform.Translation.ZW.m128d_f64[1] =
                 *(double *)&TVar12.DebugPtr[1].bUseSeed;
            local_b8.SourceDuplicateTransform.Scale3D.XY.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1].CachedElement.Object;
            local_b8.SourceDuplicateTransform.Scale3D.XY.m128d_f64[1] =
                 (double)TVar12.DebugPtr[1].CachedElement.SharedReferenceCount.ReferenceController;
            local_b8.SourceDuplicateTransform.Scale3D.ZW.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque1[0];
            local_b8.SourceDuplicateTransform.Scale3D.ZW.m128d_f64[1] =
                 *(double *)TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque2;
            local_b8.InputPointData = (UPCGBasePointData *)FVar5;
            local_b8.SourceDuplicateTransform.Rotation.XY.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_b8.SourceDuplicateTransform.Rotation.XY.m128d_f64[1] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_b8.SourceDuplicateTransform.Rotation.ZW.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_b8.SourceDuplicateTransform.Rotation.ZW.m128d_f64[1] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_b8.OutPointData = this_01;
            local_b8.FirstDuplicateIndex = (uint)(cVar3 == '\0');
            FPCGAsync::
            AsyncProcessingOneToOneRangeEx<_FPCGDuplicatePointElement::ExecuteInternal_::__l39::<lambda_1>_&,_FPCGDuplicatePointElement::ExecuteInternal_::__l68::<lambda_3>_&>
                      (&param_1->AsyncState,local_234,&local_1f8,&local_b8,false,0x40,true);
          }
          else {
            local_138.DuplicatesPerPoint = local_230;
            local_138.Direction = (TVector<double> *)local_210;
            local_138.SourceDuplicateTransform.Translation.XY.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_138.SourceDuplicateTransform.Translation.XY.m128d_f64[1] =
                 *(double *)&TVar12.DebugPtr[1].Seed;
            local_138.SourceDuplicateTransform.Translation.ZW.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1].OriginalSettings;
            local_138.SourceDuplicateTransform.Translation.ZW.m128d_f64[1] =
                 *(double *)&TVar12.DebugPtr[1].bUseSeed;
            local_138.SourceDuplicateTransform.Scale3D.XY.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1].CachedElement.Object;
            local_138.SourceDuplicateTransform.Scale3D.XY.m128d_f64[1] =
                 (double)TVar12.DebugPtr[1].CachedElement.SharedReferenceCount.ReferenceController;
            local_138.SourceDuplicateTransform.Scale3D.ZW.m128d_f64[0]._0_4_ =
                 *(undefined4 *)TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque1;
            local_138.SourceDuplicateTransform.Scale3D.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque1 + 4)
            ;
            local_138.SourceDuplicateTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque2[0];
            local_138.SourceDuplicateTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque2[1];
            local_138.InputPointData = (UPCGBasePointData *)FVar5;
            local_138.SourceDuplicateTransform.Rotation.XY.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_138.SourceDuplicateTransform.Rotation.XY.m128d_f64[1] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_138.SourceDuplicateTransform.Rotation.ZW.m128d_f64[0] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_138.SourceDuplicateTransform.Rotation.ZW.m128d_f64[1] =
                 (double)TVar12.DebugPtr[1]._padding_;
            local_138.bKeepSourcePoint = (bool)cVar2;
            local_138.OutPointData = this_01;
            iVar17 = (**(code **)(*(longlong *)FVar5.Handle + 0x488))(FVar5.Handle);
            FPCGAsync::
            AsyncProcessingOneToOneRangeEx<_FPCGDuplicatePointElement::ExecuteInternal_::__l39::<lambda_1>_&,_FPCGDuplicatePointElement::ExecuteInternal_::__l66::<lambda_2>_&>
                      (&param_1->AsyncState,iVar17,&local_1f8,&local_138,false,0x40,true);
          }
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_178.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_178.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_178.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_178.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
          }
          if (local_178.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
          }
        }
        else {
          if ((UPCGSpatialData *)local_220.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_220.Handle);
            goto LAB_149b7dbfa;
          }
LAB_149b7df50:
          if (2 < (byte)LogPCG._0_1_) {
            pFVar13 = FText::AsLocalizable_Advanced_LocText
                                (&local_190,L"PCGDuplicatePointElement",L"InvalidInputPointData",
                                 L"The input is not point data, skipped.");
            FText::ToString(pFVar13);
            FPCGContext::GetTaskName(param_1,&local_1a0);
            FPCGContext::GetExecutionSourceName(param_1,&local_1b0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            if (local_190.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
            }
          }
        }
        local_260 = local_260 + 0x78;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < local_248.ArrayNum);
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
  if ((FPCGTaggedData *)local_248.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88bb0

EPCGElementExecutionLoopMode __thiscall
FPCGDuplicatePointElement::ExecutionLoopMode(FPCGDuplicatePointElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98980

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
FPCGDuplicatePointElement::SupportsBasePointDataInputs
          (FPCGDuplicatePointElement *this,FPCGContext *param_1)

{
  return true;
}

