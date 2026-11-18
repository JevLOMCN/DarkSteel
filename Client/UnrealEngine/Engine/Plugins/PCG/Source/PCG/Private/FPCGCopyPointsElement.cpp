// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b5e0d0

void __thiscall `FPCGCopyPointsElement::ExecuteInternal'::__l22::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (**(code **)(**(longlong **)this + 0x490))
            (*(longlong **)this,*(undefined4 *)((longlong)this + 0x18),0);
  uVar3 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x640))
                    (*(longlong **)((longlong)this + 8),1);
  lVar2 = **(longlong **)((longlong)this + 0x10);
  uVar4 = (**(code **)(lVar2 + 0x640))
                    (*(longlong **)((longlong)this + 0x10),CONCAT71((int7)((ulonglong)lVar2 >> 8),1)
                    );
  uVar1 = *(uint *)((longlong)this + 0x20);
  lVar2 = **(longlong **)((longlong)this + 8);
  uVar5 = (**(code **)(lVar2 + 0x640))
                    (*(longlong **)((longlong)this + 8),CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
  uVar5 = uVar5 & ~uVar1;
  uVar1 = uVar5 | 0x80;
  if (*(char *)((longlong)this + 0x1c) == '\0') {
    uVar1 = uVar5;
  }
  if (*(char *)((longlong)this + 0x1e) == '\0') {
    uVar5 = uVar4 | uVar3;
  }
  else {
    uVar5 = uVar4;
    if (*(char *)((longlong)this + 0x1e) == '\x01') {
      uVar5 = uVar3;
    }
  }
  if (*(char *)((longlong)this + 0x1d) == '\0') {
    uVar4 = uVar4 | uVar3;
  }
  else if (*(char *)((longlong)this + 0x1d) == '\x01') {
    uVar4 = uVar3;
  }
  (**(code **)(**(longlong **)this + 0x498))
            (*(longlong **)this,uVar4 & 0x10 | uVar5 & 0x40 | uVar1 | 1);
                    /* WARNING: Could not recover jumptable at 0x000149b5e1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)this + 0x4b0))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  return;
}

// operator() @ 149b5fc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGCopyPointsElement::ExecuteInternal'::__l22::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  double *pdVar1;
  float fVar2;
  long64 lVar3;
  ulonglong uVar4;
  code *pcVar5;
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
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  float *pfVar26;
  TTransform<double> *pTVar27;
  TVector<double> *pTVar28;
  TVector4<double> *pTVar29;
  long64 *plVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  TVector4<double>_u_0 *pTVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auStack_868 [32];
  longlong local_848;
  longlong local_840;
  int local_838;
  int local_834;
  longlong local_830;
  ulonglong local_828;
  uint local_820;
  int local_81c;
  int local_818;
  longlong local_810;
  longlong local_808;
  long64 local_800;
  long64 lStack_7f8;
  long64 local_7f0;
  int iStack_7e8;
  undefined4 uStack_7e4;
  long64 local_7e0;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  double local_7d0;
  double dStack_7c8;
  double local_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double local_7a0;
  double dStack_798;
  double local_790;
  double local_788;
  double dStack_780;
  double local_778;
  double local_770;
  double dStack_768;
  double local_760;
  FConstPCGPointValueRanges local_758;
  FPCGPoint local_5c8;
  TTransform<double> local_4f8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  FConstPCGPointValueRanges local_3d8;
  FPCGPointValueRanges local_248;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_868;
  iVar23 = 0;
  uVar41 = (ulonglong)param_1;
  local_834 = 0;
  local_838 = param_2;
  local_818 = param_3;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_3d8,(UPCGBasePointData *)**(undefined8 **)this);
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_758,(UPCGBasePointData *)**(undefined8 **)((longlong)this + 8));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_248,(UPCGBasePointData *)**(undefined8 **)((longlong)this + 0x10),false);
  local_81c = param_1 + param_3;
  if (param_1 < local_81c) {
    local_830 = uVar41 << 4;
    local_828 = uVar41;
    do {
      uVar40 = (uint)uVar41;
      uVar41 = (ulonglong)(uint)((int)uVar40 >> 0x1f) << 0x20 | uVar41 & 0xffffffff;
      uVar4 = (longlong)uVar41 / (longlong)**(int **)((longlong)this + 0x18);
      uVar41 = (longlong)uVar41 % (longlong)**(int **)((longlong)this + 0x18);
      uVar22 = (uint)uVar4;
      lVar39 = (longlong)(int)uVar22;
      uVar32 = (uint)uVar41;
      lVar37 = (longlong)(int)uVar32;
      piVar25 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                          (&local_3d8.SeedRange,uVar22);
      iVar23 = *piVar25;
      pfVar26 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                          (&local_3d8.DensityRange,uVar22);
      fVar2 = *pfVar26;
      pTVar27 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                ::GetElement(&local_3d8.TransformRange,uVar22);
      FPCGPoint::FPCGPoint(&local_5c8,pTVar27,fVar2,iVar23);
      pTVar28 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(&local_3d8.BoundsMinRange,uVar22);
      local_5c8.BoundsMin.field0_0x0._s_0.X = (pTVar28->field0_0x0)._s_0.X;
      local_5c8.BoundsMin.field0_0x0._s_0.Y = (pTVar28->field0_0x0)._s_0.Y;
      local_5c8.BoundsMin.field0_0x0._s_0.Z = (pTVar28->field0_0x0)._s_0.Z;
      pTVar28 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(&local_3d8.BoundsMaxRange,uVar22);
      local_5c8.BoundsMax.field0_0x0._s_0.X = (pTVar28->field0_0x0)._s_0.X;
      local_5c8.BoundsMax.field0_0x0._s_0.Y = (pTVar28->field0_0x0)._s_0.Y;
      local_5c8.BoundsMax.field0_0x0._s_0.Z = (pTVar28->field0_0x0)._s_0.Z;
      pfVar26 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                          (&local_3d8.SteepnessRange,uVar22);
      local_5c8.Steepness = *pfVar26;
      pTVar29 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                ::GetElement(&local_3d8.ColorRange,uVar22);
      local_5c8.Color.field0_0x0._0_16_ = *(undefined1 (*) [16])&pTVar29->field0_0x0;
      local_5c8.Color.field0_0x0._16_16_ =
           *(undefined1 (*) [16])((longlong)&pTVar29->field0_0x0 + 0x10);
      plVar30 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                          (&local_3d8.MetadataEntryRange,uVar22);
      local_5c8.MetadataEntry = *plVar30;
      uVar34 = 0;
      if ((int)uVar22 < local_3d8.TransformRange.NumElements) {
        uVar34 = ~uVar22 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (local_848 = lVar39, local_840 = (longlong)local_3d8.TransformRange.NumElements,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        iVar23 = (*pcVar5)();
        return iVar23;
      }
      pTVar27 = local_3d8.TransformRange.ElementView.FirstElementPtr;
      uVar33 = (int)uVar22 >> 0x1f;
      lVar35 = (longlong)
               (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                    (longlong)local_3d8.TransformRange.ElementView.NumElements) *
               (longlong)local_3d8.TransformRange.ElementView.BytesBetweenElements;
      uVar34 = 0;
      if ((int)uVar32 < local_758.TransformRange.NumElements) {
        uVar34 = ~uVar32 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (local_848 = lVar37, local_840 = (longlong)local_758.TransformRange.NumElements,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        iVar23 = (*pcVar5)();
        return iVar23;
      }
      pdVar1 = (double *)((longlong)(pTVar27->Translation).XY.m128d_f64 + lVar35);
      local_7d0 = *pdVar1;
      dStack_7c8 = pdVar1[1];
      local_7c0 = *(double *)((longlong)(pTVar27->Translation).ZW.m128d_f64 + lVar35);
      uVar34 = (int)uVar32 >> 0x1f;
      local_4f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_4f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      dVar42 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      uVar43 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar44 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      dVar6 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      uVar45 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar46 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      lVar31 = (longlong)
               (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                    (longlong)local_758.TransformRange.ElementView.NumElements) *
               (longlong)local_758.TransformRange.ElementView.BytesBetweenElements;
      local_438.Scale3D.XY.m128d_f64[1]._0_4_ = uVar43;
      local_438.Scale3D.XY.m128d_f64[0] = dVar42;
      local_438.Scale3D.XY.m128d_f64[1]._4_4_ = uVar44;
      local_438.Translation.ZW.m128d_f64[1] = 0.0;
      local_438.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar45;
      local_438.Scale3D.ZW.m128d_f64[0] = dVar6;
      local_438.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar46;
      pdVar1 = (double *)
               ((longlong)
                ((local_758.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64 +
               lVar31);
      local_7b8 = *pdVar1;
      dStack_7b0 = pdVar1[1];
      local_7a8 = *(double *)
                   ((longlong)
                    ((local_758.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                    m128d_f64 + lVar31);
      local_498.Translation.ZW.m128d_f64[1] = 0.0;
      local_498.Scale3D.XY.m128d_f64[1]._0_4_ = uVar43;
      local_498.Scale3D.XY.m128d_f64[0] = dVar42;
      local_498.Scale3D.XY.m128d_f64[1]._4_4_ = uVar44;
      local_498.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar45;
      local_498.Scale3D.ZW.m128d_f64[0] = dVar6;
      local_498.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar46;
      local_438.Rotation.XY.m128d_f64[0] = local_4f8.Rotation.XY.m128d_f64[0];
      local_438.Rotation.XY.m128d_f64[1] = local_4f8.Rotation.XY.m128d_f64[1];
      local_438.Rotation.ZW.m128d_f64[0] = local_4f8.Rotation.ZW.m128d_f64[0];
      local_438.Rotation.ZW.m128d_f64[1] = local_4f8.Rotation.ZW.m128d_f64[1];
      if (**(char **)((longlong)this + 0x20) != '\x02') {
        pdVar1 = (double *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + lVar35);
        local_438.Rotation.XY.m128d_f64[0] = *pdVar1;
        local_438.Rotation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)((longlong)(pTVar27->Rotation).ZW.m128d_f64 + lVar35);
        local_438.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_438.Rotation.ZW.m128d_f64[1] = pdVar1[1];
      }
      if ((**(char **)((longlong)this + 0x20) != '\x01') ||
         (local_498.Rotation.XY.m128d_f64[0] = local_4f8.Rotation.XY.m128d_f64[0],
         local_498.Rotation.XY.m128d_f64[1] = local_4f8.Rotation.XY.m128d_f64[1],
         local_498.Rotation.ZW.m128d_f64[0] = local_4f8.Rotation.ZW.m128d_f64[0],
         local_498.Rotation.ZW.m128d_f64[1] = local_4f8.Rotation.ZW.m128d_f64[1],
         **(char **)((longlong)this + 0x28) != '\0')) {
        pdVar1 = (double *)
                 ((longlong)
                  ((local_758.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                 lVar31);
        local_498.Rotation.XY.m128d_f64[0] = *pdVar1;
        local_498.Rotation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)
                 ((longlong)
                  ((local_758.TransformRange.ElementView.FirstElementPtr)->Rotation).ZW.m128d_f64 +
                 lVar31);
        local_498.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_498.Rotation.ZW.m128d_f64[1] = pdVar1[1];
      }
      if (**(char **)((longlong)this + 0x30) != '\x02') {
        pdVar1 = (double *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + lVar35);
        local_7a0 = *pdVar1;
        dStack_798 = pdVar1[1];
        local_438.Scale3D.XY.m128d_f64 = *(double (*) [2])pdVar1;
        local_790 = *(double *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + lVar35);
        local_438.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_438.Scale3D.ZW.m128d_f64[0] = local_790;
      }
      if ((**(char **)((longlong)this + 0x30) != '\x01') ||
         (**(char **)((longlong)this + 0x38) != '\0')) {
        pdVar1 = (double *)
                 ((longlong)
                  ((local_758.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.m128d_f64 +
                 lVar31);
        local_788 = *pdVar1;
        dStack_780 = pdVar1[1];
        local_498.Scale3D.XY.m128d_f64 = *(double (*) [2])pdVar1;
        local_778 = *(double *)
                     ((longlong)
                      ((local_758.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.m128d_f64
                     + lVar31);
        local_498.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_498.Scale3D.ZW.m128d_f64[0] = local_778;
      }
      local_4f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_4f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_4f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_4f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_4f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar43;
      local_4f8.Scale3D.XY.m128d_f64[0] = dVar42;
      local_4f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar44;
      local_4f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar45;
      local_4f8.Scale3D.ZW.m128d_f64[0] = dVar6;
      local_4f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar46;
      local_498.Translation.XY.m128d_f64[0] = local_7b8;
      local_498.Translation.XY.m128d_f64[1] = dStack_7b0;
      local_498.Translation.ZW.m128d_f64[0] = local_7a8;
      local_438.Translation.XY.m128d_f64[0] = local_7d0;
      local_438.Translation.XY.m128d_f64[1] = dStack_7c8;
      local_438.Translation.ZW.m128d_f64[0] = local_7c0;
      UE::Math::TTransform<double>::Multiply(&local_4f8,&local_438,&local_498);
      local_5c8.Transform.Rotation.XY.m128d_f64[0] = local_4f8.Rotation.XY.m128d_f64[0];
      local_5c8.Transform.Rotation.XY.m128d_f64[1] = local_4f8.Rotation.XY.m128d_f64[1];
      local_5c8.Transform.Rotation.ZW.m128d_f64[0] = local_4f8.Rotation.ZW.m128d_f64[0];
      local_5c8.Transform.Rotation.ZW.m128d_f64[1] = local_4f8.Rotation.ZW.m128d_f64[1];
      local_5c8.Transform.Translation.XY.m128d_f64[0] = local_4f8.Translation.XY.m128d_f64[0];
      local_5c8.Transform.Translation.XY.m128d_f64[1] = local_4f8.Translation.XY.m128d_f64[1];
      local_5c8.Transform.Translation.ZW.m128d_f64[0] = local_4f8.Translation.ZW.m128d_f64[0];
      local_5c8.Transform.Translation.ZW.m128d_f64[1] = local_4f8.Translation.ZW.m128d_f64[1];
      local_5c8.Transform.Scale3D.XY.m128d_f64[0] = local_4f8.Scale3D.XY.m128d_f64[0];
      local_5c8.Transform.Scale3D.XY.m128d_f64[1] = local_4f8.Scale3D.XY.m128d_f64[1];
      local_5c8.Transform.Scale3D.ZW.m128d_f64[0] = local_4f8.Scale3D.ZW.m128d_f64[0];
      local_5c8.Transform.Scale3D.ZW.m128d_f64[1] = local_4f8.Scale3D.ZW.m128d_f64[1];
      if ((**(char **)((longlong)this + 0x20) == '\x01') &&
         (**(char **)((longlong)this + 0x28) != '\0')) {
        pdVar1 = (double *)((longlong)(pTVar27->Rotation).XY.m128d_f64 + lVar35);
        local_5c8.Transform.Rotation.XY.m128d_f64[0] = *pdVar1;
        local_5c8.Transform.Rotation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)((longlong)(pTVar27->Rotation).ZW.m128d_f64 + lVar35);
        local_5c8.Transform.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_5c8.Transform.Rotation.ZW.m128d_f64[1] = pdVar1[1];
      }
      if ((**(char **)((longlong)this + 0x30) == '\x01') &&
         (**(char **)((longlong)this + 0x38) != '\0')) {
        pdVar1 = (double *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + lVar35);
        local_770 = *pdVar1;
        dStack_768 = pdVar1[1];
        local_760 = *(double *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + lVar35);
        local_5c8.Transform.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_5c8.Transform.Scale3D.XY.m128d_f64[0] = local_770;
        local_5c8.Transform.Scale3D.XY.m128d_f64[1] = dStack_768;
        local_5c8.Transform.Scale3D.ZW.m128d_f64[0] = local_760;
      }
      if (**(char **)((longlong)this + 0x40) == '\0') {
        uVar24 = 0;
        if ((int)uVar22 < local_3d8.ColorRange.NumElements) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (local_848 = lVar39, local_840 = (longlong)local_3d8.ColorRange.NumElements,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar21)) {
          pcVar5 = (code *)swi(3);
          iVar23 = (*pcVar5)();
          return iVar23;
        }
        pTVar36 = (TVector4<double>_u_0 *)
                  ((longlong)&(local_3d8.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)
                  (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                       (longlong)local_3d8.ColorRange.ElementView.NumElements) *
                  (longlong)local_3d8.ColorRange.ElementView.BytesBetweenElements);
        uVar24 = 0;
        if ((int)uVar32 < local_758.ColorRange.NumElements) {
          uVar24 = ~uVar32 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (local_848 = lVar37, local_840 = (longlong)local_758.ColorRange.NumElements,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar21)) {
          pcVar5 = (code *)swi(3);
          iVar23 = (*pcVar5)();
          return iVar23;
        }
        lVar35 = (longlong)
                 (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                      (longlong)local_758.ColorRange.ElementView.NumElements) *
                 (longlong)local_758.ColorRange.ElementView.BytesBetweenElements;
        dVar42 = *(double *)((longlong)pTVar36 + 8) *
                 *(double *)
                  ((longlong)&(local_758.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                  lVar35 + 8);
        pdVar1 = (double *)
                 ((longlong)&(local_758.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                 lVar35 + 0x10);
        local_5c8.Color.field0_0x0._8_4_ = SUB84(dVar42,0);
        local_5c8.Color.field0_0x0._s_0.X =
             (pTVar36->_s_0).X *
             (((TVector4<double>_u_0 *)
              ((longlong)&(local_758.ColorRange.ElementView.FirstElementPtr)->field0_0x0 + lVar35))
             ->_s_0).X;
        local_5c8.Color.field0_0x0._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        dVar42 = *(double *)((longlong)pTVar36 + 0x10) * *pdVar1;
        dVar6 = *(double *)((longlong)pTVar36 + 0x18) * pdVar1[1];
      }
      else {
        if (**(char **)((longlong)this + 0x40) == '\x02') {
          uVar24 = 0;
          if ((int)uVar32 < local_758.ColorRange.NumElements) {
            uVar24 = ~uVar32 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (local_848 = lVar37, local_840 = (longlong)local_758.ColorRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar35 = (longlong)
                   (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                        (longlong)local_758.ColorRange.ElementView.NumElements) *
                   (longlong)local_758.ColorRange.ElementView.BytesBetweenElements;
          pTVar29 = local_758.ColorRange.ElementView.FirstElementPtr;
        }
        else {
          uVar24 = 0;
          if ((int)uVar22 < local_3d8.ColorRange.NumElements) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (local_848 = lVar39, local_840 = (longlong)local_3d8.ColorRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar35 = (longlong)
                   (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                        (longlong)local_3d8.ColorRange.ElementView.NumElements) *
                   (longlong)local_3d8.ColorRange.ElementView.BytesBetweenElements;
          pTVar29 = local_3d8.ColorRange.ElementView.FirstElementPtr;
        }
        local_5c8.Color.field0_0x0._0_16_ =
             *(undefined1 (*) [16])((longlong)&pTVar29->field0_0x0 + lVar35);
        pdVar1 = (double *)((longlong)&pTVar29->field0_0x0 + lVar35 + 0x10);
        dVar42 = *pdVar1;
        dVar6 = pdVar1[1];
      }
      local_5c8.Color.field0_0x0._24_4_ = SUB84(dVar6,0);
      local_5c8.Color.field0_0x0._s_0.Z = dVar42;
      local_5c8.Color.field0_0x0._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
      if (**(char **)((longlong)this + 0x48) == '\0') {
        uVar24 = 0;
        if ((int)uVar32 < local_758.SeedRange.NumElements) {
          uVar24 = ~uVar32 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (local_848 = lVar37, local_840 = (longlong)local_758.SeedRange.NumElements,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar21)) {
          pcVar5 = (code *)swi(3);
          iVar23 = (*pcVar5)();
          return iVar23;
        }
        iVar23 = *(int *)((longlong)
                          (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                               (longlong)local_758.SeedRange.ElementView.NumElements) *
                          (longlong)local_758.SeedRange.ElementView.BytesBetweenElements +
                         (longlong)local_758.SeedRange.ElementView.FirstElementPtr);
        uVar24 = 0;
        if ((int)uVar22 < local_3d8.SeedRange.NumElements) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (local_848 = lVar39, local_840 = (longlong)local_3d8.SeedRange.NumElements,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar21)) {
          pcVar5 = (code *)swi(3);
          iVar23 = (*pcVar5)();
          return iVar23;
        }
        local_5c8.Seed =
             PCGHelpers::ComputeSeed
                       (*(int *)((longlong)
                                 (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                                      (longlong)local_3d8.SeedRange.ElementView.NumElements) *
                                 (longlong)local_3d8.SeedRange.ElementView.BytesBetweenElements +
                                (longlong)local_3d8.SeedRange.ElementView.FirstElementPtr),iVar23);
      }
      else {
        if (**(char **)((longlong)this + 0x48) == '\x02') {
          uVar24 = 0;
          if ((int)uVar32 < local_758.SeedRange.NumElements) {
            uVar24 = ~uVar32 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (local_848 = lVar37, local_840 = (longlong)local_758.SeedRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar35 = (longlong)
                   (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                        (longlong)local_758.SeedRange.ElementView.NumElements) *
                   (longlong)local_758.SeedRange.ElementView.BytesBetweenElements;
          piVar25 = local_758.SeedRange.ElementView.FirstElementPtr;
        }
        else {
          uVar24 = 0;
          if ((int)uVar22 < local_3d8.SeedRange.NumElements) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (local_848 = lVar39, local_840 = (longlong)local_3d8.SeedRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar35 = (longlong)
                   (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                        (longlong)local_3d8.SeedRange.ElementView.NumElements) *
                   (longlong)local_3d8.SeedRange.ElementView.BytesBetweenElements;
          piVar25 = local_3d8.SeedRange.ElementView.FirstElementPtr;
        }
        local_5c8.Seed = *(int *)(lVar35 + (longlong)piVar25);
      }
      iVar23 = local_3d8.MetadataEntryRange.NumElements;
      if (**(char **)((longlong)this + 0x50) == '\0') {
        local_5c8.MetadataEntry = -1;
      }
      else {
        if (**(char **)((longlong)this + 0x58) == '\0') {
          uVar24 = 0;
          if ((int)uVar32 < local_758.MetadataEntryRange.NumElements) {
            uVar24 = ~uVar32 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (local_848 = lVar37, local_840 = (longlong)local_758.MetadataEntryRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar35 = (longlong)
                   (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                        (longlong)local_758.MetadataEntryRange.ElementView.NumElements) *
                   (longlong)local_758.MetadataEntryRange.ElementView.BytesBetweenElements;
          plVar30 = local_758.MetadataEntryRange.ElementView.FirstElementPtr;
          iVar23 = local_3d8.MetadataEntryRange.NumElements;
        }
        else {
          uVar24 = 0;
          if ((int)uVar22 < local_3d8.MetadataEntryRange.NumElements) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (local_848 = lVar39, local_840 = (longlong)local_3d8.MetadataEntryRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar35 = (longlong)
                   (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                        (longlong)local_3d8.MetadataEntryRange.ElementView.NumElements) *
                   (longlong)local_3d8.MetadataEntryRange.ElementView.BytesBetweenElements;
          plVar30 = local_3d8.MetadataEntryRange.ElementView.FirstElementPtr;
        }
        lVar3 = *(long64 *)(lVar35 + (longlong)plVar30);
        if (**(char **)((longlong)this + 0x58) == '\0') {
          uVar34 = 0;
          if ((int)uVar22 < iVar23) {
            uVar34 = ~uVar22 >> 0x1f;
          }
          if (uVar34 == 0) {
            local_840 = (longlong)iVar23;
            local_848 = lVar39;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar21) {
              pcVar5 = (code *)swi(3);
              iVar23 = (*pcVar5)();
              return iVar23;
            }
          }
          lVar37 = (longlong)
                   (int)((longlong)((ulonglong)uVar33 << 0x20 | uVar4 & 0xffffffff) %
                        (longlong)local_3d8.MetadataEntryRange.ElementView.NumElements) *
                   (longlong)local_3d8.MetadataEntryRange.ElementView.BytesBetweenElements;
          plVar30 = local_3d8.MetadataEntryRange.ElementView.FirstElementPtr;
        }
        else {
          uVar22 = 0;
          if ((int)uVar32 < local_758.MetadataEntryRange.NumElements) {
            uVar22 = ~uVar32 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (local_848 = lVar37, local_840 = (longlong)local_758.MetadataEntryRange.NumElements,
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar21)) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
          lVar37 = (longlong)
                   (int)((longlong)((ulonglong)uVar34 << 0x20 | uVar41 & 0xffffffff) %
                        (longlong)local_758.MetadataEntryRange.ElementView.NumElements) *
                   (longlong)local_758.MetadataEntryRange.ElementView.BytesBetweenElements;
          plVar30 = local_758.MetadataEntryRange.ElementView.FirstElementPtr;
        }
        lVar37 = *(longlong *)(lVar37 + (longlong)plVar30);
        local_810 = lVar37;
        local_800 = UPCGMetadata::AddEntryPlaceholder
                              ((UPCGMetadata *)**(undefined8 **)((longlong)this + 0x60));
        plVar38 = *(longlong **)((longlong)this + 0x68);
        iVar23 = (int)plVar38[1];
        uVar34 = 0;
        if ((int)uVar40 < iVar23) {
          uVar34 = ~uVar40 >> 0x1f;
        }
        lStack_7f8 = lVar3;
        local_5c8.MetadataEntry = local_800;
        if (uVar34 == 0) {
          local_848 = (longlong)(int)uVar40;
          local_840 = (longlong)iVar23;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar5 = (code *)swi(3);
            iVar23 = (*pcVar5)();
            return iVar23;
          }
        }
        uVar41 = local_828;
        plVar30 = (long64 *)(local_830 + *plVar38);
        *plVar30 = local_800;
        plVar30[1] = lStack_7f8;
        if (**(longlong **)((longlong)this + 0x70) != 0) {
          plVar38 = *(longlong **)((longlong)this + 0x78);
          if (lVar37 == -1) {
            uVar34 = 0;
            if (0 < (int)plVar38[1]) {
              lVar37 = 0;
              do {
                plVar38 = *(longlong **)((longlong)this + 0x80);
                local_7e0 = local_5c8.MetadataEntry;
                uStack_7d8 = 0xffffffff;
                iVar23 = (int)plVar38[1];
                uVar22 = 0;
                if ((int)uVar34 < iVar23) {
                  uVar22 = ~uVar34 >> 0x1f;
                }
                if (uVar22 == 0) {
                  local_848 = (longlong)(int)uVar34;
                  local_840 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar5 = (code *)swi(3);
                    iVar23 = (*pcVar5)();
                    return iVar23;
                  }
                }
                lVar39 = *plVar38;
                iVar23 = *(int *)(lVar37 + 8 + lVar39);
                uVar22 = 0;
                if ((int)uVar40 < iVar23) {
                  uVar22 = ~uVar40 >> 0x1f;
                }
                if (uVar22 == 0) {
                  local_848 = (longlong)(int)uVar40;
                  local_840 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar5 = (code *)swi(3);
                    iVar23 = (*pcVar5)();
                    return iVar23;
                  }
                }
                plVar38 = (longlong *)(lVar37 + lVar39);
                uVar34 = uVar34 + 1;
                lVar37 = lVar37 + 0x10;
                plVar30 = (long64 *)(*plVar38 + uVar41 * 0x10);
                *plVar30 = local_7e0;
                plVar30[1] = CONCAT44(uStack_7d4,uStack_7d8);
                param_2 = local_838;
              } while ((int)uVar34 < *(int *)(*(longlong *)((longlong)this + 0x78) + 8));
            }
          }
          else {
            uVar34 = 0;
            if (0 < (int)plVar38[1]) {
              lVar39 = 0;
              local_820 = ~uVar40 >> 0x1f;
              local_808 = local_828 << 4;
              lVar37 = 0;
              do {
                uVar22 = 0;
                if ((int)uVar34 < (int)plVar38[1]) {
                  uVar22 = ~uVar34 >> 0x1f;
                }
                if (uVar22 == 0) {
                  local_848 = (longlong)(int)uVar34;
                  local_840 = (longlong)(int)plVar38[1];
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar5 = (code *)swi(3);
                    iVar23 = (*pcVar5)();
                    return iVar23;
                  }
                }
                iStack_7e8 = FPCGMetadataAttributeBase::GetValueKey
                                       (*(FPCGMetadataAttributeBase **)(*plVar38 + lVar37),local_810
                                       );
                plVar38 = *(longlong **)((longlong)this + 0x80);
                local_7f0 = local_5c8.MetadataEntry;
                iVar23 = (int)plVar38[1];
                uVar22 = 0;
                if ((int)uVar34 < iVar23) {
                  uVar22 = ~uVar34 >> 0x1f;
                }
                if (uVar22 == 0) {
                  local_848 = (longlong)(int)uVar34;
                  local_840 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar5 = (code *)swi(3);
                    iVar23 = (*pcVar5)();
                    return iVar23;
                  }
                }
                lVar35 = *plVar38;
                iVar23 = *(int *)(lVar39 + 8 + lVar35);
                uVar22 = 0;
                if ((int)uVar40 < iVar23) {
                  uVar22 = local_820;
                }
                if (uVar22 == 0) {
                  local_848 = (longlong)(int)uVar40;
                  local_840 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar5 = (code *)swi(3);
                    iVar23 = (*pcVar5)();
                    return iVar23;
                  }
                }
                plVar38 = (longlong *)(lVar39 + lVar35);
                uVar34 = uVar34 + 1;
                lVar37 = lVar37 + 8;
                lVar39 = lVar39 + 0x10;
                plVar30 = (long64 *)(*plVar38 + local_808);
                *plVar30 = local_7f0;
                plVar30[1] = CONCAT44(uStack_7e4,iStack_7e8);
                plVar38 = *(longlong **)((longlong)this + 0x78);
                param_2 = local_838;
              } while ((int)uVar34 < (int)plVar38[1]);
            }
          }
        }
      }
      dVar16 = local_5c8.Transform.Scale3D.ZW.m128d_f64[1];
      dVar15 = local_5c8.Transform.Scale3D.ZW.m128d_f64[0];
      dVar14 = local_5c8.Transform.Scale3D.XY.m128d_f64[1];
      dVar13 = local_5c8.Transform.Scale3D.XY.m128d_f64[0];
      dVar12 = local_5c8.Transform.Translation.ZW.m128d_f64[1];
      dVar11 = local_5c8.Transform.Translation.ZW.m128d_f64[0];
      dVar10 = local_5c8.Transform.Translation.XY.m128d_f64[1];
      dVar9 = local_5c8.Transform.Translation.XY.m128d_f64[0];
      dVar8 = local_5c8.Transform.Rotation.ZW.m128d_f64[1];
      dVar7 = local_5c8.Transform.Rotation.ZW.m128d_f64[0];
      dVar6 = local_5c8.Transform.Rotation.XY.m128d_f64[1];
      dVar42 = local_5c8.Transform.Rotation.XY.m128d_f64[0];
      lVar37 = local_830;
      if (local_248.TransformRange.NumElements != 0) {
        pTVar27 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_248.TransformRange,param_2);
        (pTVar27->Rotation).XY.m128d_f64[0] = dVar42;
        (pTVar27->Rotation).XY.m128d_f64[1] = dVar6;
        (pTVar27->Rotation).ZW.m128d_f64[0] = dVar7;
        (pTVar27->Rotation).ZW.m128d_f64[1] = dVar8;
        (pTVar27->Translation).XY.m128d_f64[0] = dVar9;
        (pTVar27->Translation).XY.m128d_f64[1] = dVar10;
        (pTVar27->Translation).ZW.m128d_f64[0] = dVar11;
        (pTVar27->Translation).ZW.m128d_f64[1] = dVar12;
        (pTVar27->Scale3D).XY.m128d_f64[0] = dVar13;
        (pTVar27->Scale3D).XY.m128d_f64[1] = dVar14;
        (pTVar27->Scale3D).ZW.m128d_f64[0] = dVar15;
        (pTVar27->Scale3D).ZW.m128d_f64[1] = dVar16;
      }
      fVar2 = local_5c8.Density;
      if (local_248.DensityRange.NumElements != 0) {
        pfVar26 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_248.DensityRange,param_2);
        *pfVar26 = fVar2;
      }
      fVar2 = local_5c8.Steepness;
      if (local_248.SteepnessRange.NumElements != 0) {
        pfVar26 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_248.SteepnessRange,param_2);
        *pfVar26 = fVar2;
      }
      uVar19 = local_5c8.BoundsMin.field0_0x0._s_0.Z;
      uVar18 = local_5c8.BoundsMin.field0_0x0._s_0.Y;
      uVar17 = local_5c8.BoundsMin.field0_0x0._s_0.X;
      if (local_248.BoundsMinRange.NumElements != 0) {
        pTVar28 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_248.BoundsMinRange,param_2);
        (pTVar28->field0_0x0)._s_0.X = (double)uVar17;
        (pTVar28->field0_0x0)._s_0.Y = (double)uVar18;
        (pTVar28->field0_0x0)._s_0.Z = (double)uVar19;
      }
      uVar19 = local_5c8.BoundsMax.field0_0x0._s_0.Z;
      uVar18 = local_5c8.BoundsMax.field0_0x0._s_0.Y;
      uVar17 = local_5c8.BoundsMax.field0_0x0._s_0.X;
      if (local_248.BoundsMaxRange.NumElements != 0) {
        pTVar28 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_248.BoundsMaxRange,param_2);
        (pTVar28->field0_0x0)._s_0.X = (double)uVar17;
        (pTVar28->field0_0x0)._s_0.Y = (double)uVar18;
        (pTVar28->field0_0x0)._s_0.Z = (double)uVar19;
      }
      if (local_248.ColorRange.NumElements != 0) {
        uVar17 = local_5c8.Color.field0_0x0._s_0.X;
        uVar18 = local_5c8.Color.field0_0x0._s_0.Y;
        uVar19 = local_5c8.Color.field0_0x0._s_0.Z;
        uVar20 = local_5c8.Color.field0_0x0._s_0.W;
        pTVar29 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_248.ColorRange,param_2);
        (pTVar29->field0_0x0)._s_0.X = (double)uVar17;
        (pTVar29->field0_0x0)._s_0.Y = (double)uVar18;
        (pTVar29->field0_0x0)._s_0.Z = (double)uVar19;
        (pTVar29->field0_0x0)._s_0.W = (double)uVar20;
      }
      iVar23 = local_5c8.Seed;
      if (local_248.SeedRange.NumElements != 0) {
        piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_248.SeedRange,param_2);
        *piVar25 = iVar23;
      }
      lVar3 = local_5c8.MetadataEntry;
      if (local_248.MetadataEntryRange.NumElements != 0) {
        plVar30 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_248.MetadataEntryRange,param_2);
        *plVar30 = lVar3;
      }
      uVar41 = (ulonglong)(uVar40 + 1);
      local_828 = local_828 + 1;
      iVar23 = local_834 + 1;
      param_2 = param_2 + 1;
      local_830 = lVar37 + 0x10;
      param_3 = local_818;
      local_838 = param_2;
      local_834 = iVar23;
    } while ((int)(uVar40 + 1) < local_81c);
  }
  if ((iVar23 != param_3) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumWritten == Count",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                          ,0x1c1,L""), bVar21)) {
    pcVar5 = (code *)swi(3);
    iVar23 = (*pcVar5)();
    return iVar23;
  }
  return iVar23;
}

// operator() @ 149b63ab0

void __thiscall
`FPCGCopyPointsElement::ExecuteInternal'::__l158::<lambda_3>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  FPCGMetadataAttributeBase *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  TArrayView<TTuple<__int64,int>_const_,int> local_38;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res8,true);
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar7 = *(int *)this + param_1;
  uVar6 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar8 = *(int *)this + param_1;
  this_00 = *(FPCGMetadataAttributeBase **)(*plVar2 + (longlong)(int)uVar7 * 8);
  uVar6 = 0;
  if ((int)uVar8 < (int)plVar3[1]) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar9 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + *plVar3);
  if (this_00 == (FPCGMetadataAttributeBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Attribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                       ,0x1e2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38.DataPtr = (TTuple<__int64,int> *)*puVar9;
  iVar1 = *(int *)(puVar9 + 1);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38.ArrayNum = iVar1;
  FPCGMetadataAttributeBase::SetValuesFromValueKeys(this_00,&local_38,false);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ExecuteInternal @ 149b6f3f0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGCopyPointsElement::ExecuteInternal(FPCGCopyPointsElement *this,FPCGContext *param_1)

{
  TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FName *pFVar2;
  UPCGNode *this_00;
  FObjectPtr_u_0 *pFVar3;
  UPCGMetadata *this_01;
  UPCGMetadata *this_02;
  code *pcVar4;
  int iVar5;
  UPCGBasePointData *pUVar6;
  <lambda_1> <Var7;
  int *piVar8;
  FPCGMetadataDomainID FVar9;
  char cVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  FTextFormat *pFVar19;
  FPCGTaggedData *pFVar20;
  long64 lVar21;
  FText *pFVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  FScriptContainerElement *_Dst;
  FObjectPtr_u_0 *pFVar25;
  FObjectPtr_u_0 this_03;
  char cVar26;
  int *piVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  int iVar31;
  FObjectPtr_u_0 FVar32;
  TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *pTVar33;
  bool bVar34;
  undefined1 auStackY_598 [32];
  bool local_548;
  bool local_547;
  <lambda_1> local_546;
  EPCGCopyPointsInheritanceMode local_545;
  EPCGCopyPointsInheritanceMode local_544;
  char local_543;
  char local_542;
  undefined1 local_541;
  undefined1 local_540;
  EPCGCopyPointsInheritanceMode local_53f;
  bool local_53e;
  EPCGCopyPointsInheritanceMode local_53d [5];
  TArray<TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_538;
  ForAnyElementType local_528;
  undefined8 local_520;
  UPCGBasePointData *local_518;
  TObjectPtr<UPCGSettings>_u_0 local_510;
  TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_> local_508;
  UPCGBasePointData *local_4f8;
  UPCGBasePointData *local_4f0;
  UPCGMetadata *local_4e8;
  TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> local_4e0;
  uint local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  FPCGContext *local_4c0;
  FPCGMetadataAttributeBase *local_4b8;
  FPCGMetadataAttributeBase *local_4b0;
  UPCGMetadata *local_4a8;
  int *local_4a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_498;
  uint local_488;
  int *local_480;
  FObjectPtr_u_0 local_478;
  FObjectPtr_u_0 local_470;
  TObjectPtr<UPCGSettings>_u_0 local_468;
  TArray<FName,TSizedDefaultAllocator<32>_> local_460;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_450;
  int *local_440;
  TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *local_438;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_430;
  int *local_420;
  <lambda_1> local_418;
  TArrayView<std::nullptr_t,int> local_3f0;
  code *local_3e0;
  int *local_3d8;
  int local_3d0 [2];
  ForAnyElementType *local_3c8;
  TArray<TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_3c0;
  FPCGInitializeFromDataParams local_3b8;
  <lambda_2> local_378;
  FText local_2e8;
  FText local_2d8;
  FString local_2c8;
  FString local_2b8;
  FText local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FName local_268;
  FPCGMetadataDomainID FStack_260;
  FPCGAttributeIdentifier local_248;
  FName local_228;
  FPCGMetadataDomainID FStack_220;
  FPCGAttributeIdentifier local_208;
  FName local_1e8;
  FPCGMetadataDomainID FStack_1e0;
  FText local_1d0;
  FString local_1c0;
  FText local_1b0;
  FPCGAttributeIdentifier local_198;
  FPCGInitializeFromDataParams local_178;
  FPCGInitializeFromDataParams local_138;
  FPCGInitializeFromDataParams local_f8;
  FTextFormat local_b8;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  TVector<double>_u_0 local_70;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_598;
  bVar34 = CpuChannel->Enabled < 0;
  local_4c0 = param_1;
  if (bVar34) {
    local_543 = '\0';
  }
  else {
    local_543 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId73,"FPCGCopyPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
               ,0x49);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
  }
  cVar26 = !bVar34;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar20 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCopyPointsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_546);
      if (pFVar20 != (FPCGTaggedData *)0x0) {
        local_468.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar20->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_468.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b6f51a;
          UE::GC::MarkAsReachable((UObject *)local_468.DebugPtr);
        }
        if (local_468.DebugPtr != (UPCGSettings *)0x0) {
          pUVar16 = UPCGCopyPointsSettings::StaticClass();
          bVar34 = FObjectPtr::IsA(&local_468.ObjectPtr,pUVar16);
          TVar18 = local_468;
          local_510 = local_468;
          if (bVar34) goto LAB_149b6f521;
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_00);
      TVar18.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (TVar18.DebugPtr != (UPCGSettings *)0x0) {
        local_510.DebugPtr = TVar18.DebugPtr;
        pUVar16 = UPCGCopyPointsSettings::StaticClass();
        iVar14 = (int)pUVar16->_padding_;
        if ((iVar14 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar16->_padding_)) goto LAB_149b6f521;
      }
    }
LAB_149b6f51a:
    local_510.DebugPtr = (UPCGSettings *)0x0;
    TVar18.DebugPtr = local_510.DebugPtr;
  }
  else {
    pUVar16 = UPCGCopyPointsSettings::StaticClass();
    bVar34 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    if (bVar34) {
      local_510 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar18 = local_510;
    }
    else {
      local_510.DebugPtr = (UPCGSettings *)0x0;
      TVar18.DebugPtr = local_510.DebugPtr;
    }
  }
LAB_149b6f521:
  if (((TVar18.DebugPtr == (UPCGSettings *)0x0) ||
      (cVar10 = (**(code **)((TVar18.DebugPtr)->_padding_ + 0x4a8))(TVar18.DebugPtr), cVar10 != '\0'
      )) && (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                ("Settings && !Settings->ShouldExecuteOnGPU()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                                 ,0x4c,L""), bVar34)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  local_53f = (EPCGCopyPointsInheritanceMode)TVar18.DebugPtr[1]._padding_;
  local_53d[0] = *(EPCGCopyPointsInheritanceMode *)((longlong)&TVar18.DebugPtr[1]._padding_ + 2);
  local_545 = *(EPCGCopyPointsInheritanceMode *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4);
  local_544 = *(EPCGCopyPointsInheritanceMode *)((longlong)&TVar18.DebugPtr[1]._padding_ + 5);
  local_542 = *(char *)((longlong)&TVar18.DebugPtr[1]._padding_ + 6);
  local_53e = *(bool *)((longlong)&TVar18.DebugPtr[1]._padding_ + 1);
  local_546 = *(<lambda_1> *)((longlong)&TVar18.DebugPtr[1]._padding_ + 3);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_450,&PCGCopyPointsConstants::SourcePointsLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_498,&PCGCopyPointsConstants::TargetPointsLabel);
  iVar14 = local_450.ArrayNum;
  <Var7 = local_546;
  local_4c8 = local_498.ArrayNum;
  if ((local_450.ArrayNum != 0) && (local_498.ArrayNum != 0)) {
    if ((char)TVar18.DebugPtr[1]._padding_ == '\0') {
      if (((local_450.ArrayNum != local_498.ArrayNum) && (local_450.ArrayNum != 1)) &&
         (local_498.ArrayNum != 1)) {
        pFVar22 = FText::AsLocalizable_Advanced_LocText
                            (&local_2d8,L"PCGCopyPointsElement",L"NumDataMismatch",
                             L"Num Sources ({0}) mismatches with Num Targets ({1}). Only supports N:N, 1:N and N:1 operation."
                            );
        pFVar19 = FTextFormat::FTextFormat(&local_b8,pFVar22,Default);
        pFVar22 = FText::Format<int,int>(&local_2e8,pFVar19,iVar14,local_4c8);
        PCGLog::LogErrorOnGraph(pFVar22,param_1);
        if (local_2e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
        }
        if (local_2d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
        }
        TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
                  (&(param_1->OutputData).TaggedData,&local_450);
        goto LAB_149b7096a;
      }
      local_4cc = local_498.ArrayNum;
      if (local_498.ArrayNum < local_450.ArrayNum) {
        local_4cc = local_450.ArrayNum;
      }
    }
    else {
      local_4cc = local_498.ArrayNum * local_450.ArrayNum;
    }
    local_4d0 = 0;
    if (0 < local_4cc) {
      local_4a0 = &(param_1->OutputData).TaggedData.ArrayMax;
      local_480 = &(param_1->OutputData).TaggedData.ArrayNum;
      local_440 = local_480;
      local_420 = local_4a0;
      do {
        piVar27 = local_4a0;
        if ((char)TVar18.DebugPtr[1]._padding_ == '\0') {
          uVar30 = local_498.ArrayNum - 1U;
          if ((int)local_4d0 < (int)(local_498.ArrayNum - 1U)) {
            uVar30 = local_4d0;
          }
          uVar13 = local_450.ArrayNum - 1U;
          if ((int)local_4d0 < (int)(local_450.ArrayNum - 1U)) {
            uVar13 = local_4d0;
          }
        }
        else {
          uVar30 = (int)local_4d0 % local_4c8;
          uVar13 = (int)local_4d0 / local_4c8;
        }
        uVar28 = 0;
        if ((int)uVar13 < local_450.ArrayNum) {
          uVar28 = ~uVar13 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar25 = (FObjectPtr_u_0 *)
                  (local_450.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x78);
        uVar13 = 0;
        if ((int)uVar30 < local_498.ArrayNum) {
          uVar13 = ~uVar30 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar3 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
        pFVar29 = local_498.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x78;
        if ((pFVar3 <= pFVar25) &&
           (local_4a0 = local_420, piVar27 = local_420,
           pFVar25 < pFVar3 + (longlong)*local_420 * 0xf)) {
          local_480 = local_440;
          bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar34) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
        }
        piVar8 = local_480;
        iVar14 = *local_480;
        if (iVar14 == *piVar27) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&param_1->OutputData,piVar27);
        }
        *piVar8 = iVar14 + 1;
        pFVar20 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                             (longlong)iVar14 * 0x78),(FPCGTaggedData *)pFVar25);
        FVar32 = (FObjectPtr_u_0)pFVar25->Handle;
        if (((UPCGSpatialData *)FVar32.Handle == (UPCGSpatialData *)0x0) ||
           (*(longlong *)&pFVar29->field_0x0 == 0)) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_1d0,L"PCGCopyPointsElement",L"InvalidInputData",
                                 L"Invalid input data");
            FText::ToString(pFVar22);
            FPCGContext::GetTaskName(param_1,&local_278);
            FPCGContext::GetExecutionSourceName(param_1,&local_1c0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
            }
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
            }
LAB_149b7095f:
            if (local_1d0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
            }
          }
          break;
        }
        local_478 = FVar32;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(FVar32.Handle);
        }
        if ((UPCGSpatialData *)local_478.Handle == (UPCGSpatialData *)0x0) {
LAB_149b6f946:
          FVar32.Handle = (UObject *)0x0;
        }
        else {
          pUVar16 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar34 = FObjectPtr::IsA((FObjectPtr *)&local_478,pUVar16);
          FVar32 = local_478;
          if (!bVar34) goto LAB_149b6f946;
        }
        local_470.Handle = *(UObject **)&pFVar29->field_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b6f96a:
          if ((UPCGSpatialData *)local_470.Handle == (UPCGSpatialData *)0x0) goto LAB_149b6f98a;
          pUVar16 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar34 = FObjectPtr::IsA((FObjectPtr *)&local_470,pUVar16);
          this_03 = local_470;
          if (!bVar34) goto LAB_149b6f98a;
        }
        else {
          if ((UPCGSpatialData *)local_470.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_470.Handle);
            goto LAB_149b6f96a;
          }
LAB_149b6f98a:
          this_03.Handle = (UObject *)0x0;
        }
        if (((UPCGSpatialData *)FVar32.Handle == (UPCGSpatialData *)0x0) ||
           ((UPCGSpatialData *)this_03.Handle == (UPCGSpatialData *)0x0)) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_1b0,L"PCGCopyPointsElement",L"CouldNotObtainSpatialData",
                                 L"Unable to get Spatial Data from input");
            FText::ToString(pFVar22);
            FPCGContext::GetTaskName(param_1,&local_288);
            FPCGContext::GetExecutionSourceName(param_1,&local_298);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            local_1d0.TextData.Reference = local_1b0.TextData.Reference;
            if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.Data.AllocatorInstance.Data);
              local_1d0.TextData.Reference = local_1b0.TextData.Reference;
            }
            goto LAB_149b7095f;
          }
          break;
        }
        local_78 = 0;
        local_77 = 0;
        local_73 = 0;
        local_71 = 0;
        local_a8._s_0.X = 0.0;
        local_a8._s_0.Y = 0.0;
        local_a8._s_0.Z = 0.0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_4f8 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)FVar32.Handle,param_1,
                               (TBox<double> *)&local_a8._s_0);
        local_40 = 0;
        local_3f = 0;
        local_3b = 0;
        local_39 = 0;
        local_70._s_0.X = 0.0;
        local_70._s_0.Y = 0.0;
        local_70._s_0.Z = 0.0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_4f0 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)this_03.Handle,param_1,
                               (TBox<double> *)&local_70._s_0);
        if ((local_4f8 == (UPCGBasePointData *)0x0) || (local_4f0 == (UPCGBasePointData *)0x0)) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_2a8,L"PCGCopyPointsElement",L"CouldNotGetPointData",
                                 L"Unable to get Point Data from input");
            FText::ToString(pFVar22);
            FPCGContext::GetTaskName(param_1,&local_2b8);
            FPCGContext::GetExecutionSourceName(param_1,&local_2c8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            local_1d0.TextData.Reference = local_2a8.TextData.Reference;
            if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
              local_1d0.TextData.Reference = local_2a8.TextData.Reference;
            }
            goto LAB_149b7095f;
          }
          break;
        }
        this_01 = (UPCGMetadata *)local_4f8->_padding_;
        this_02 = (UPCGMetadata *)local_4f0->_padding_;
        local_518 = FPCGContext::NewPointData_AnyThread(local_4c0);
        FPCGDataPtrWrapper::operator=(&pFVar20->Data,(UPCGData *)local_518);
        cVar10 = *(char *)((longlong)&local_510.DebugPtr[1]._padding_ + 7);
        if (cVar10 == '\x02') {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                    (&pFVar20->Tags,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     (pFVar29 + 0x10));
        }
        else if (cVar10 == '\0') {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Append<FDefaultSetAllocator>
                    (&pFVar20->Tags,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     (pFVar29 + 0x10));
        }
        local_4e8 = (UPCGMetadata *)0x0;
        iVar14 = UPCGMetadata::GetAttributeCount(this_01);
        if ((iVar14 < 1) || (lVar21 = UPCGMetadata::GetItemCountForChild(this_01), lVar21 < 1)) {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        iVar14 = UPCGMetadata::GetAttributeCount(this_02);
        if ((iVar14 < 1) || (lVar21 = UPCGMetadata::GetItemCountForChild(this_02), lVar21 < 1)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        local_548 = true;
        local_547 = true;
        if ((bVar34 == false) && (bVar12 == false)) {
          local_548 = false;
        }
        if (local_542 == '\x02') {
          local_4e8 = (UPCGMetadata *)0x0;
          local_548 = bVar34;
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_178,(UPCGSpatialData *)local_4f8);
          local_178.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)local_518,&local_178);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_178.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_178.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          FVar23.Data = local_178.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_178.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_178.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
            FVar23.Data = local_178.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
          }
        }
        else if (local_542 == '\x03') {
          local_547 = false;
          local_4e8 = (UPCGMetadata *)0x0;
          local_548 = bVar12;
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_138,(UPCGSpatialData *)local_4f0);
          local_138.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)local_518,&local_138);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_138.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_138.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          FVar23.Data = local_138.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_138.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_138.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
            FVar23.Data = local_138.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
          }
        }
        else {
          if (local_542 == '\0') {
            local_547 = true;
            if ((bVar34 == false) && (bVar12 != false)) {
LAB_149b6fc49:
              local_547 = false;
            }
          }
          else {
            if (local_542 != '\x01') {
              FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                        (&local_3b8,(UPCGSpatialData *)local_4f8);
              local_3b8.bInheritAttributes = false;
              local_3b8.bInheritSpatialData = false;
              local_3b8.bInheritMetadata = false;
              UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)local_518,&local_3b8)
              ;
              local_548 = false;
              local_4e8 = (UPCGMetadata *)0x0;
              DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                        ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                         local_3b8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                         .Data,local_3b8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
              FVar23.Data = local_3b8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
              if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                  local_3b8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                  != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
                FMemory::Free(local_3b8.MetadataInitializeParams.DomainInitializeParams.
                              AllocatorInstance.Data);
                FVar23.Data = local_3b8.MetadataInitializeParams.DomainMapping.AllocatorInstance.
                              Data;
              }
              goto LAB_149b6fcaf;
            }
            if ((bVar12 != false) || (bVar34 == false)) goto LAB_149b6fc49;
          }
          local_4e8 = this_01;
          pUVar6 = local_4f0;
          if (local_547 != false) {
            local_4e8 = this_02;
            pUVar6 = local_4f8;
          }
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_f8,(UPCGSpatialData *)pUVar6);
          local_f8.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)local_518,&local_f8);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                     ,local_f8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          FVar23.Data = local_f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_f8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                          .Data);
            FVar23.Data = local_f8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data;
          }
        }
LAB_149b6fcaf:
        if (FVar23.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar23.Data);
        }
        local_518->_padding_ = local_4f0->_padding_;
        local_4a8 = (UPCGMetadata *)local_518->_padding_;
        if ((local_4a8 == (UPCGMetadata *)0x0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutMetadata",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                                ,0xe9,L""), bVar34)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        local_528.Data = (FScriptContainerElement *)0x0;
        local_520 = 0;
        local_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4e0.ArrayNum = 0;
        local_4e0.ArrayMax = 0;
        local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_508.ArrayNum = 0;
        local_508.ArrayMax = 0;
        local_538.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_538.ArrayNum = 0;
        local_538.ArrayMax = 0;
        pcVar4 = *(code **)(local_4f0->_padding_ + 0x488);
        iVar14 = (**(code **)(local_4f8->_padding_ + 0x488))();
        iVar15 = (*pcVar4)(local_4f0);
        uVar30 = iVar14 * iVar15;
        if (local_548 != false) {
          bVar34 = -1 < CpuChannel->Enabled;
          if (bVar34) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId244,"FPCGCopyPointsElement::Execute::SetupMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                       ,0xf4);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
          }
          if (local_4e8 != (UPCGMetadata *)0x0) {
            local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_460.ArrayNum = 0;
            local_460.ArrayMax = 0;
            local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_430.ArrayNum = 0;
            local_430.ArrayMax = 0;
            UPCGMetadata::GetAttributes(local_4e8,&local_460,&local_430);
            iVar14 = local_460.ArrayNum;
            uVar24 = (ulonglong)local_460.ArrayNum;
            pFVar2 = (FName *)(local_460.AllocatorInstance.Data + uVar24 * 8);
            FVar23.Data = local_460.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar24 != iVar14) {
                local_541 = 0;
                `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_541);
              }
              if ((FName *)FVar23.Data == pFVar2) break;
              local_268 = *(FName *)FVar23.Data;
              FStack_260 = PCGMetadataDomainID::Default;
              FVar9 = FStack_260;
              FStack_260._0_8_ = PCGMetadataDomainID::Default._0_8_;
              local_248.MetadataDomain.Flag = FStack_260.Flag;
              local_248.MetadataDomain._1_3_ = FStack_260._1_3_;
              local_248.MetadataDomain.CustomFlag = FStack_260.CustomFlag;
              local_248.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
              FStack_260 = FVar9;
              local_248.Name = local_268;
              bVar12 = UPCGMetadata::HasAttribute(local_4a8,&local_248);
              if (!bVar12) {
                local_228 = *(FName *)FVar23.Data;
                FStack_220 = PCGMetadataDomainID::Default;
                FVar9 = FStack_220;
                FStack_220._0_8_ = PCGMetadataDomainID::Default._0_8_;
                local_208.MetadataDomain.Flag = FStack_220.Flag;
                local_208.MetadataDomain._1_3_ = FStack_220._1_3_;
                local_208.MetadataDomain.CustomFlag = FStack_220.CustomFlag;
                local_208.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                FStack_220 = FVar9;
                local_208.Name = local_228;
                local_4b0 = UPCGMetadata::GetConstAttribute(local_4e8,&local_208);
                local_1e8 = *(FName *)FVar23.Data;
                FStack_1e0 = PCGMetadataDomainID::Default;
                FVar9 = FStack_1e0;
                FStack_1e0._0_8_ = PCGMetadataDomainID::Default._0_8_;
                local_198.MetadataDomain.Flag = FStack_1e0.Flag;
                local_198.MetadataDomain._1_3_ = FStack_1e0._1_3_;
                local_198.MetadataDomain.CustomFlag = FStack_1e0.CustomFlag;
                local_198.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                FStack_1e0 = FVar9;
                local_198.Name = local_1e8;
                local_4b8 = UPCGMetadata::CopyAttribute
                                      (local_4a8,local_4b0,&local_198,false,false,true);
                if (local_4b8 != (FPCGMetadataAttributeBase *)0x0) {
                  if (((local_528.Data <= (FScriptContainerElement *)&local_4b8) &&
                      ((FScriptContainerElement *)&local_4b8 <
                       local_528.Data + (longlong)local_520._4_4_ * 8)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar11 = (*pcVar4)();
                    return (bool)uVar11;
                  }
                  iVar15 = (int)local_520;
                  if ((int)local_520 == local_520._4_4_) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_528,(int *)((longlong)&local_520 + 4));
                  }
                  local_520 = CONCAT44(local_520._4_4_,iVar15 + 1);
                  *(FPCGMetadataAttributeBase **)(local_528.Data + (longlong)iVar15 * 8) = local_4b8
                  ;
                  if (((local_4e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4b0)
                      && ((FScriptContainerElement *)&local_4b0 <
                          local_4e0.AllocatorInstance.Data + (longlong)local_4e0.ArrayMax * 8)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar11 = (*pcVar4)();
                    return (bool)uVar11;
                  }
                  iVar15 = local_4e0.ArrayNum;
                  if (local_4e0.ArrayNum == local_4e0.ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_4e0.AllocatorInstance,&local_4e0.ArrayMax);
                  }
                  local_4e0.ArrayNum = iVar15 + 1;
                  *(FPCGMetadataAttributeBase **)
                   (local_4e0.AllocatorInstance.Data + (longlong)iVar15 * 8) = local_4b0;
                }
              }
              uVar24 = local_460._8_8_ & 0xffffffff;
              FVar23.Data = FVar23.Data + 8;
            }
            iVar14 = (int)local_520;
            if (local_538.ArrayNum < (int)local_520) {
              iVar15 = (int)local_520 - local_538.ArrayNum;
              iVar14 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,iVar15,&local_538.AllocatorInstance,&local_538.ArrayNum,
                                  &local_538.ArrayMax);
              memset(local_538.AllocatorInstance.Data + (longlong)iVar14 * 0x10,0,
                     (longlong)iVar15 << 4);
            }
            else {
              if ((int)local_520 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(local_520 & 0xffffffff);
              }
              if ((int)local_520 < local_538.ArrayNum) {
                uVar28 = local_538.ArrayNum - (int)local_520;
                uVar13 = 0;
                if ((int)((int)local_520 + uVar28) <= local_538.ArrayNum) {
                  uVar13 = ~uVar28 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
                if (uVar28 != 0) {
                  pTVar33 = (TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *)
                            (local_538.AllocatorInstance.Data + (longlong)iVar14 * 0x10);
                  DestructItems<TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_>,int>
                            (pTVar33,uVar28);
                  iVar14 = (local_538.ArrayNum - uVar28) - iVar14;
                  if (iVar14 != 0) {
                    memmove(pTVar33,pTVar33 + (int)uVar28,(longlong)iVar14 << 4);
                  }
                  iVar14 = local_538.ArrayNum - uVar28;
                  local_538.ArrayNum = iVar14;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,&local_538.AllocatorInstance,iVar14,&local_538.ArrayMax);
                }
              }
            }
            uVar24 = (ulonglong)local_538.ArrayNum;
            pTVar33 = (TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *)
                      (local_538.AllocatorInstance.Data + uVar24 * 0x10);
            local_488 = local_538.ArrayNum;
            pFVar29 = local_538.AllocatorInstance.Data + 8;
            local_438 = pTVar33;
            while( true ) {
              if (local_538.ArrayNum != (int)uVar24) {
                local_540 = 0;
                `TCheckedPointerIterator<TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_540);
              }
              pTVar1 = (TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *)(pFVar29 + -8);
              if (pTVar1 == pTVar33) break;
              iVar14 = *(int *)pFVar29;
              if (iVar14 < (int)uVar30) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,uVar30 - iVar14,(ForAnyElementType *)pTVar1,(int *)pFVar29,
                           (int *)(pFVar29 + 4));
                uVar24 = (ulonglong)local_488;
                pFVar29 = pFVar29 + 0x10;
              }
              else {
                if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
                }
                if ((int)uVar30 < iVar14) {
                  iVar14 = iVar14 - uVar30;
                  if (iVar14 < 0) {
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       );
                    if (bVar12) {
                      pcVar4 = (code *)swi(3);
                      uVar11 = (*pcVar4)();
                      return (bool)uVar11;
                    }
                  }
                  else {
                    pTVar33 = local_438;
                    if (iVar14 == 0) goto LAB_149b70291;
                  }
                  _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10;
                  iVar15 = (*(int *)pFVar29 - iVar14) - uVar30;
                  if (iVar15 != 0) {
                    memmove(_Dst,_Dst + (longlong)iVar14 * 0x10,(longlong)iVar15 << 4);
                  }
                  *(int *)pFVar29 = *(int *)pFVar29 - iVar14;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,(ForAnyElementType *)pTVar1,*(int *)pFVar29,(int *)(pFVar29 + 4)
                            );
                  pTVar33 = local_438;
                }
LAB_149b70291:
                uVar24 = (ulonglong)local_488;
                pFVar29 = pFVar29 + 0x10;
              }
            }
            if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_430.AllocatorInstance.Data);
            }
            if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_460.AllocatorInstance.Data);
            }
          }
          if (local_508.ArrayNum < (int)uVar30) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar30 - local_508.ArrayNum,&local_508.AllocatorInstance,
                       &local_508.ArrayNum,&local_508.ArrayMax);
          }
          else {
            if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
            }
            if ((int)uVar30 < local_508.ArrayNum) {
              uVar28 = local_508.ArrayNum - uVar30;
              uVar13 = 0;
              if ((int)(uVar28 + uVar30) <= local_508.ArrayNum) {
                uVar13 = ~uVar28 >> 0x1f;
              }
              if (uVar13 == 0) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
              }
              if (uVar28 != 0) {
                iVar15 = (local_508.ArrayNum - uVar28) - uVar30;
                iVar14 = local_508.ArrayNum;
                if (iVar15 != 0) {
                  memmove(local_508.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10,
                          local_508.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10 +
                          (longlong)(int)uVar28 * 0x10,(longlong)iVar15 << 4);
                  iVar14 = local_508.ArrayNum;
                }
                local_508.ArrayNum = iVar14 - uVar28;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,&local_508.AllocatorInstance,iVar14 - uVar28,&local_508.ArrayMax);
              }
            }
          }
          if (bVar34) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        local_418.TargetPointData = local_4f0;
        local_418.OptionalProperties = Seed|Color;
        if (local_548 != false) {
          local_418.OptionalProperties = MetadataEntry|Seed|Color;
        }
        local_418.bProcessMetadata = local_548;
        local_418.OutPointData = local_518;
        local_418.SourcePointData = local_4f8;
        local_418.ColorInheritance = local_545;
        local_418.SeedInheritance = local_544;
        local_418.NumPoints = uVar30;
        local_4c4 = (**(code **)(local_4f0->_padding_ + 0x488))();
        param_1 = local_4c0;
        local_378.SourcePointData = &local_4f8;
        local_378.TargetPointData = &local_4f0;
        local_378.OutPointData = &local_518;
        local_378.TargetNumPoints = &local_4c4;
        local_378.RotationInheritance = &local_53f;
        local_378.bApplyTargetRotationToPositions = &local_53e;
        local_378.ScaleInheritance = local_53d;
        local_378.bApplyTargetScaleToPositions = (bool *)&local_546;
        local_378.ColorInheritance = &local_545;
        local_378.SeedInheritance = &local_544;
        local_378.bProcessMetadata = &local_548;
        local_378.bInheritMetadataFromSource = &local_547;
        local_378.OutMetadata = &local_4a8;
        local_378.AllMetadataEntries = &local_508;
        local_378.NonRootMetadata = &local_4e8;
        local_378.NonRootAttributes = &local_4e0;
        local_378.AttributeValuesToSet = &local_538;
        FPCGAsync::
        AsyncProcessingOneToOneRangeEx<_FPCGCopyPointsElement::ExecuteInternal_::__l22::<lambda_1>_&,_FPCGCopyPointsElement::ExecuteInternal_::__l22::<lambda_2>_&>
                  (&local_4c0->AsyncState,uVar30,&local_418,&local_378,false,0x40,true);
        if (local_548 != false) {
          bVar34 = -1 < CpuChannel->Enabled;
          if (bVar34) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&DAT_15528cb2c,"FPCGCopyPointsElement::Execute::SetMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                       ,0x1ce);
            FCpuProfilerTrace::OutputBeginEvent(DAT_15528cb2c);
          }
          if ((int)local_520 != local_538.ArrayNum) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("AttributesToSet.Num() == AttributeValuesToSet.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyPoints.cpp"
                                ,0x1cf,L"");
            if (bVar12) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
          }
          if (0 < (int)local_520) {
            iVar31 = 0;
            iVar14 = (local_4c0->AsyncState).NumAvailableTasks;
            iVar15 = 0x80;
            if ((0 < iVar14) && (iVar15 = 0x80, iVar14 < 0x80)) {
              iVar15 = iVar14;
            }
            param_1 = local_4c0;
            iVar14 = (int)local_520;
            if (0 < (int)local_520) {
              do {
                local_3c8 = &local_528;
                local_3f0.DataPtr = (void **)0x0;
                local_3c0 = &local_538;
                local_3f0.ArrayNum = 0;
                local_3d8 = local_3d0;
                local_3e0 = UE::Core::Private::Function::
                            TFunctionRefCaller<`FPCGCopyPointsElement::ExecuteInternal'::__l158::<lambda_3>,void,int>
                            ::Call;
                iVar5 = iVar14 - iVar31;
                if (iVar15 < iVar14 - iVar31) {
                  iVar5 = iVar15;
                }
                local_3d0[0] = iVar31;
                ParallelForImpl::
                ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                          (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_3e0
                           ,<Var7,None,&local_3f0);
                iVar31 = iVar31 + iVar5;
                param_1 = local_4c0;
                cVar26 = local_543;
                iVar14 = (int)local_520;
              } while (iVar31 < (int)local_520);
            }
          }
          UPCGMetadata::AddDelayedEntries(local_4a8,&local_508);
          if (bVar34) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        DestructItems<TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *)
                   local_538.AllocatorInstance.Data,local_538.ArrayNum);
        if ((TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *)
            local_538.AllocatorInstance.Data !=
            (TArray<TTuple<__int64,int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_538.AllocatorInstance.Data);
        }
        if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.AllocatorInstance.Data);
        }
        if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e0.AllocatorInstance.Data);
        }
        if (local_528.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_528.Data);
        }
        local_4d0 = local_4d0 + 1;
        TVar18 = local_510;
      } while ((int)local_4d0 < local_4cc);
    }
  }
LAB_149b7096a:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
  if ((FPCGTaggedData *)local_498.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_450.AllocatorInstance.Data,local_450.ArrayNum);
  if ((FPCGTaggedData *)local_450.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_450.AllocatorInstance.Data);
  }
  if (cVar26 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b98880

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
FPCGCopyPointsElement::SupportsBasePointDataInputs(FPCGCopyPointsElement *this,FPCGContext *param_1)

{
  return true;
}

