// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// FLandscapeProxySectionInfo @ 145f7a400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeProxySectionInfo * __thiscall
FLandscapeProxySectionInfo::FLandscapeProxySectionInfo
          (FLandscapeProxySectionInfo *this,UWorld *param_1,FGuid *param_2,TIntPoint<int> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TTransform<double> *param_7,int param_8,schar param_9,uint param_10,uint param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLandscapeSectionInfo__6B_;
  *(undefined4 *)&this->_padding_ = 0x80000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80000000;
  *(uint *)&this->_padding_ = param_11;
  *(uint *)((longlong)&this->_padding_ + 4) = param_10;
  this->_padding_ = (longlong)param_3->field0_0x0;
  this->_padding_ = (longlong)param_1->Scene;
  this->_padding_ = (longlong)&___7FLandscapeProxySectionInfo__6B_;
  this->ProxyLOD = param_9;
  this->ComponentResolution = param_8;
  *(undefined2 *)&this->_padding_ = 0;
  auVar31 = *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64;
  dVar8 = (param_4->field0_0x0)._s_0.Z * (param_7->Scale3D).ZW.m128d_f64[0];
  dVar9 = (param_7->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar10 = (param_7->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_7->Scale3D).XY.m128d_f64[0] * (param_4->field0_0x0)._s_0.X;
  dVar4 = (param_7->Scale3D).XY.m128d_f64[1] * (param_4->field0_0x0)._s_0.Y;
  uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar13 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar13,auVar31,2);
  auVar37._8_4_ = SUB84(dVar4,0);
  auVar37._0_8_ = dVar3;
  auVar37._12_4_ = uVar36;
  dVar2 = auVar31._0_8_;
  auVar38._0_8_ = auVar37._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar3;
  auVar38._8_8_ = dVar8 * auVar13._8_8_ - dVar2 * dVar4;
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = uVar36;
  auVar5._8_4_ = SUB84(dVar9,0);
  auVar5._0_8_ = dVar8;
  auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = blendpd(auVar12,auVar5,2);
  auVar14._0_8_ = auVar13._0_8_ * dVar2 - auVar22._0_8_ * dVar8;
  auVar14._8_8_ = auVar13._8_8_ * auVar31._8_8_ - auVar22._8_8_ * dVar9;
  auVar13 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar38,auVar14,2);
  dVar9 = auVar38._8_8_ + auVar38._8_8_;
  dVar1 = auVar14._0_8_ + auVar14._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar39._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar39._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar29._8_4_ = SUB84(dVar1,0);
  auVar29._0_8_ = dVar9;
  auVar29._12_4_ = uVar36;
  auVar23._8_4_ = SUB84(dVar1,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = uVar36;
  auVar22 = blendpd(auVar23,auVar39,2);
  auVar30._0_8_ = auVar29._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar9;
  auVar30._8_8_ = auVar39._0_8_ * auVar13._8_8_ - dVar2 * dVar1;
  auVar13 = blendpd(auVar13,auVar31,2);
  dVar11 = (param_7->Translation).ZW.m128d_f64[0];
  auVar15._8_4_ = SUB84(auVar30._8_8_,0);
  auVar15._0_8_ = auVar30._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  auVar24._0_8_ = auVar22._0_8_ * dVar2 - auVar13._0_8_ * auVar39._0_8_;
  auVar24._8_8_ = auVar22._8_8_ * auVar31._8_8_ - auVar13._8_8_ * auVar39._8_8_;
  dVar2 = dVar1 * dVar10 + dVar4 + auVar24._0_8_ + (param_7->Translation).XY.m128d_f64[1];
  auVar31._8_4_ = SUB84(dVar2,0);
  auVar31._0_8_ = dVar9 * dVar10 + dVar3 + auVar15._8_8_ + (param_7->Translation).XY.m128d_f64[0];
  auVar31._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(this->CenterWorldSpace).field0_0x0 = auVar31;
  auVar31 = blendpd(auVar30,auVar24,2);
  (this->CenterWorldSpace).field0_0x0._s_0.Z =
       auVar39._0_8_ * dVar10 + dVar8 + auVar31._0_8_ + dVar11;
  auVar31 = *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64;
  dVar8 = (param_5->field0_0x0)._s_0.Z * (param_7->Scale3D).ZW.m128d_f64[0];
  dVar9 = (param_7->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar10 = (param_7->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_7->Scale3D).XY.m128d_f64[0] * (param_5->field0_0x0)._s_0.X;
  dVar4 = (param_7->Scale3D).XY.m128d_f64[1] * (param_5->field0_0x0)._s_0.Y;
  uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar13 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar13,auVar31,2);
  auVar40._8_4_ = SUB84(dVar4,0);
  auVar40._0_8_ = dVar3;
  auVar40._12_4_ = uVar36;
  dVar2 = auVar31._0_8_;
  auVar41._0_8_ = auVar40._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar3;
  auVar41._8_8_ = dVar8 * auVar13._8_8_ - dVar2 * dVar4;
  auVar16._8_4_ = SUB84(dVar4,0);
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar36;
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = dVar8;
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = blendpd(auVar16,auVar6,2);
  auVar17._0_8_ = auVar13._0_8_ * dVar2 - auVar22._0_8_ * dVar8;
  auVar17._8_8_ = auVar13._8_8_ * auVar31._8_8_ - auVar22._8_8_ * dVar9;
  auVar13 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar41,auVar17,2);
  auVar42._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar42._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  dVar9 = auVar41._8_8_ + auVar41._8_8_;
  dVar1 = auVar17._0_8_ + auVar17._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar32._8_4_ = SUB84(dVar1,0);
  auVar32._0_8_ = dVar9;
  auVar32._12_4_ = uVar36;
  auVar25._8_4_ = SUB84(dVar1,0);
  auVar25._0_8_ = dVar9;
  auVar25._12_4_ = uVar36;
  auVar22 = blendpd(auVar25,auVar42,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar9;
  auVar33._8_8_ = auVar42._0_8_ * auVar13._8_8_ - dVar2 * dVar1;
  auVar13 = blendpd(auVar13,auVar31,2);
  auVar18._8_4_ = SUB84(auVar33._8_8_,0);
  auVar18._0_8_ = auVar33._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar26._0_8_ = auVar22._0_8_ * dVar2 - auVar13._0_8_ * auVar42._0_8_;
  auVar26._8_8_ = auVar22._8_8_ * auVar31._8_8_ - auVar13._8_8_ * auVar42._8_8_;
  dVar2 = dVar1 * dVar10 + dVar4 + auVar26._0_8_;
  auVar31 = blendpd(auVar33,auVar26,2);
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar9 * dVar10 + dVar3 + auVar18._8_8_;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(this->XVectorWorldSpace).field0_0x0 = auVar13;
  (this->XVectorWorldSpace).field0_0x0._s_0.Z = auVar42._0_8_ * dVar10 + dVar8 + auVar31._0_8_;
  auVar31 = *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64;
  dVar8 = (param_5->field0_0x0)._s_0.Z * (param_7->Scale3D).ZW.m128d_f64[0];
  dVar9 = (param_7->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar10 = (param_7->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_7->Scale3D).XY.m128d_f64[0] * (param_5->field0_0x0)._s_0.X;
  dVar4 = (param_7->Scale3D).XY.m128d_f64[1] * (param_5->field0_0x0)._s_0.Y;
  uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar13 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar43._8_4_ = SUB84(dVar4,0);
  auVar43._0_8_ = dVar3;
  auVar43._12_4_ = uVar36;
  dVar2 = auVar31._0_8_;
  auVar22 = blendpd(auVar13,auVar31,2);
  auVar44._0_8_ = auVar43._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar3;
  auVar44._8_8_ = dVar8 * auVar13._8_8_ - dVar2 * dVar4;
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = uVar36;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = blendpd(auVar19,auVar7,2);
  auVar20._0_8_ = auVar13._0_8_ * dVar2 - auVar22._0_8_ * dVar8;
  auVar20._8_8_ = auVar13._8_8_ * auVar31._8_8_ - auVar22._8_8_ * dVar9;
  auVar22 = blendpd(auVar44,auVar20,2);
  auVar13 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar45._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar45._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  dVar9 = auVar44._8_8_ + auVar44._8_8_;
  dVar1 = auVar20._0_8_ + auVar20._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar34._8_4_ = SUB84(dVar1,0);
  auVar34._0_8_ = dVar9;
  auVar34._12_4_ = uVar36;
  auVar27._8_4_ = SUB84(dVar1,0);
  auVar27._0_8_ = dVar9;
  auVar27._12_4_ = uVar36;
  auVar22 = blendpd(auVar27,auVar45,2);
  auVar35._0_8_ = auVar34._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar9;
  auVar35._8_8_ = auVar45._0_8_ * auVar13._8_8_ - dVar2 * dVar1;
  auVar21._8_4_ = SUB84(auVar35._8_8_,0);
  auVar21._0_8_ = auVar35._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar13 = blendpd(auVar13,auVar31,2);
  auVar28._0_8_ = auVar22._0_8_ * dVar2 - auVar13._0_8_ * auVar45._0_8_;
  auVar28._8_8_ = auVar22._8_8_ * auVar31._8_8_ - auVar13._8_8_ * auVar45._8_8_;
  auVar31 = blendpd(auVar35,auVar28,2);
  dVar2 = dVar1 * dVar10 + dVar4 + auVar28._0_8_;
  auVar22._8_4_ = SUB84(dVar2,0);
  auVar22._0_8_ = dVar9 * dVar10 + dVar3 + auVar21._8_8_;
  auVar22._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(this->YVectorWorldSpace).field0_0x0 = auVar22;
  (this->YVectorWorldSpace).field0_0x0._s_0.Z = auVar45._0_8_ * dVar10 + dVar8 + auVar31._0_8_;
  return this;
}

// ComputeLODBias @ 145f86030

float __thiscall FLandscapeProxySectionInfo::ComputeLODBias(FLandscapeProxySectionInfo *this)

{
  return 0.0;
}

// ComputeLODForView @ 145f86290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FLandscapeProxySectionInfo::ComputeLODForView(FLandscapeProxySectionInfo *this,FSceneView *param_1)

{
  return (float)(int)this->ProxyLOD;
}

// GetComponentResolution @ 145f8e930

int __thiscall FLandscapeProxySectionInfo::GetComponentResolution(FLandscapeProxySectionInfo *this)

{
  return this->ComponentResolution;
}

// GetPrimitiveSceneInfo @ 145f93750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfo * __thiscall
FLandscapeProxySectionInfo::GetPrimitiveSceneInfo(FLandscapeProxySectionInfo *this)

{
  return (FPrimitiveSceneInfo *)0x0;
}

// GetSectionBoundsAndLocalToWorld @ 145f93dd0

void __thiscall
FLandscapeProxySectionInfo::GetSectionBoundsAndLocalToWorld
          (FLandscapeProxySectionInfo *this,TBoxSphereBounds<double,double> *param_1,
          TMatrix<double> *param_2)

{
  double dVar1;
  
  (param_1->Origin).field0_0x0._s_0.X = 0.0;
  (param_1->Origin).field0_0x0._s_0.Y = 0.0;
  (param_1->Origin).field0_0x0._s_0.Z = 0.0;
  (param_1->BoxExtent).field0_0x0._s_0.X = 0.0;
  (param_1->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (param_1->BoxExtent).field0_0x0._s_0.Z = 0.0;
  param_1->SphereRadius = 0.0;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  param_2->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  param_2->M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  param_2->M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  param_2->M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  param_2->M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  param_2->M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  param_2->M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  param_2->M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  param_2->M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  param_2->M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  param_2->M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  param_2->M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  param_2->M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  param_2->M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  param_2->M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  param_2->M[3][3] = dVar1;
  return;
}

// GetSectionCenterAndVectors @ 145f94140

void __thiscall
FLandscapeProxySectionInfo::GetSectionCenterAndVectors
          (FLandscapeProxySectionInfo *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  
  dVar1 = (this->CenterWorldSpace).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->CenterWorldSpace).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->CenterWorldSpace).field0_0x0._s_0.Z;
  dVar1 = (this->XVectorWorldSpace).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (this->XVectorWorldSpace).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (this->XVectorWorldSpace).field0_0x0._s_0.Z;
  dVar1 = (this->YVectorWorldSpace).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (this->YVectorWorldSpace).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (this->YVectorWorldSpace).field0_0x0._s_0.Z;
  return;
}

// GetSectionPriority @ 145f94440

int __thiscall FLandscapeProxySectionInfo::GetSectionPriority(FLandscapeProxySectionInfo *this)

{
  return (int)this->ProxyLOD;
}

// OnRenderCoordsChanged @ 145f9a220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeProxySectionInfo::OnRenderCoordsChanged
          (FLandscapeProxySectionInfo *this,FRHICommandListBase *param_1)

{
  return;
}

// RayTracingNotifyViewDeleted @ 145f9cf10

void __thiscall
FLandscapeProxySectionInfo::RayTracingNotifyViewDeleted
          (FLandscapeProxySectionInfo *this,uint param_1)

{
  return;
}

