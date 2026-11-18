// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FinalizeInternal<UPCGBasePointData> @ 149bbc000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGMatchAndSetPartition::FinalizeInternal<UPCGBasePointData>
          (FPCGMatchAndSetPartition *this,UPCGBasePointData *param_1,UPCGBasePointData *param_2,
          int param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
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
  int iVar18;
  FPCGMatchAndSetPartition *pFVar19;
  FPCGPointValueRanges *pFVar20;
  FConstPCGPointValueRanges *pFVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  FConstPCGPointValueRanges *pFVar27;
  FConstPCGPointValueRanges *pFVar28;
  FPCGPointValueRanges *pFVar29;
  FPCGPointValueRanges *pFVar30;
  TTransform<double> *pTVar31;
  float *pfVar32;
  TVector<double> *pTVar33;
  TVector4<double> *pTVar34;
  int *piVar35;
  long64 *plVar36;
  long64 lVar37;
  FConstPCGPointValueRanges *pFVar38;
  FPCGPointValueRanges *pFVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  FScriptContainerElement *pFVar43;
  FScriptContainerElement *pFVar44;
  uint uVar45;
  UPCGBasePointData *pUVar46;
  longlong lVar47;
  ulonglong uVar48;
  UPCGBasePointData *pUVar49;
  undefined1 auStack_758 [32];
  longlong local_738;
  longlong local_730;
  undefined1 local_728 [4];
  uint local_724;
  longlong local_720;
  int local_718;
  FPCGMatchAndSetPartition *local_710;
  longlong local_708;
  longlong local_700;
  UPCGMetadata *local_6f8;
  UPCGBasePointData *local_6f0;
  FConstPCGPointValueRanges local_6e8;
  FPCGPointValueRanges local_558;
  FPCGPointValueRanges local_3c8;
  FConstPCGPointValueRanges local_238;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_758;
  local_718 = param_3;
  local_710 = this;
  lVar26 = (**(code **)(param_1->_padding_ + 800))(param_1);
  local_6f8 = (UPCGMetadata *)(**(code **)(param_2->_padding_ + 0x328))(param_2);
  if (((lVar26 == 0) || (local_6f8 == (UPCGMetadata *)0x0)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMetadata && OutMetadata",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                          ,0x341,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar46 = (UPCGBasePointData *)0x0;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_238);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_3c8);
  if (param_1 == (UPCGBasePointData *)0x0) {
    param_1 = pUVar46;
  }
  pFVar27 = FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_6e8,param_1);
  lVar41 = 3;
  lVar26 = 3;
  pFVar21 = &local_238;
  do {
    pFVar38 = pFVar21;
    pFVar28 = pFVar27;
    iVar3 = (pFVar28->TransformRange).ElementView.BytesBetweenElements;
    iVar6 = (pFVar28->TransformRange).ElementView.NumElements;
    iVar18 = (pFVar28->TransformRange).NumElements;
    uVar5 = *(undefined4 *)&(pFVar28->TransformRange).field_0x14;
    lVar47 = (pFVar28->TransformRange)._padding_;
    (pFVar38->TransformRange).ElementView.FirstElementPtr =
         (pFVar28->TransformRange).ElementView.FirstElementPtr;
    (pFVar38->TransformRange).ElementView.BytesBetweenElements = iVar3;
    (pFVar38->TransformRange).ElementView.NumElements = iVar6;
    dVar2 = (pFVar28->TransformRange).StubValue.Rotation.XY.m128d_f64[0];
    dVar7 = (pFVar28->TransformRange).StubValue.Rotation.XY.m128d_f64[1];
    (pFVar38->TransformRange).NumElements = iVar18;
    *(undefined4 *)&(pFVar38->TransformRange).field_0x14 = uVar5;
    (pFVar38->TransformRange)._padding_ = lVar47;
    dVar8 = (pFVar28->TransformRange).StubValue.Rotation.ZW.m128d_f64[0];
    dVar9 = (pFVar28->TransformRange).StubValue.Rotation.ZW.m128d_f64[1];
    (pFVar38->TransformRange).StubValue.Rotation.XY.m128d_f64[0] = dVar2;
    (pFVar38->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar7;
    dVar2 = (pFVar28->TransformRange).StubValue.Translation.XY.m128d_f64[0];
    dVar7 = (pFVar28->TransformRange).StubValue.Translation.XY.m128d_f64[1];
    (pFVar38->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] = dVar8;
    (pFVar38->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar9;
    dVar8 = (pFVar28->TransformRange).StubValue.Translation.ZW.m128d_f64[0];
    dVar9 = (pFVar28->TransformRange).StubValue.Translation.ZW.m128d_f64[1];
    (pFVar38->TransformRange).StubValue.Translation.XY.m128d_f64[0] = dVar2;
    (pFVar38->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar7;
    dVar2 = (pFVar28->TransformRange).StubValue.Scale3D.XY.m128d_f64[0];
    dVar7 = (pFVar28->TransformRange).StubValue.Scale3D.XY.m128d_f64[1];
    (pFVar38->TransformRange).StubValue.Translation.ZW.m128d_f64[0] = dVar8;
    (pFVar38->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar9;
    dVar8 = (pFVar28->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0];
    dVar9 = (pFVar28->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1];
    (pFVar38->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] = dVar2;
    (pFVar38->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = dVar7;
    (pFVar38->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] = dVar8;
    (pFVar38->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar9;
    lVar26 = lVar26 + -1;
    pFVar27 = (FConstPCGPointValueRanges *)&pFVar28->DensityRange;
    pFVar21 = (FConstPCGPointValueRanges *)&pFVar38->DensityRange;
  } while (lVar26 != 0);
  iVar3 = (pFVar28->DensityRange).ElementView.BytesBetweenElements;
  iVar6 = (pFVar28->DensityRange).ElementView.NumElements;
  if (param_2 == (UPCGBasePointData *)0x0) {
    param_2 = pUVar46;
  }
  (pFVar38->DensityRange).ElementView.FirstElementPtr =
       (pFVar28->DensityRange).ElementView.FirstElementPtr;
  (pFVar38->DensityRange).ElementView.BytesBetweenElements = iVar3;
  (pFVar38->DensityRange).ElementView.NumElements = iVar6;
  local_6f0 = param_2;
  pFVar29 = FPCGPointValueRanges::FPCGPointValueRanges(&local_558,param_2,false);
  pFVar20 = &local_3c8;
  do {
    pFVar39 = pFVar20;
    pFVar30 = pFVar29;
    iVar3 = (pFVar30->TransformRange).ElementView.BytesBetweenElements;
    iVar6 = (pFVar30->TransformRange).ElementView.NumElements;
    (pFVar39->TransformRange).ElementView.FirstElementPtr =
         (pFVar30->TransformRange).ElementView.FirstElementPtr;
    (pFVar39->TransformRange).ElementView.BytesBetweenElements = iVar3;
    (pFVar39->TransformRange).ElementView.NumElements = iVar6;
    uVar5 = *(undefined4 *)&(pFVar30->TransformRange).field_0x14;
    lVar26 = (pFVar30->TransformRange)._padding_;
    (pFVar39->TransformRange).NumElements = (pFVar30->TransformRange).NumElements;
    *(undefined4 *)&(pFVar39->TransformRange).field_0x14 = uVar5;
    (pFVar39->TransformRange)._padding_ = lVar26;
    dVar2 = (pFVar30->TransformRange).StubValue.Rotation.XY.m128d_f64[1];
    (pFVar39->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
         (pFVar30->TransformRange).StubValue.Rotation.XY.m128d_f64[0];
    (pFVar39->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pFVar30->TransformRange).StubValue.Rotation.ZW.m128d_f64[1];
    (pFVar39->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] =
         (pFVar30->TransformRange).StubValue.Rotation.ZW.m128d_f64[0];
    (pFVar39->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pFVar30->TransformRange).StubValue.Translation.XY.m128d_f64[1];
    (pFVar39->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
         (pFVar30->TransformRange).StubValue.Translation.XY.m128d_f64[0];
    (pFVar39->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pFVar30->TransformRange).StubValue.Translation.ZW.m128d_f64[1];
    (pFVar39->TransformRange).StubValue.Translation.ZW.m128d_f64[0] =
         (pFVar30->TransformRange).StubValue.Translation.ZW.m128d_f64[0];
    (pFVar39->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pFVar30->TransformRange).StubValue.Scale3D.XY.m128d_f64[1];
    (pFVar39->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
         (pFVar30->TransformRange).StubValue.Scale3D.XY.m128d_f64[0];
    (pFVar39->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pFVar30->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1];
    (pFVar39->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] =
         (pFVar30->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0];
    (pFVar39->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = dVar2;
    lVar41 = lVar41 + -1;
    pFVar29 = (FPCGPointValueRanges *)&pFVar30->DensityRange;
    pFVar20 = (FPCGPointValueRanges *)&pFVar39->DensityRange;
  } while (lVar41 != 0);
  uVar5 = *(undefined4 *)((longlong)&(pFVar30->DensityRange).ElementView.FirstElementPtr + 4);
  iVar3 = (pFVar30->DensityRange).ElementView.BytesBetweenElements;
  iVar6 = (pFVar30->DensityRange).ElementView.NumElements;
  local_724 = 0;
  *(undefined4 *)&(pFVar39->DensityRange).ElementView.FirstElementPtr =
       *(undefined4 *)&(pFVar30->DensityRange).ElementView.FirstElementPtr;
  *(undefined4 *)((longlong)&(pFVar39->DensityRange).ElementView.FirstElementPtr + 4) = uVar5;
  (pFVar39->DensityRange).ElementView.BytesBetweenElements = iVar3;
  (pFVar39->DensityRange).ElementView.NumElements = iVar6;
  pUVar49 = pUVar46;
  if (0 < param_3) {
    local_708 = 0;
    local_720 = 0;
    local_700 = 0;
    do {
      lVar41 = local_700;
      lVar26 = local_708;
      iVar3 = (this->PartitionDataIndices).ArrayNum;
      uVar45 = (uint)pUVar46;
      uVar23 = 0;
      if ((int)uVar45 < iVar3) {
        uVar23 = ~uVar45 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (local_738 = local_720, local_730 = (longlong)iVar3,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar47 = -1;
      uVar23 = *(uint *)((this->PartitionDataIndices).AllocatorInstance.Data + lVar41);
      lVar41 = (longlong)(int)uVar23;
      if (uVar23 != 0xffffffff) {
        iVar3 = (this->Weights).ArrayNum;
        uVar24 = 0;
        if ((int)uVar45 < iVar3) {
          uVar24 = ~uVar45 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (local_738 = local_720, local_730 = (longlong)iVar3,
           bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = (this->AttributeSetPartition).PartitionData.ArrayNum;
        dVar2 = *(double *)((this->Weights).AllocatorInstance.Data + lVar26);
        uVar42 = 0;
        uVar24 = 0;
        uVar40 = 0;
        uVar25 = uVar40;
        if ((int)uVar23 < iVar3) {
          uVar25 = ~uVar23 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (local_738 = lVar41, local_730 = (longlong)iVar3,
           bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar43 = (this->AttributeSetPartition).PartitionData.AllocatorInstance.Data;
        if (*(int *)(pFVar43 + lVar41 * 0x30 + 0x18) == 1) {
LAB_149bbc3d9:
          uVar23 = 0;
          if ((int)uVar24 < *(int *)(pFVar43 + lVar41 * 0x30 + 0x18)) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if (uVar23 == 0) {
            local_738 = (longlong)(int)uVar24;
            local_730 = (longlong)*(int *)(pFVar43 + lVar41 * 0x30 + 0x18);
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          lVar47 = *(longlong *)
                    (*(longlong *)(pFVar43 + lVar41 * 0x30 + 0x10) + (longlong)(int)uVar24 * 8);
          this = local_710;
        }
        else {
          if (1 < *(int *)(pFVar43 + lVar41 * 0x30 + 0x18)) {
            uVar48 = uVar42;
            if (0 < *(int *)(pFVar43 + lVar41 * 0x30 + 0x28)) {
              do {
                uVar40 = (uint)uVar42;
                uVar23 = 0;
                if ((int)uVar40 < *(int *)(pFVar43 + lVar41 * 0x30 + 0x28)) {
                  uVar23 = ~uVar40 >> 0x1f;
                }
                if (uVar23 == 0) {
                  local_738 = (longlong)(int)uVar40;
                  local_730 = (longlong)*(int *)(pFVar43 + lVar41 * 0x30 + 0x28);
                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar22) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                if (dVar2 < *(double *)(uVar48 + *(longlong *)(pFVar43 + lVar41 * 0x30 + 0x20)))
                break;
                uVar40 = uVar40 + 1;
                uVar42 = (ulonglong)uVar40;
                uVar48 = uVar48 + 8;
              } while ((int)uVar40 < *(int *)(pFVar43 + lVar41 * 0x30 + 0x28));
            }
            uVar24 = *(int *)(pFVar43 + lVar41 * 0x30 + 0x28) - 1U;
            if ((int)uVar40 < (int)(*(int *)(pFVar43 + lVar41 * 0x30 + 0x28) - 1U)) {
              uVar24 = uVar40;
            }
            if (uVar24 != 0xffffffff) goto LAB_149bbc3d9;
          }
          lVar47 = -1;
          this = local_710;
        }
      }
      if ((this->Settings->bKeepUnmatched != false) || (lVar47 != -1)) {
        uVar23 = (uint)pUVar49;
        if (local_3c8.TransformRange.NumElements != 0) {
          pTVar31 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_238.TransformRange,uVar45);
          dVar2 = (pTVar31->Rotation).XY.m128d_f64[0];
          dVar7 = (pTVar31->Rotation).XY.m128d_f64[1];
          dVar8 = (pTVar31->Rotation).ZW.m128d_f64[0];
          dVar9 = (pTVar31->Rotation).ZW.m128d_f64[1];
          dVar10 = (pTVar31->Translation).XY.m128d_f64[0];
          dVar11 = (pTVar31->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar31->Translation).ZW.m128d_f64[0];
          dVar13 = (pTVar31->Translation).ZW.m128d_f64[1];
          dVar14 = (pTVar31->Scale3D).XY.m128d_f64[0];
          dVar15 = (pTVar31->Scale3D).XY.m128d_f64[1];
          dVar16 = (pTVar31->Scale3D).ZW.m128d_f64[0];
          dVar17 = (pTVar31->Scale3D).ZW.m128d_f64[1];
          pTVar31 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3c8.TransformRange,uVar23);
          (pTVar31->Rotation).XY.m128d_f64[0] = dVar2;
          (pTVar31->Rotation).XY.m128d_f64[1] = dVar7;
          (pTVar31->Rotation).ZW.m128d_f64[0] = dVar8;
          (pTVar31->Rotation).ZW.m128d_f64[1] = dVar9;
          (pTVar31->Translation).XY.m128d_f64[0] = dVar10;
          (pTVar31->Translation).XY.m128d_f64[1] = dVar11;
          (pTVar31->Translation).ZW.m128d_f64[0] = dVar12;
          (pTVar31->Translation).ZW.m128d_f64[1] = dVar13;
          (pTVar31->Scale3D).XY.m128d_f64[0] = dVar14;
          (pTVar31->Scale3D).XY.m128d_f64[1] = dVar15;
          (pTVar31->Scale3D).ZW.m128d_f64[0] = dVar16;
          (pTVar31->Scale3D).ZW.m128d_f64[1] = dVar17;
        }
        if (local_3c8.DensityRange.NumElements != 0) {
          pfVar32 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_238.DensityRange,uVar45);
          fVar1 = *pfVar32;
          pfVar32 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3c8.DensityRange,uVar23);
          *pfVar32 = fVar1;
        }
        if (local_3c8.SteepnessRange.NumElements != 0) {
          pfVar32 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_238.SteepnessRange,uVar45);
          fVar1 = *pfVar32;
          pfVar32 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3c8.SteepnessRange,uVar23);
          *pfVar32 = fVar1;
        }
        if (local_3c8.BoundsMinRange.NumElements != 0) {
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_238.BoundsMinRange,uVar45);
          dVar7 = (pTVar33->field0_0x0)._s_0.X;
          dVar8 = (pTVar33->field0_0x0)._s_0.Y;
          dVar2 = (pTVar33->field0_0x0)._s_0.Z;
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3c8.BoundsMinRange,uVar23);
          (pTVar33->field0_0x0)._s_0.X = dVar7;
          (pTVar33->field0_0x0)._s_0.Y = dVar8;
          (pTVar33->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3c8.BoundsMaxRange.NumElements != 0) {
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_238.BoundsMaxRange,uVar45);
          dVar7 = (pTVar33->field0_0x0)._s_0.X;
          dVar8 = (pTVar33->field0_0x0)._s_0.Y;
          dVar2 = (pTVar33->field0_0x0)._s_0.Z;
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3c8.BoundsMaxRange,uVar23);
          (pTVar33->field0_0x0)._s_0.X = dVar7;
          (pTVar33->field0_0x0)._s_0.Y = dVar8;
          (pTVar33->field0_0x0)._s_0.Z = dVar2;
        }
        if (local_3c8.ColorRange.NumElements != 0) {
          pTVar34 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_238.ColorRange,uVar45);
          dVar2 = (pTVar34->field0_0x0)._s_0.X;
          dVar7 = (pTVar34->field0_0x0)._s_0.Y;
          dVar8 = (pTVar34->field0_0x0)._s_0.Z;
          dVar9 = (pTVar34->field0_0x0)._s_0.W;
          pTVar34 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3c8.ColorRange,uVar23);
          (pTVar34->field0_0x0)._s_0.X = dVar2;
          (pTVar34->field0_0x0)._s_0.Y = dVar7;
          (pTVar34->field0_0x0)._s_0.Z = dVar8;
          (pTVar34->field0_0x0)._s_0.W = dVar9;
        }
        if (local_3c8.SeedRange.NumElements != 0) {
          piVar35 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_238.SeedRange,uVar45);
          iVar3 = *piVar35;
          piVar35 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3c8.SeedRange,uVar23);
          *piVar35 = iVar3;
        }
        if (local_3c8.MetadataEntryRange.NumElements != 0) {
          plVar36 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_238.MetadataEntryRange,uVar45);
          lVar37 = *plVar36;
          plVar36 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3c8.MetadataEntryRange,uVar23);
          *plVar36 = lVar37;
        }
        uVar40 = ~uVar23 >> 0x1f;
        uVar25 = 0;
        uVar24 = uVar25;
        if ((int)uVar23 < local_3c8.MetadataEntryRange.NumElements) {
          uVar24 = uVar40;
        }
        if (uVar24 == 0) {
          local_738 = (longlong)(int)uVar23;
          local_730 = (longlong)local_3c8.MetadataEntryRange.NumElements;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar22) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (lVar47 != -1) {
          uVar24 = uVar25;
          if ((int)uVar23 < local_3c8.MetadataEntryRange.NumElements) {
            uVar24 = uVar40;
          }
          if (uVar24 == 0) {
            local_738 = (longlong)(int)uVar23;
            local_730 = (longlong)local_3c8.MetadataEntryRange.NumElements;
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar22) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (uVar23 == (int)uVar23 % local_3c8.MetadataEntryRange.ElementView.NumElements) {
            plVar36 = (long64 *)
                      ((longlong)local_3c8.MetadataEntryRange.ElementView.BytesBetweenElements *
                       (longlong)
                       ((int)uVar23 % local_3c8.MetadataEntryRange.ElementView.NumElements) +
                      (longlong)local_3c8.MetadataEntryRange.ElementView.FirstElementPtr);
          }
          else {
            plVar36 = &local_3c8.MetadataEntryRange.StubValue;
          }
          lVar37 = UPCGMetadata::AddEntry(local_6f8,*plVar36);
          uVar24 = uVar25;
          if ((int)uVar23 < local_3c8.MetadataEntryRange.NumElements) {
            uVar24 = uVar40;
          }
          if (uVar24 == 0) {
            local_738 = (longlong)(int)uVar23;
            local_730 = (longlong)local_3c8.MetadataEntryRange.NumElements;
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar22) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (uVar23 == (int)uVar23 % local_3c8.MetadataEntryRange.ElementView.NumElements) {
            plVar36 = (long64 *)
                      ((longlong)local_3c8.MetadataEntryRange.ElementView.BytesBetweenElements *
                       (longlong)
                       ((int)uVar23 % local_3c8.MetadataEntryRange.ElementView.NumElements) +
                      (longlong)local_3c8.MetadataEntryRange.ElementView.FirstElementPtr);
          }
          else {
            plVar36 = &local_3c8.MetadataEntryRange.StubValue;
          }
          *plVar36 = lVar37;
        }
        if ((int)uVar23 < local_3c8.MetadataEntryRange.NumElements) {
          uVar25 = uVar40;
        }
        if (uVar25 == 0) {
          local_738 = (longlong)(int)uVar23;
          local_730 = (longlong)local_3c8.MetadataEntryRange.NumElements;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar22) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar19 = local_710;
        if (uVar23 == (int)uVar23 % local_3c8.MetadataEntryRange.ElementView.NumElements) {
          plVar36 = (long64 *)
                    ((longlong)local_3c8.MetadataEntryRange.ElementView.BytesBetweenElements *
                     (longlong)((int)uVar23 % local_3c8.MetadataEntryRange.ElementView.NumElements)
                    + (longlong)local_3c8.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar36 = &local_3c8.MetadataEntryRange.StubValue;
        }
        lVar37 = *plVar36;
        pUVar49 = (UPCGBasePointData *)(ulonglong)(uVar23 + 1);
        if (lVar47 != -1) {
          pFVar43 = (this->AttributesToSet).AllocatorInstance.Data;
          iVar3 = (this->AttributesToSet).ArrayNum;
          pFVar44 = pFVar43 + (longlong)iVar3 * 0x10;
          while( true ) {
            if ((pFVar19->AttributesToSet).ArrayNum != iVar3) {
              local_728[0] = 0;
              `TCheckedPointerIterator<TTuple<FPCGMetadataAttributeBase_const_*,FPCGMetadataAttributeBase_*>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_728);
            }
            this = local_710;
            uVar45 = local_724;
            if (pFVar43 == pFVar44) break;
            (**(code **)(**(longlong **)(pFVar43 + 8) + 0x58))
                      (*(longlong **)(pFVar43 + 8),lVar37,*(undefined8 *)pFVar43,lVar47);
            pFVar43 = pFVar43 + 0x10;
          }
        }
      }
      local_724 = uVar45 + 1;
      pUVar46 = (UPCGBasePointData *)(ulonglong)local_724;
      local_720 = local_720 + 1;
      local_708 = local_708 + 8;
      local_700 = local_700 + 4;
      param_2 = local_6f0;
    } while ((int)local_724 < local_718);
  }
  (**(code **)(param_2->_padding_ + 0x490))(param_2,pUVar49,1);
  return;
}

// FinalizeInternal<UPCGData> @ 149bbc910

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

void __thiscall
FPCGMatchAndSetPartition::FinalizeInternal<UPCGData>
          (FPCGMatchAndSetPartition *this,UPCGData *param_1,UPCGData *param_2,int param_3)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPCGMetadata *pUVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong local_3b0;
  undefined1 local_3a8 [4];
  int local_3a4;
  longlong local_3a0;
  long64 local_398;
  UPCGMetadata *local_390;
  UPCGMetadata *local_388;
  FConstPCGPointValueRanges local_378;
  FPCGPointValueRanges local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  local_3a4 = param_3;
  pUVar6 = (UPCGMetadata *)(**(code **)(param_1->_padding_ + 800))(param_1);
  local_388 = pUVar6;
  local_390 = (UPCGMetadata *)(**(code **)(param_2->_padding_ + 0x328))(param_2);
  if (((pUVar6 == (UPCGMetadata *)0x0) || (local_390 == (UPCGMetadata *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMetadata && OutMetadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                         ,0x341,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_378);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_1e8);
  uVar15 = 0;
  if (0 < param_3) {
    lVar13 = 0;
    lVar14 = 0;
    local_3a0 = 0;
    do {
      lVar9 = local_3a0;
      iVar2 = (this->PartitionDataIndices).ArrayNum;
      uVar7 = 0;
      if ((int)uVar15 < iVar2) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_3b8 = lVar13, local_3b0 = (longlong)iVar2,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = -1;
      uVar7 = *(uint *)((this->PartitionDataIndices).AllocatorInstance.Data + lVar14);
      lVar10 = (longlong)(int)uVar7;
      if (uVar7 != 0xffffffff) {
        iVar2 = (this->Weights).ArrayNum;
        uVar5 = 0;
        if ((int)uVar15 < iVar2) {
          uVar5 = ~uVar15 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (local_3b8 = lVar13, local_3b0 = (longlong)iVar2,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = (this->AttributeSetPartition).PartitionData.ArrayNum;
        dVar1 = *(double *)((this->Weights).AllocatorInstance.Data + lVar9);
        uVar5 = 0;
        if ((int)uVar7 < iVar2) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (local_3b8 = lVar10, local_3b0 = (longlong)iVar2,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = (this->AttributeSetPartition).PartitionData.AllocatorInstance.Data;
        if (*(int *)(pFVar8 + lVar10 * 0x30 + 0x18) == 1) {
          uVar5 = 0;
LAB_149bbcb82:
          uVar7 = 0;
          if ((int)uVar5 < *(int *)(pFVar8 + lVar10 * 0x30 + 0x18)) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_3b8 = (longlong)(int)uVar5;
            local_3b0 = (longlong)*(int *)(pFVar8 + lVar10 * 0x30 + 0x18);
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar12 = *(longlong *)
                    (*(longlong *)(pFVar8 + lVar10 * 0x30 + 0x10) + (longlong)(int)uVar5 * 8);
          lVar9 = local_3a0;
        }
        else {
          if (1 < *(int *)(pFVar8 + lVar10 * 0x30 + 0x18)) {
            uVar7 = 0;
            if (0 < *(int *)(pFVar8 + lVar10 * 0x30 + 0x28)) {
              lVar9 = 0;
              do {
                uVar5 = 0;
                if ((int)uVar7 < *(int *)(pFVar8 + lVar10 * 0x30 + 0x28)) {
                  uVar5 = ~uVar7 >> 0x1f;
                }
                if (uVar5 == 0) {
                  local_3b8 = (longlong)(int)uVar7;
                  local_3b0 = (longlong)*(int *)(pFVar8 + lVar10 * 0x30 + 0x28);
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar4) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                if (dVar1 < *(double *)(*(longlong *)(pFVar8 + lVar10 * 0x30 + 0x20) + lVar9))
                break;
                uVar7 = uVar7 + 1;
                lVar9 = lVar9 + 8;
              } while ((int)uVar7 < *(int *)(pFVar8 + lVar10 * 0x30 + 0x28));
            }
            uVar5 = *(int *)(pFVar8 + lVar10 * 0x30 + 0x28) - 1U;
            if ((int)uVar7 < (int)(*(int *)(pFVar8 + lVar10 * 0x30 + 0x28) - 1U)) {
              uVar5 = uVar7;
            }
            if (uVar5 != 0xffffffff) goto LAB_149bbcb82;
          }
          lVar12 = -1;
          lVar9 = local_3a0;
        }
      }
      if ((this->Settings->bKeepUnmatched != false) || (lVar12 != -1)) {
        local_398 = UPCGMetadata::AddEntry(local_390,-1);
        UPCGMetadata::SetAttributes(local_390,lVar13,local_388,&local_398);
        if (lVar12 != -1) {
          iVar2 = (this->AttributesToSet).ArrayNum;
          pFVar8 = (this->AttributesToSet).AllocatorInstance.Data;
          pFVar11 = pFVar8 + (longlong)iVar2 * 0x10;
          while( true ) {
            if ((this->AttributesToSet).ArrayNum != iVar2) {
              local_3a8[0] = 0;
              `TCheckedPointerIterator<TTuple<FPCGMetadataAttributeBase_const_*,FPCGMetadataAttributeBase_*>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_3a8);
            }
            lVar9 = local_3a0;
            if (pFVar8 == pFVar11) break;
            (**(code **)(**(longlong **)(pFVar8 + 8) + 0x58))
                      (*(longlong **)(pFVar8 + 8),local_398,*(undefined8 *)pFVar8,lVar12);
            pFVar8 = pFVar8 + 0x10;
          }
        }
      }
      local_3a0 = lVar9 + 8;
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 4;
    } while ((int)uVar15 < local_3a4);
  }
  return;
}

// Initialize @ 149c281a0

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
FPCGMatchAndSetPartition::Initialize
          (FPCGMatchAndSetPartition *this,
          TMap<UPCGData_const_*,UPCGData_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>_>
          *param_1)

{
  undefined1 *this_00;
  TMap<UPCGData_const_*,UPCGData_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>_>
  *this_01;
  bool bVar1;
  bool bVar2;
  int iVar3;
  EPCGMatchMaxDistanceMode EVar4;
  UPCGMatchAndSetAttributesSettings *pUVar5;
  FPCGAttributePropertySelector *pFVar6;
  FName FVar7;
  FName FVar8;
  undefined1 local_a8 [48];
  int local_78;
  undefined1 local_68 [48];
  int local_38;
  
  if (this->Settings == (UPCGMatchAndSetAttributesSettings *)0x0) {
    return false;
  }
  this_01 = &this->DataToMaxDistanceMap;
  if (this_01 != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->DataToMaxDistanceMap).field_0x38,
               (int *)&(this->DataToMaxDistanceMap).field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar3 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,UPCGData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,UPCGData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,(ForAnyElementType *)this_01,
               (int *)&(this->DataToMaxDistanceMap).field_0x8,
               (int *)&(this->DataToMaxDistanceMap).field_0xc);
    this_00 = &(this->DataToMaxDistanceMap).field_0x10;
    *(undefined4 *)&(this->DataToMaxDistanceMap).field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&(this->DataToMaxDistanceMap).field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (this_00 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_01,*(void **)param_1,(longlong)iVar3 * 0x18);
    }
  }
  pUVar5 = this->Settings;
  EVar4 = pUVar5->MaxDistanceMode;
  bVar1 = pUVar5->bFindNearest;
  pFVar6 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::CopyAndFixLast
                     (&pUVar5->WeightAttribute,(FPCGAttributePropertyInputSelector *)local_68,
                      (UPCGData *)this->ParamData);
  FVar7 = FPCGAttributePropertySelector::GetName(pFVar6);
  FVar7 = *(FName *)FVar7;
  bVar2 = this->Settings->bUseWeightAttribute;
  pFVar6 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::CopyAndFixLast
                     (&this->Settings->MatchAttribute,(FPCGAttributePropertyInputSelector *)local_a8
                      ,(UPCGData *)this->ParamData);
  FVar8 = FPCGAttributePropertySelector::GetName(pFVar6);
  FPCGAttributeSetPartition::Initialize
            (&this->AttributeSetPartition,this->Context,this->ParamData,
             this->Settings->bMatchAttributes,*(FName *)FVar8,bVar2,FVar7,bVar1,EVar4,
             &pUVar5->MaxDistanceForNearestMatch);
  DestructItems<FString,int>((FString *)local_a8._40_8_,local_78);
  if ((FString *)local_a8._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_a8._40_8_);
  }
  DestructItems<FString,int>((FString *)local_68._40_8_,local_38);
  if ((FString *)local_68._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_68._40_8_);
  }
  return (this->AttributeSetPartition).bIsValid;
}

// InitializeForData @ 149c29940

/* WARNING: Type propagation algorithm not settling */
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
FPCGMatchAndSetPartition::InitializeForData
          (FPCGMatchAndSetPartition *this,UPCGData *param_1,UPCGData *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  IPCGAttributeAccessor *pIVar4;
  FPCGContext *pFVar5;
  FScriptContainerElement *pFVar6;
  FPCGContext *this_00;
  code *pcVar7;
  FPCGMetadataDomainID FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar13;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar14;
  UPCGMetadata *pUVar15;
  FString *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  UPCGMetadata *this_01;
  FPCGMetadataAttributeBase *pFVar19;
  FText *pFVar20;
  UClass *pUVar21;
  long64 lVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  uint uVar24;
  FPCGAttributePropertyInputSelector *this_02;
  undefined1 *puVar25;
  ulonglong uVar26;
  UPCGData *pUVar27;
  UPCGData *pUVar28;
  UPCGData *pUVar29;
  undefined8 *puVar30;
  uint local_res10;
  FName local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_640;
  FPCGMetadataAttributeBase *local_630;
  longlong local_628;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_620;
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  FName local_5f0;
  FName local_5e8;
  FPCGAttributePropertySelector local_5d8;
  FPCGAttributePropertySelector local_598;
  FString local_558;
  FString local_548;
  FText local_538;
  FText local_528;
  FString local_518;
  FText local_508;
  FString local_4f8;
  FString local_4e8;
  FText local_4d8;
  FText local_4c8;
  FString local_4b8;
  FText local_4a8;
  FString local_498;
  FString local_488;
  FText local_478;
  FText local_468;
  FString local_458;
  FString local_448;
  FText local_438;
  FText local_428;
  FText local_418;
  FText local_408;
  FString local_3f8;
  FString local_3e8;
  FText local_3d8;
  FText local_3c8;
  FString local_3b8;
  FString local_3a8;
  FText local_398;
  FText local_388;
  FString local_378;
  FString local_368;
  FText local_358;
  FText local_348;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  FPCGAttributeIdentifier local_328;
  FName local_308;
  FPCGMetadataDomainID FStack_300;
  FPCGAttributeIdentifier local_2e8;
  FName local_2c8;
  FPCGMetadataDomainID FStack_2c0;
  FPCGAttributeIdentifier local_2a8;
  FName local_288;
  FPCGMetadataDomainID FStack_280;
  FPCGAttributeIdentifier local_268;
  FName local_248;
  FPCGMetadataDomainID FStack_240;
  FName local_230;
  FPCGMetadataDomainID FStack_228;
  FPCGAttributeIdentifier local_218;
  FName local_1f8;
  FPCGMetadataDomainID FStack_1f0;
  FPCGAttributeIdentifier local_1d8;
  FString local_1b8;
  FText local_1a8;
  FPCGAttributePropertySelector local_198;
  FPCGAttributePropertySelector local_158;
  undefined1 local_118 [80];
  FText local_c8;
  FTextFormat local_b8;
  FTextFormat local_a8;
  FTextFormat local_98;
  FTextFormat local_88;
  FTextFormat local_78;
  FTextFormat local_68;
  FText local_58;
  FText local_48;
  
  pUVar27 = (UPCGData *)0x0;
  if ((((param_1 == (UPCGData *)0x0) ||
       (lVar12 = (**(code **)(param_1->_padding_ + 800))(param_1), lVar12 == 0)) ||
      (param_2 == (UPCGData *)0x0)) ||
     (lVar12 = (**(code **)(param_2->_padding_ + 0x328))(param_2), lVar12 == 0)) {
    return false;
  }
  if (this->Settings->bMatchAttributes != false) {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              (&this->Settings->InputAttribute,(FPCGAttributePropertyInputSelector *)&local_598,
               param_1);
    TVar13 = PCGAttributeAccessorHelpers::CreateConstAccessor
                       ((UPCGData *)local_610,(FPCGAttributePropertySelector *)param_1,
                        SUB81(&local_598,0));
    TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>::
    operator=(&this->InputAttributeAccessor,
              (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
               *)TVar13.Ptr);
    if ((undefined8 *)local_610._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_610._0_8_)(local_610._0_8_,1);
    }
    TVar14 = PCGAttributeAccessorHelpers::CreateConstKeys
                       ((UPCGData *)(local_610 + 8),(FPCGAttributePropertySelector *)param_1);
    TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>::
    operator=(&this->InputAttributeKeys,
              (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
               *)TVar14.Ptr);
    if ((undefined8 *)local_610._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_610._8_8_)(local_610._8_8_,1);
    }
    if (((this->InputAttributeAccessor).Ptr == (IPCGAttributeAccessor *)0x0) ||
       ((this->InputAttributeKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        pFVar16 = FPCGAttributePropertySelector::ToString(&local_598,&local_1b8,false);
        FText::FromString(&local_1a8,pFVar16);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_528,L"PCGMatchAndSetAttributes",L"MissingAttribute",
                             L"Input data does not have the input attribute \'{0}\'.");
        pFVar18 = FTextFormat::FTextFormat(&local_a8,pFVar17,Default);
        pFVar17 = FText::Format<FText>(&local_538,pFVar18,&local_1a8);
        FText::ToString(pFVar17);
        if (this->Context != (FPCGContext *)0x0) {
          pUVar27 = (UPCGData *)&DAT_00000001;
          FPCGContext::GetTaskName(this->Context,&local_548);
        }
        if (this->Context != (FPCGContext *)0x0) {
          pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 2);
          FPCGContext::GetExecutionSourceName(this->Context,&local_558);
        }
        UE::Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_FPCGMatchAndSetPartition::InitializeForData(UPCGData_const*___ptr64,UPCGData*___ptr64)___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((((ulonglong)pUVar27 & 2) != 0) &&
           (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xfffffffd),
           local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_558.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pUVar27 & 1) != 0) &&
           (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
        if (local_538.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_538.TextData.Reference + 0x10))();
        }
        if (local_528.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
        }
      }
      DestructItems<FString,int>
                ((FString *)local_598.ExtraNames.AllocatorInstance.Data,
                 local_598.ExtraNames.ArrayNum);
      if (local_598.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_598.ExtraNames.AllocatorInstance.Data);
      return false;
    }
    DestructItems<FString,int>
              ((FString *)local_598.ExtraNames.AllocatorInstance.Data,local_598.ExtraNames.ArrayNum)
    ;
    if (local_598.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.ExtraNames.AllocatorInstance.Data);
    }
  }
  uVar24 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
  if (*(int *)&(this->DataToMaxDistanceMap).field_0x8 !=
      *(int *)&(this->DataToMaxDistanceMap).field_0x34) {
    puVar25 = *(undefined1 **)&(this->DataToMaxDistanceMap).field_0x40;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(this->DataToMaxDistanceMap).field_0x38;
    }
    iVar11 = *(int *)(puVar25 +
                     (ulonglong)
                     (*(int *)&(this->DataToMaxDistanceMap).field_0x48 - 1U &
                     (uVar24 >> 0x10 ^ uVar24)) * 4);
    if (iVar11 != -1) {
      lVar12 = *(longlong *)&this->DataToMaxDistanceMap;
      do {
        if (*(UPCGData **)(lVar12 + (longlong)iVar11 * 0x18) == param_1) {
          if ((iVar11 != -1) && (lVar12 = lVar12 + (longlong)iVar11 * 0x18, lVar12 != 0)) {
            this_02 = &this->Settings->MaxDistanceInputAttribute;
            puVar30 = (undefined8 *)(lVar12 + 8);
            if (puVar30 == (undefined8 *)0x0) goto LAB_149c29b07;
            FPCGAttributePropertyInputSelector::CopyAndFixLast
                      (this_02,(FPCGAttributePropertyInputSelector *)local_118,(UPCGData *)*puVar30)
            ;
            pUVar28 = (UPCGData *)*puVar30;
            pUVar29 = (UPCGData *)local_118;
            goto LAB_149c29b1c;
          }
          break;
        }
        iVar11 = *(int *)(lVar12 + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  this_02 = &this->Settings->MaxDistanceInputAttribute;
LAB_149c29b07:
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            (this_02,(FPCGAttributePropertyInputSelector *)local_118,(UPCGData *)0x0);
  pUVar28 = pUVar27;
  pUVar29 = pUVar27;
LAB_149c29b1c:
  bVar9 = FPCGAttributeSetPartition::InitializeForData
                    (&this->AttributeSetPartition,this->Context,pUVar28,
                     (FPCGAttributePropertyInputSelector *)pUVar29);
  if (!bVar9) {
    bVar9 = false;
    goto LAB_149c2ac14;
  }
  if (this->Settings->bUseInputWeightAttribute == false) {
LAB_149c29e04:
    (this->AttributesToSet).ArrayNum = 0;
    if ((this->AttributesToSet).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->AttributesToSet).AllocatorInstance,0,
                 &(this->AttributesToSet).ArrayMax);
    }
    local_640.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_640.ArrayNum = 0;
    local_640.ArrayMax = 0;
    local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_620.ArrayNum = 0;
    local_620.ArrayMax = 0;
    pUVar15 = (UPCGMetadata *)(**(code **)(this->ParamData->_padding_ + 800))();
    UPCGMetadata::GetAttributes(pUVar15,&local_640,&local_620);
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              (&this->Settings->MatchAttribute,(FPCGAttributePropertyInputSelector *)&local_158,
               (UPCGData *)this->ParamData);
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              (&this->Settings->WeightAttribute,(FPCGAttributePropertyInputSelector *)&local_198,
               (UPCGData *)this->ParamData);
    bVar9 = FPCGAttributePropertySelector::IsBasicAttribute(&local_158);
    if ((!bVar9) || (bVar9 = FPCGAttributePropertySelector::IsBasicAttribute(&local_198), !bVar9)) {
      pFVar5 = this->Context;
      pFVar16 = FPCGAttributePropertySelector::ToString(&local_198,&local_458,false);
      FText::FromString(&local_438,pFVar16);
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      pFVar16 = FPCGAttributePropertySelector::ToString(&local_158,&local_448,false);
      FText::FromString(&local_428,pFVar16);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_408,L"PCGMatchAndSetAttributes",L"NotBasicAttribute",
                           L"Match attribute {0} and/or weight attribute {1} are not basic attributes. Not yet supported, we will only use the basic attribute."
                          );
      pFVar18 = FTextFormat::FTextFormat(&local_68,pFVar17,Default);
      pFVar17 = FText::Format<FText,FText>(&local_418,pFVar18,&local_428,&local_438);
      PCGLog::LogWarningOnGraph(pFVar17,pFVar5);
      if (local_418.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
      }
      if (local_408.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
      }
    }
    FPCGAttributePropertySelector::GetName(&local_158);
    FPCGAttributePropertySelector::GetName(&local_198);
    pUVar15 = (UPCGMetadata *)(**(code **)(param_2->_padding_ + 0x328))(param_2);
    if ((pUVar15 == (UPCGMetadata *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutMetadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                           ,0x2a6,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    uVar26 = local_640._8_8_ & 0xffffffff;
    local_res10 = 0;
    if (0 < local_640.ArrayNum) {
      local_628 = 0;
      do {
        uVar24 = 0;
        if ((int)local_res10 < (int)uVar26) {
          uVar24 = ~local_res10 >> 0x1f;
        }
        if (uVar24 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          uVar26 = local_640._8_8_ & 0xffffffff;
        }
        local_res20 = *(FName *)(local_640.AllocatorInstance.Data + local_628);
        if (((this->Settings->bMatchAttributes == false) || (local_res20 != local_5f0)) &&
           ((this->Settings->bUseWeightAttribute == false || (local_res20 != local_5e8)))) {
          this_01 = (UPCGMetadata *)(**(code **)(this->ParamData->_padding_ + 800))();
          local_308 = local_res20;
          FStack_300 = PCGMetadataDomainID::Default;
          FVar8 = FStack_300;
          FStack_300._0_8_ = PCGMetadataDomainID::Default._0_8_;
          local_2e8.Name = local_res20;
          local_2e8.MetadataDomain.Flag = FStack_300.Flag;
          local_2e8.MetadataDomain._1_3_ = FStack_300._1_3_;
          local_2e8.MetadataDomain.CustomFlag = FStack_300.CustomFlag;
          local_2e8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          FStack_300 = FVar8;
          local_630 = UPCGMetadata::GetConstAttribute(this_01,&local_2e8);
          local_2c8 = local_res20;
          FStack_2c0 = PCGMetadataDomainID::Default;
          FVar8 = FStack_2c0;
          FStack_2c0._0_8_ = PCGMetadataDomainID::Default._0_8_;
          local_2a8.Name = local_res20;
          local_2a8.MetadataDomain.Flag = FStack_2c0.Flag;
          local_2a8.MetadataDomain._1_3_ = FStack_2c0._1_3_;
          local_2a8.MetadataDomain.CustomFlag = FStack_2c0.CustomFlag;
          local_2a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          FStack_2c0 = FVar8;
          pFVar19 = UPCGMetadata::GetMutableAttribute(pUVar15,&local_2a8);
          if (pFVar19 == (FPCGMetadataAttributeBase *)0x0) {
LAB_149c2a704:
            FStack_1f0 = PCGMetadataDomainID::Default;
            FVar8 = FStack_1f0;
            local_1f8 = local_res20;
            FStack_1f0._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_1d8.Name = local_res20;
            local_1d8.MetadataDomain.Flag = FStack_1f0.Flag;
            local_1d8.MetadataDomain._1_3_ = FStack_1f0._1_3_;
            local_1d8.MetadataDomain.CustomFlag = FStack_1f0.CustomFlag;
            local_1d8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_1f0 = FVar8;
            pFVar19 = UPCGMetadata::CopyAttribute(pUVar15,local_630,&local_1d8,false,false,false);
            if (pFVar19 == (FPCGMetadataAttributeBase *)0x0) {
              if ((byte)LogPCG._0_1_ < 3) goto LAB_149c2ab6f;
              pFVar17 = FText::FromName(&local_48,&local_res20);
              pFVar20 = FText::AsLocalizable_Advanced_LocText
                                  (&local_348,L"PCGMatchAndSetAttributes",L"UnableToCreateAttribute"
                                   ,L"Unable to create attribute \'{0}\' on output data.");
              pFVar18 = FTextFormat::FTextFormat(&local_98,pFVar20,Default);
              pFVar17 = FText::Format<FText>(&local_358,pFVar18,pFVar17);
              FText::ToString(pFVar17);
              pFVar5 = this->Context;
              if (pFVar5 != (FPCGContext *)0x0) {
                FPCGContext::GetTaskName(pFVar5,&local_368);
              }
              this_00 = this->Context;
              if (this_00 != (FPCGContext *)0x0) {
                FPCGContext::GetExecutionSourceName(this_00,&local_378);
              }
              UE::Logging::Private::BasicLog<3>
                        (&`public:_bool___cdecl_FPCGMatchAndSetPartition::InitializeForData(UPCGData_const*___ptr64,UPCGData*___ptr64)___ptr64'
                          ::__l158::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if ((this_00 != (FPCGContext *)0x0) &&
                 (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_378.Data.AllocatorInstance.Data);
              }
              if ((pFVar5 != (FPCGContext *)0x0) &&
                 (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_368.Data.AllocatorInstance.Data);
              }
              if (local_358.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
              }
              if (local_348.TextData.Reference == (ITextData *)0x0) goto LAB_149c2ab6f;
              (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
              bVar9 = false;
              goto LAB_149c2abb0;
            }
          }
          else {
            uVar1 = pFVar19->TypeId;
            uVar2 = local_630->TypeId;
            if (uVar1 != uVar2) {
              if ((this->Settings->bMatchAttributes != false) &&
                 (this->Settings->bKeepUnmatched != false)) {
                if (uVar1 < 0xf) {
                  if (uVar2 < 0xf) {
                    if (PCG::Private::BroadcastableTypes.Values[uVar1][uVar2] == false)
                    goto LAB_149c2a4d7;
LAB_149c2a4f3:
                    FStack_280 = PCGMetadataDomainID::Default;
                    FVar8 = FStack_280;
                    local_288 = local_res20;
                    FStack_280._0_8_ = PCGMetadataDomainID::Default._0_8_;
                    local_268.Name = local_res20;
                    local_268.MetadataDomain.Flag = FStack_280.Flag;
                    local_268.MetadataDomain._1_3_ = FStack_280._1_3_;
                    local_268.MetadataDomain.CustomFlag = FStack_280.CustomFlag;
                    local_268.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                    FStack_280 = FVar8;
                    bVar9 = UPCGMetadata::ChangeAttributeType(pUVar15,&local_268,uVar2);
                    if (bVar9) {
                      local_248 = local_res20;
                      FStack_240 = PCGMetadataDomainID::Default;
                      FVar8 = FStack_240;
                      FStack_240._0_8_ = PCGMetadataDomainID::Default._0_8_;
                      local_328.Name = local_res20;
                      local_328.MetadataDomain.Flag = FStack_240.Flag;
                      local_328.MetadataDomain._1_3_ = FStack_240._1_3_;
                      local_328.MetadataDomain.CustomFlag = FStack_240.CustomFlag;
                      local_328.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                      FStack_240 = FVar8;
                      pFVar19 = UPCGMetadata::GetMutableAttribute(pUVar15,&local_328);
                      if ((this->Settings->bWarnOnAttributeCast != false) &&
                         (2 < (byte)LogPCG._0_1_)) {
                        pFVar17 = FText::FromName(&local_58,&local_res20);
                        pFVar20 = FText::AsLocalizable_Advanced_LocText
                                            (&local_3c8,L"PCGMatchAndSetAttributes",
                                             L"OperationRequiredAttributeCast",
                                             L"Attribute \'{0}\' was cast to the match data type because of the \'Keep Unmatched\' option. This warning can be turned off in the settings."
                                            );
                        pFVar18 = FTextFormat::FTextFormat
                                            ((FTextFormat *)(local_118 + 0x40),pFVar20,Default);
                        pFVar17 = FText::Format<FText>(&local_3d8,pFVar18,pFVar17);
                        FText::ToString(pFVar17);
                        if (this->Context != (FPCGContext *)0x0) {
                          pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 0x40);
                          FPCGContext::GetTaskName(this->Context,&local_3e8);
                        }
                        if (this->Context != (FPCGContext *)0x0) {
                          pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 0x80);
                          FPCGContext::GetExecutionSourceName(this->Context,&local_3f8);
                        }
                        UE::Logging::Private::BasicLog<3>
                                  (&`public:_bool___cdecl_FPCGMatchAndSetPartition::InitializeForData(UPCGData_const*___ptr64,UPCGData*___ptr64)___ptr64'
                                    ::__l111::LOG_Static,(FLogCategoryBase *)&LogPCG);
                        if (((char)pUVar27 < '\0') &&
                           (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xffffff7f),
                           local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                        }
                        if ((((ulonglong)pUVar27 & 0x40) != 0) &&
                           (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xffffffbf),
                           local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                        }
                        if (local_3d8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
                        }
                        if (local_3c8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
                        }
                      }
                      goto LAB_149c2a6ff;
                    }
                    goto LAB_149c2a966;
                  }
                }
                else if ((uVar2 < 0xf) && (uVar1 < 0xf)) {
LAB_149c2a4d7:
                  if (PCG::Private::ConstructibleTypes.Values[uVar2][uVar1] != false)
                  goto LAB_149c2a4f3;
                }
                if (2 < (byte)LogPCG._0_1_) {
                  pFVar17 = FText::FromName(&local_c8,&local_res20);
                  pFVar20 = FText::AsLocalizable_Advanced_LocText
                                      (&local_388,L"PCGMatchAndSetAttributes",
                                       L"CannotReuseDifferentTypedAttribute",
                                       L"Attribute \'{0}\' on output data has a different type vs. the match data, and will reset the values of \'Keep Unmatched\' data."
                                      );
                  pFVar18 = FTextFormat::FTextFormat(&local_b8,pFVar20,Default);
                  pFVar17 = FText::Format<FText>(&local_398,pFVar18,pFVar17);
                  FText::ToString(pFVar17);
                  if (this->Context != (FPCGContext *)0x0) {
                    pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 0x100);
                    FPCGContext::GetTaskName(this->Context,&local_3a8);
                  }
                  if (this->Context != (FPCGContext *)0x0) {
                    pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 0x200);
                    FPCGContext::GetExecutionSourceName(this->Context,&local_3b8);
                  }
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)
                             &`public:_bool___cdecl_FPCGMatchAndSetPartition::InitializeForData(UPCGData_const*___ptr64,FPCGMatchAndSetPartition*___ptr64)___ptr64'
                              ::D::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (((uint)pUVar27 >> 9 != 0) &&
                     (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xfffffdff),
                     local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                  }
                  if ((((uint)pUVar27 >> 8 & 1) != 0) &&
                     (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xfffffeff),
                     local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
                  }
                  if (local_398.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
                  }
                  if (local_388.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
                  }
                }
              }
LAB_149c2a966:
              local_230 = local_res20;
              FStack_228 = PCGMetadataDomainID::Default;
              FVar8 = FStack_228;
              FStack_228._0_8_ = PCGMetadataDomainID::Default._0_8_;
              local_218.Name = local_res20;
              local_218.MetadataDomain.Flag = FStack_228.Flag;
              local_218.MetadataDomain._1_3_ = FStack_228._1_3_;
              local_218.MetadataDomain.CustomFlag = FStack_228.CustomFlag;
              local_218.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
              FStack_228 = FVar8;
              UPCGMetadata::DeleteAttribute(pUVar15,&local_218);
              goto LAB_149c2a704;
            }
LAB_149c2a6ff:
            if (pFVar19 == (FPCGMetadataAttributeBase *)0x0) goto LAB_149c2a704;
          }
          iVar11 = (this->AttributesToSet).ArrayNum;
          if (iVar11 == (this->AttributesToSet).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->AttributesToSet).AllocatorInstance,
                                &(this->AttributesToSet).ArrayMax);
          }
          (this->AttributesToSet).ArrayNum = iVar11 + 1;
          pFVar6 = (this->AttributesToSet).AllocatorInstance.Data;
          *(FPCGMetadataAttributeBase **)(pFVar6 + (longlong)iVar11 * 0x10) = local_630;
          *(FPCGMetadataAttributeBase **)(pFVar6 + (longlong)iVar11 * 0x10 + 8) = pFVar19;
          uVar26 = local_640._8_8_ & 0xffffffff;
        }
        local_628 = local_628 + 8;
        local_res10 = local_res10 + 1;
      } while ((int)local_res10 < (int)uVar26);
    }
    pUVar21 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    iVar11 = (int)pUVar21->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar21->_padding_)) {
      pUVar15 = (UPCGMetadata *)(**(code **)(param_1->_padding_ + 800))(param_1);
      if (pUVar15 == (UPCGMetadata *)0x0) {
        iVar11 = 0;
      }
      else {
        lVar22 = UPCGMetadata::GetItemCountForChild(pUVar15);
        iVar11 = (int)lVar22;
      }
    }
    else {
      iVar11 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
    }
    pTVar23 = FPCGAttributeSetPartition::GetMatchingPartitionDataIndices
                        (&this->AttributeSetPartition,&local_338,&this->InputAttributeAccessor,
                         &this->InputAttributeKeys,iVar11);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->PartitionDataIndices,pTVar23);
    if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.AllocatorInstance.Data);
    }
    if ((this->PartitionDataIndices).ArrayNum == iVar11) {
      pUVar21 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      iVar3 = (int)pUVar21->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar21->_padding_)) {
        param_1 = (UPCGData *)0x0;
      }
      SetupWeights(this,iVar11,(UPCGBasePointData *)param_1);
      bVar9 = (this->Weights).ArrayNum == iVar11;
    }
    else {
LAB_149c2ab6f:
      bVar9 = false;
    }
LAB_149c2abb0:
    DestructItems<FString,int>
              ((FString *)local_198.ExtraNames.AllocatorInstance.Data,local_198.ExtraNames.ArrayNum)
    ;
    if (local_198.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_158.ExtraNames.AllocatorInstance.Data,local_158.ExtraNames.ArrayNum)
    ;
    if (local_158.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.ExtraNames.AllocatorInstance.Data);
    }
    if (local_620.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.AllocatorInstance.Data);
    }
    if (local_640.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.AllocatorInstance.Data);
    }
  }
  else {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              (&this->Settings->InputWeightAttribute,
               (FPCGAttributePropertyInputSelector *)&local_5d8,param_1);
    TVar13 = PCGAttributeAccessorHelpers::CreateConstAccessor
                       ((UPCGData *)local_600,(FPCGAttributePropertySelector *)param_1,
                        SUB81(&local_5d8,0));
    TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>::
    operator=(&this->InputWeightAccessor,
              (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
               *)TVar13.Ptr);
    if ((undefined8 *)local_600._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_600._0_8_)(local_600._0_8_,1);
    }
    if ((this->InputAttributeKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0) {
      TVar14 = PCGAttributeAccessorHelpers::CreateConstKeys
                         ((UPCGData *)(local_600 + 8),(FPCGAttributePropertySelector *)param_1);
      TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
      ::operator=(&this->InputAttributeKeys,
                  (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                   *)TVar14.Ptr);
      if ((undefined8 *)local_600._8_8_ != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)local_600._8_8_)(local_600._8_8_,1);
      }
    }
    pIVar4 = (this->InputWeightAccessor).Ptr;
    if ((pIVar4 == (IPCGAttributeAccessor *)0x0) ||
       ((this->InputAttributeKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        pFVar16 = FPCGAttributePropertySelector::ToString(&local_5d8,&local_4b8,false);
        FText::FromString(&local_4a8,pFVar16);
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_468,L"PCGMatchAndSetAttributes",L"MissingWeightAttribute",
                             L"Input data does not have the input weight attribute \'{0}\'.");
        pFVar18 = FTextFormat::FTextFormat(&local_78,pFVar17,Default);
        pFVar17 = FText::Format<FText>(&local_478,pFVar18,&local_4a8);
        FText::ToString(pFVar17);
        if (this->Context != (FPCGContext *)0x0) {
          pUVar27 = (UPCGData *)&DAT_00000004;
          FPCGContext::GetTaskName(this->Context,&local_488);
        }
        if (this->Context != (FPCGContext *)0x0) {
          pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 8);
          FPCGContext::GetExecutionSourceName(this->Context,&local_498);
        }
        UE::Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_FPCGMatchAndSetPartition::InitializeForData(UPCGData_const*___ptr64,UPCGData*___ptr64)___ptr64'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((((ulonglong)pUVar27 & 8) != 0) &&
           (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xfffffff7),
           local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pUVar27 & 4) != 0) &&
           (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_488.Data.AllocatorInstance.Data);
        }
        if (local_478.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
        }
LAB_149c2a498:
        if (local_468.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      uVar1 = pIVar4->UnderlyingType;
      if ((uVar1 < 0xff) && (uVar1 < 2)) {
        DestructItems<FString,int>
                  ((FString *)local_5d8.ExtraNames.AllocatorInstance.Data,
                   local_5d8.ExtraNames.ArrayNum);
        if (local_5d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d8.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_149c29e04;
      }
      if (1 < (byte)LogPCG._0_1_) {
        pFVar16 = FPCGAttributePropertySelector::ToString(&local_5d8,&local_518,false);
        FText::FromString(&local_508,pFVar16);
        if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Data.AllocatorInstance.Data);
        }
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_4c8,L"PCGMatchAndSetAttributes",
                             L"InvalidInputWeightAttributeType",
                             L"Input weight attribute \'{0}\' does not have the proper type (float or double)."
                            );
        pFVar18 = FTextFormat::FTextFormat(&local_88,pFVar17,Default);
        pFVar17 = FText::Format<FText>(&local_4d8,pFVar18,&local_508);
        FText::ToString(pFVar17);
        if (this->Context != (FPCGContext *)0x0) {
          pUVar27 = (UPCGData *)&DAT_00000010;
          FPCGContext::GetTaskName(this->Context,&local_4e8);
        }
        if (this->Context != (FPCGContext *)0x0) {
          pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 | 0x20);
          FPCGContext::GetExecutionSourceName(this->Context,&local_4f8);
        }
        UE::Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_FPCGMatchAndSetPartition::InitializeForData(UPCGData_const*___ptr64,UPCGData*___ptr64)___ptr64'
                    ::__l63::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((((ulonglong)pUVar27 & 0x20) != 0) &&
           (pUVar27 = (UPCGData *)(ulonglong)((uint)pUVar27 & 0xffffffdf),
           local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pUVar27 & 0x10) != 0) &&
           (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
        }
        local_468.TextData.Reference = local_4c8.TextData.Reference;
        if (local_4d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
          local_468.TextData.Reference = local_4c8.TextData.Reference;
        }
        goto LAB_149c2a498;
      }
    }
    DestructItems<FString,int>
              ((FString *)local_5d8.ExtraNames.AllocatorInstance.Data,local_5d8.ExtraNames.ArrayNum)
    ;
    if (local_5d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.ExtraNames.AllocatorInstance.Data);
    }
    bVar9 = false;
  }
LAB_149c2ac14:
  DestructItems<FString,int>((FString *)local_118._40_8_,local_118._48_4_);
  if ((FString *)local_118._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_118._40_8_);
  }
  return bVar9;
}

// SetupWeights @ 149c33f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGMatchAndSetPartition::SetupWeights
          (FPCGMatchAndSetPartition *this,int param_1,UPCGBasePointData *param_2)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  IPCGAttributeAccessor *this_01;
  IPCGAttributeAccessorKeys *pIVar2;
  UPCGMatchAndSetAttributesSettings *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FRandomStream FVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [4];
  uint local_resc;
  undefined1 local_res18 [16];
  double local_88;
  double local_80;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<double,int> local_68;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  
  uVar12 = (ulonglong)(uint)param_1;
  if (((param_2 != (UPCGBasePointData *)0x0) &&
      (iVar8 = (**(code **)(param_2->_padding_ + 0x488))(param_2), param_1 != iVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PointData || NumElements == PointData->GetNumPoints()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                         ,0x2f8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = &this->Weights;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12);
  }
  piVar1 = &(this->Weights).ArrayMax;
  (this->Weights).ArrayNum = 0;
  if ((this->Weights).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&this_00->AllocatorInstance,0,piVar1);
  }
  if (((this->InputWeightAccessor).Ptr == (IPCGAttributeAccessor *)0x0) ||
     ((this->InputAttributeKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
    if (param_2 == (UPCGBasePointData *)0x0) {
      PCGHelpers::GetRandomStreamFromSeed
                ((int)local_res8,(UPCGSettings *)0x0,(IPCGGraphExecutionSource *)this->Settings);
      fVar6 = __real_3f800000;
      if (0 < param_1) {
        do {
          pFVar4 = (this_00->AllocatorInstance).Data;
          local_resc = local_resc * 0xbb38435 + 0x3619636b;
          local_80 = (double)((float)(local_resc >> 9 | 0x3f800000) - fVar6);
          if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (this->Weights).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&this_00->AllocatorInstance,piVar1);
          }
          (this->Weights).ArrayNum = iVar8 + 1;
          *(double *)((this_00->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_80;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      (**(code **)(param_2->_padding_ + 0x530))(param_2,&local_58);
      fVar6 = __real_3f800000;
      uVar11 = 0;
      if (0 < local_48) {
        do {
          pUVar3 = this->Settings;
          uVar10 = 0;
          if ((int)uVar11 < local_48) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar9 = PCGHelpers::GetRandomStreamFromSeed
                            ((int)local_res18,
                             (UPCGSettings *)
                             (ulonglong)
                             *(uint *)((longlong)((int)uVar11 % local_4c) * (longlong)local_50 +
                                      local_58),(IPCGGraphExecutionSource *)pUVar3);
          uVar10 = *(int *)((longlong)FVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)((longlong)FVar9 + 4) = uVar10;
          pFVar4 = (this_00->AllocatorInstance).Data;
          local_88 = (double)((float)(uVar10 >> 9 | 0x3f800000) - fVar6);
          if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (this->Weights).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&this_00->AllocatorInstance,piVar1);
          }
          (this->Weights).ArrayNum = iVar8 + 1;
          uVar11 = uVar11 + 1;
          *(double *)((this_00->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_88;
        } while ((int)uVar11 < local_48);
      }
    }
  }
  else {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,param_1,Default);
    local_78 = (this_00->AllocatorInstance).Data;
    iStack_70 = (this->Weights).ArrayNum;
    this_01 = (this->InputWeightAccessor).Ptr;
    pIVar2 = (this->InputAttributeKeys).Ptr;
    if ((iStack_70 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_68._12_4_ = uStack_6c;
    local_68.ArrayNum = iStack_70;
    local_68.DataPtr = (double *)local_78;
    IPCGAttributeAccessor::GetRange<double>(this_01,&local_68,0,pIVar2,AllowConstructible);
  }
  return;
}

