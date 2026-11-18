// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 28

// DrawLine<UE::Math::TVector<double>_> @ 14962f8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4,bool param_5)

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
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar11 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_2->field0_0x0)._s_0.X;
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_2->field0_0x0)._s_0.Y;
  uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar12,auVar20,2);
  auVar30._8_4_ = SUB84(dVar5,0);
  auVar30._0_8_ = dVar4;
  auVar30._12_4_ = uVar29;
  dVar7 = (param_2->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar9 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar3 = auVar20._0_8_;
  auVar31._0_8_ = auVar30._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
  auVar31._8_8_ = dVar7 * auVar12._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar29;
  auVar12._8_4_ = SUB84(dVar9,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar12 = blendpd(auVar19,auVar12,2);
  dVar1 = auVar20._8_8_;
  auVar13._0_8_ = auVar12._0_8_ * dVar3 - auVar18._0_8_ * dVar7;
  auVar13._8_8_ = auVar12._8_8_ * dVar1 - auVar18._8_8_ * dVar9;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar31,auVar13,2);
  auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  dVar9 = auVar31._8_8_ + auVar31._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar25._8_4_ = SUB84(dVar2,0);
  auVar25._0_8_ = dVar9;
  auVar25._12_4_ = uVar29;
  auVar21._8_4_ = SUB84(dVar2,0);
  auVar21._0_8_ = dVar9;
  auVar21._12_4_ = uVar29;
  auVar18 = blendpd(auVar21,auVar32,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar26._8_8_ = auVar32._0_8_ * auVar12._8_8_ - dVar3 * dVar2;
  auVar12 = blendpd(auVar12,auVar20,2);
  auVar14._8_4_ = SUB84(auVar26._8_8_,0);
  auVar14._0_8_ = auVar26._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  dVar8 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar10 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar22._0_8_ = auVar18._0_8_ * dVar3 - auVar12._0_8_ * auVar32._0_8_;
  auVar22._8_8_ = auVar18._8_8_ * dVar1 - auVar12._8_8_ * auVar32._8_8_;
  dVar2 = dVar2 * dVar11 + dVar5 + auVar22._0_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[1];
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar6 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar26,auVar22,2);
  local_88._8_4_ = SUB84(dVar2,0);
  local_88._0_8_ =
       dVar9 * dVar11 + dVar4 + auVar14._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_88._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_78 = auVar32._0_8_ * dVar11 + dVar7 + auVar18._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar33._8_4_ = SUB84(dVar6,0);
  auVar33._0_8_ = dVar5;
  auVar33._12_4_ = uVar29;
  auVar34._0_8_ = auVar33._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
  auVar34._8_8_ = dVar8 * auVar12._8_8_ - dVar3 * dVar6;
  auVar15._8_4_ = SUB84(dVar6,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = uVar29;
  auVar18._8_4_ = SUB84(dVar10,0);
  auVar18._0_8_ = dVar8;
  auVar18._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar12 = blendpd(auVar15,auVar18,2);
  auVar16._0_8_ = auVar12._0_8_ * dVar3 - auVar19._0_8_ * dVar8;
  auVar16._8_8_ = auVar12._8_8_ * dVar1 - auVar19._8_8_ * dVar10;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar34,auVar16,2);
  dVar9 = auVar34._8_8_ + auVar34._8_8_;
  dVar2 = auVar16._0_8_ + auVar16._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar35._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar35._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar27._8_4_ = SUB84(dVar2,0);
  auVar27._0_8_ = dVar9;
  auVar27._12_4_ = uVar29;
  auVar23._8_4_ = SUB84(dVar2,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = uVar29;
  auVar18 = blendpd(auVar23,auVar35,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar28._8_8_ = auVar35._0_8_ * auVar12._8_8_ - dVar3 * dVar2;
  auVar17._8_4_ = SUB84(auVar28._8_8_,0);
  auVar17._0_8_ = auVar28._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
  auVar20 = blendpd(auVar12,auVar20,2);
  auVar24._0_8_ = auVar18._0_8_ * dVar3 - auVar20._0_8_ * auVar35._0_8_;
  auVar24._8_8_ = auVar18._8_8_ * dVar1 - auVar20._8_8_ * auVar35._8_8_;
  dVar3 = dVar2 * dVar1 + dVar6 + auVar24._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  auVar20 = blendpd(auVar28,auVar24,2);
  local_68._8_4_ = SUB84(dVar3,0);
  local_68._0_8_ =
       dVar9 * dVar1 + dVar5 + auVar17._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_58 = auVar35._0_8_ * dVar1 + dVar8 + auVar20._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  (**(code **)(this->_padding_ + 8))(this,local_68,local_88,auVar24._0_8_,param_4,param_5);
  return;
}

// FToolDataVisualizer @ 1496d2530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FToolDataVisualizer * __thiscall
FToolDataVisualizer::FToolDataVisualizer(FToolDataVisualizer *this,FToolDataVisualizer *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  
  this->_padding_ = (longlong)&___7FToolDataVisualizer__6B_;
  pTVar2 = &this->TransformStack;
  uVar4 = *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->LineColor).field0_0x0 = *(undefined8 *)&(param_1->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LineColor).field0_0x0 + 8) = uVar4;
  this->LineThickness = param_1->LineThickness;
  this->ArrowHeadSize = param_1->ArrowHeadSize;
  uVar4 = *(undefined8 *)((longlong)&(param_1->PointColor).field0_0x0 + 8);
  *(undefined8 *)&(this->PointColor).field0_0x0 = *(undefined8 *)&(param_1->PointColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->PointColor).field0_0x0 + 8) = uVar4;
  this->PointSize = param_1->PointSize;
  this->DepthBias = param_1->DepthBias;
  this->bDepthTested = param_1->bDepthTested;
  this->CurrentPDI = param_1->CurrentPDI;
  dVar5 = (param_1->CameraState).Position.field0_0x0._s_0.Y;
  (this->CameraState).Position.field0_0x0._s_0.X = (param_1->CameraState).Position.field0_0x0._s_0.X
  ;
  (this->CameraState).Position.field0_0x0._s_0.Y = dVar5;
  uVar4 = *(undefined8 *)&(param_1->CameraState).field_0x18;
  (this->CameraState).Position.field0_0x0._s_0.Z = (param_1->CameraState).Position.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->CameraState).field_0x18 = uVar4;
  dVar5 = (param_1->CameraState).Orientation.Y;
  (this->CameraState).Orientation.X = (param_1->CameraState).Orientation.X;
  (this->CameraState).Orientation.Y = dVar5;
  dVar5 = (param_1->CameraState).Orientation.W;
  (this->CameraState).Orientation.Z = (param_1->CameraState).Orientation.Z;
  (this->CameraState).Orientation.W = dVar5;
  fVar6 = (param_1->CameraState).OrthoWorldCoordinateWidth;
  fVar7 = (param_1->CameraState).AspectRatio;
  bVar8 = (param_1->CameraState).bIsOrthographic;
  bVar9 = (param_1->CameraState).bIsVR;
  uVar10 = *(undefined2 *)&(param_1->CameraState).field_0x4e;
  (this->CameraState).HorizontalFOVDegrees = (param_1->CameraState).HorizontalFOVDegrees;
  (this->CameraState).OrthoWorldCoordinateWidth = fVar6;
  (this->CameraState).AspectRatio = fVar7;
  (this->CameraState).bIsOrthographic = bVar8;
  (this->CameraState).bIsVR = bVar9;
  *(undefined2 *)&(this->CameraState).field_0x4e = uVar10;
  uVar4 = *(undefined8 *)&(param_1->CameraState).field_0x58;
  (this->CameraState).DPIScale = (param_1->CameraState).DPIScale;
  *(undefined8 *)&(this->CameraState).field_0x58 = uVar4;
  this->bHaveCameraState = param_1->bHaveCameraState;
  this->PDISizeScale = param_1->PDISizeScale;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TransformStack).ArrayMax;
  iVar3 = (param_1->TransformStack).ArrayNum;
  _Src = (param_1->TransformStack).AllocatorInstance.Data;
  (this->TransformStack).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
  }
  dVar5 = (param_1->TotalTransform).Rotation.XY.m128d_f64[1];
  (this->TotalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->TotalTransform).Rotation.XY.m128d_f64[0];
  (this->TotalTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->TotalTransform).Rotation.ZW.m128d_f64[1];
  (this->TotalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->TotalTransform).Rotation.ZW.m128d_f64[0];
  (this->TotalTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->TotalTransform).Translation.XY.m128d_f64[1];
  (this->TotalTransform).Translation.XY.m128d_f64[0] =
       (param_1->TotalTransform).Translation.XY.m128d_f64[0];
  (this->TotalTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->TotalTransform).Translation.ZW.m128d_f64[1];
  (this->TotalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->TotalTransform).Translation.ZW.m128d_f64[0];
  (this->TotalTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->TotalTransform).Scale3D.XY.m128d_f64[1];
  (this->TotalTransform).Scale3D.XY.m128d_f64[0] = (param_1->TotalTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->TotalTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->TotalTransform).Scale3D.ZW.m128d_f64[1];
  (this->TotalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->TotalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->TotalTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  return this;
}

// FToolDataVisualizer @ 1496d26d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FToolDataVisualizer * __thiscall FToolDataVisualizer::FToolDataVisualizer(FToolDataVisualizer *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  this->LineThickness = 1.0;
  this->ArrowHeadSize = 4.0;
  this->_padding_ = (longlong)&___7FToolDataVisualizer__6B_;
  this->PointSize = 1.0;
  this->DepthBias = 0.0;
  this->bDepthTested = true;
  this->CurrentPDI = (FPrimitiveDrawInterface *)0x0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  this->PDISizeScale = 1.0;
  piVar1 = &(this->TransformStack).ArrayMax;
  *piVar1 = 0;
  (this->TransformStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformStack).ArrayNum = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TotalTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TotalTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TotalTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TotalTransform).Scale3D.ZW.m128d_f64 = auVar9;
  (this->LineColor).field0_0x0._s_0.R = 0.95;
  (this->LineColor).field0_0x0._s_0.G = 0.05;
  (this->LineColor).field0_0x0._s_0.B = 0.05;
  (this->LineColor).field0_0x0._s_0.A = 1.0;
  (this->PointColor).field0_0x0._s_0.R = 0.95;
  (this->PointColor).field0_0x0._s_0.G = 0.05;
  (this->PointColor).field0_0x0._s_0.B = 0.05;
  (this->PointColor).field0_0x0._s_0.A = 1.0;
  (this->TransformStack).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->TransformStack).AllocatorInstance,0,piVar1);
  }
  *&(this->TotalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TotalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TotalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TotalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TotalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TotalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// ~FToolDataVisualizer @ 1496d42d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FToolDataVisualizer::~FToolDataVisualizer(FToolDataVisualizer *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FToolDataVisualizer__6B_;
  pFVar1 = (this->TransformStack).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator() @ 1496d4c20

void __thiscall
`FToolDataVisualizer::InternalDrawDirectionalArrow'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  pdVar2 = *(double **)this;
  local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * pdVar2[4] +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * *pdVar2 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * pdVar2[8] +
             pdVar2[0xc] * __real_3ff0000000000000;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * pdVar2[5] +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * pdVar2[1] +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * pdVar2[9] +
             pdVar2[0xd] * __real_3ff0000000000000;
  local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * pdVar2[6] +
             pdVar2[2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * pdVar2[10] +
             pdVar2[0xe] * __real_3ff0000000000000;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  local_58 = dVar5 * pdVar2[4] + dVar4 * *pdVar2 + dVar1 * pdVar2[8] +
             pdVar2[0xc] * __real_3ff0000000000000;
  local_50 = dVar5 * pdVar2[5] + dVar4 * pdVar2[1] + dVar1 * pdVar2[9] +
             pdVar2[0xd] * __real_3ff0000000000000;
  local_48 = dVar5 * pdVar2[6] + dVar4 * pdVar2[2] + dVar1 * pdVar2[10] +
             __real_3ff0000000000000 * pdVar2[0xe];
  lVar3 = *(longlong *)((longlong)this + 8);
  (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x30))
            (*(longlong **)(lVar3 + 0x48),&local_40,&local_58,*(undefined8 *)((longlong)this + 0x10)
             ,**(char **)((longlong)this + 0x18) == '\0',
             **(float **)((longlong)this + 0x20) * *(float *)(lVar3 + 0xb4),
             *(undefined4 *)(lVar3 + 0x3c),1);
  return;
}

// BeginFrame @ 1496d7400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::BeginFrame(FToolDataVisualizer *this,IToolsContextRenderAPI *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FPrimitiveDrawInterface *pFVar4;
  double *pdVar5;
  undefined1 local_68 [96];
  
  if (this->CurrentPDI != (FPrimitiveDrawInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPDI == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolDataVisualizer.cpp"
                       ,0x29,
                       L"FToolDataVisualizer::BeginFrame: matching EndFrame was not called last frame!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
  this->CurrentPDI = pFVar4;
  pdVar5 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_68);
  dVar2 = pdVar5[1];
  (this->CameraState).Position.field0_0x0._s_0.X = *pdVar5;
  (this->CameraState).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = pdVar5[3];
  (this->CameraState).Position.field0_0x0._s_0.Z = pdVar5[2];
  *(double *)&(this->CameraState).field_0x18 = dVar2;
  dVar2 = pdVar5[5];
  (this->CameraState).Orientation.X = pdVar5[4];
  (this->CameraState).Orientation.Y = dVar2;
  dVar2 = pdVar5[7];
  (this->CameraState).Orientation.Z = pdVar5[6];
  (this->CameraState).Orientation.W = dVar2;
  dVar2 = pdVar5[9];
  *(double *)&(this->CameraState).HorizontalFOVDegrees = pdVar5[8];
  *(double *)&(this->CameraState).AspectRatio = dVar2;
  dVar2 = pdVar5[0xb];
  (this->CameraState).DPIScale = pdVar5[10];
  *(double *)&(this->CameraState).field_0x58 = dVar2;
  this->bHaveCameraState = true;
  this->PDISizeScale = (this->CameraState).HorizontalFOVDegrees * __real_3c360b61;
  return;
}

// BeginFrame @ 1496d74d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::BeginFrame
          (FToolDataVisualizer *this,IToolsContextRenderAPI *param_1,FViewCameraState *param_2)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined2 uVar7;
  bool bVar8;
  FPrimitiveDrawInterface *pFVar9;
  
  if (this->CurrentPDI != (FPrimitiveDrawInterface *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPDI == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolDataVisualizer.cpp"
                       ,0x20,
                       L"FToolDataVisualizer::BeginFrame: matching EndFrame was not called last frame!"
                      );
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar9 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
  this->CurrentPDI = pFVar9;
  dVar2 = (param_2->Position).field0_0x0._s_0.Y;
  (this->CameraState).Position.field0_0x0._s_0.X = (param_2->Position).field0_0x0._s_0.X;
  (this->CameraState).Position.field0_0x0._s_0.Y = dVar2;
  uVar3 = *(undefined8 *)&param_2->field_0x18;
  (this->CameraState).Position.field0_0x0._s_0.Z = (param_2->Position).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->CameraState).field_0x18 = uVar3;
  dVar2 = (param_2->Orientation).Y;
  (this->CameraState).Orientation.X = (param_2->Orientation).X;
  (this->CameraState).Orientation.Y = dVar2;
  dVar2 = (param_2->Orientation).W;
  (this->CameraState).Orientation.Z = (param_2->Orientation).Z;
  (this->CameraState).Orientation.W = dVar2;
  fVar4 = param_2->OrthoWorldCoordinateWidth;
  fVar5 = param_2->AspectRatio;
  bVar8 = param_2->bIsOrthographic;
  bVar6 = param_2->bIsVR;
  uVar7 = *(undefined2 *)&param_2->field_0x4e;
  (this->CameraState).HorizontalFOVDegrees = param_2->HorizontalFOVDegrees;
  (this->CameraState).OrthoWorldCoordinateWidth = fVar4;
  (this->CameraState).AspectRatio = fVar5;
  (this->CameraState).bIsOrthographic = bVar8;
  (this->CameraState).bIsVR = bVar6;
  *(undefined2 *)&(this->CameraState).field_0x4e = uVar7;
  uVar3 = *(undefined8 *)&param_2->field_0x58;
  (this->CameraState).DPIScale = param_2->DPIScale;
  *(undefined8 *)&(this->CameraState).field_0x58 = uVar3;
  this->bHaveCameraState = true;
  this->PDISizeScale = (this->CameraState).HorizontalFOVDegrees * __real_3c360b61;
  return;
}

// EndFrame @ 1496db800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FToolDataVisualizer::EndFrame(FToolDataVisualizer *this)

{
  this->CurrentPDI = (FPrimitiveDrawInterface *)0x0;
  return;
}

// InternalDrawArc @ 1496df3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawArc
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,int param_4,float param_5,float param_6,FLinearColor *param_7,float param_8,bool param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TVector<double> local_78 [4];
  
  pTVar7 = TransformN(this,local_78,param_2);
  GizmoMath::MakeNormalPlaneBasis
            (pTVar7,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0);
  dVar9 = local_f0._s_0.X * local_f0._s_0.X + local_f0._s_0.Y * local_f0._s_0.Y +
          local_f0._s_0.Z * local_f0._s_0.Z;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_f0._s_0.X = local_f0._s_0.X * dVar9;
    local_f0._s_0.Y = local_f0._s_0.Y * dVar9;
    local_f0._s_0.Z = local_f0._s_0.Z * dVar9;
  }
  dVar9 = local_108._s_0.X * local_108._s_0.X + local_108._s_0.Y * local_108._s_0.Y +
          local_108._s_0.Z * local_108._s_0.Z;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_108._s_0.X = local_108._s_0.X * dVar9;
    local_108._s_0.Y = local_108._s_0.Y * dVar9;
    local_108._s_0.Z = local_108._s_0.Z * dVar9;
  }
  auVar16 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar4 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar5 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar6 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar2 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar8 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar10 = blendpd(auVar8,auVar16,2);
  auVar18._8_4_ = SUB84(dVar3,0);
  auVar18._0_8_ = dVar2;
  auVar18._12_4_ = uVar17;
  dVar9 = auVar16._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar2;
  auVar19._8_8_ = dVar4 * auVar8._8_8_ - dVar9 * dVar3;
  auVar20._8_4_ = SUB84(dVar3,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar17;
  auVar8._8_4_ = SUB84(dVar5,0);
  auVar8._0_8_ = dVar4;
  auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar8 = blendpd(auVar20,auVar8,2);
  auVar12._0_8_ = auVar8._0_8_ * dVar9 - auVar10._0_8_ * dVar4;
  auVar12._8_8_ = auVar8._8_8_ * auVar16._8_8_ - auVar10._8_8_ * dVar5;
  auVar8 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar20 = blendpd(auVar19,auVar12,2);
  dVar5 = auVar19._8_8_ + auVar19._8_8_;
  dVar1 = auVar12._0_8_ + auVar12._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar14._8_4_ = SUB84(dVar1,0);
  auVar14._0_8_ = dVar5;
  auVar14._12_4_ = uVar17;
  auVar11._8_4_ = SUB84(dVar1,0);
  auVar11._0_8_ = dVar5;
  auVar11._12_4_ = uVar17;
  auVar12 = blendpd(auVar11,auVar21,2);
  auVar20 = blendpd(auVar8,auVar16,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar5;
  auVar15._8_8_ = auVar21._0_8_ * auVar8._8_8_ - dVar9 * dVar1;
  auVar10._8_4_ = SUB84(auVar15._8_8_,0);
  auVar10._0_8_ = auVar15._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar13._0_8_ = auVar12._0_8_ * dVar9 - auVar20._0_8_ * auVar21._0_8_;
  auVar13._8_8_ = auVar12._8_8_ * auVar16._8_8_ - auVar20._8_8_ * auVar21._8_8_;
  local_b8._s_0.Z = local_108._s_0.Z;
  dVar9 = dVar1 * dVar6 + dVar3 + auVar13._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  local_b8._s_0.X = local_108._s_0.X;
  local_b8._s_0.Y = local_108._s_0.Y;
  auVar16 = blendpd(auVar15,auVar13,2);
  local_98._s_0.X = local_f0._s_0.X;
  local_98._s_0.Y = local_f0._s_0.Y;
  local_98._s_0.Z = local_f0._s_0.Z;
  local_d8._s_0.Z =
       auVar21._0_8_ * dVar6 + dVar4 + auVar16._0_8_ +
       (this->TotalTransform).Translation.ZW.m128d_f64[0];
  local_d8._8_4_ = SUB84(dVar9,0);
  local_d8._0_8_ =
       dVar5 * dVar6 + dVar2 + auVar10._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_78[0].field0_0x0._16_8_ = local_d8._s_0.Z;
  DrawArc(this->CurrentPDI,(TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_98._s_0,
          (TVector<double> *)&local_b8._s_0,param_5,param_6,(double)param_3,param_4,param_7,!param_9
         );
  return;
}

// InternalDrawCircle @ 1496df6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawCircle
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,int param_4,FLinearColor *param_5,float param_6,bool param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [4];
  
  pTVar7 = TransformN(this,(TVector<double> *)&local_a8._s_0,param_2);
  GizmoMath::MakeNormalPlaneBasis
            (pTVar7,(TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0);
  dVar9 = local_c0._s_0.X * local_c0._s_0.X + local_c0._s_0.Y * local_c0._s_0.Y +
          local_c0._s_0.Z * local_c0._s_0.Z;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_c0._s_0.X = local_c0._s_0.X * dVar9;
    local_c0._s_0.Y = local_c0._s_0.Y * dVar9;
    local_c0._s_0.Z = local_c0._s_0.Z * dVar9;
  }
  dVar9 = local_d8._s_0.X * local_d8._s_0.X + local_d8._s_0.Y * local_d8._s_0.Y +
          local_d8._s_0.Z * local_d8._s_0.Z;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_d8._s_0.X = local_d8._s_0.X * dVar9;
    local_d8._s_0.Y = local_d8._s_0.Y * dVar9;
    local_d8._s_0.Z = local_d8._s_0.Z * dVar9;
  }
  dVar4 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar5 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar6 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  local_88._s_0.X = local_d8._s_0.X;
  local_88._s_0.Y = local_d8._s_0.Y;
  local_88._s_0.Z = local_d8._s_0.Z;
  local_70[0]._s_0.X = local_c0._s_0.X;
  local_70[0]._s_0.Y = local_c0._s_0.Y;
  local_70[0]._s_0.Z = local_c0._s_0.Z;
  auVar16 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar2 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar8 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar10 = blendpd(auVar8,auVar16,2);
  auVar18._8_4_ = SUB84(dVar3,0);
  auVar18._0_8_ = dVar2;
  auVar18._12_4_ = uVar17;
  dVar9 = auVar16._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar2;
  auVar19._8_8_ = dVar4 * auVar8._8_8_ - dVar9 * dVar3;
  auVar20._8_4_ = SUB84(dVar3,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar17;
  auVar8._8_4_ = SUB84(dVar5,0);
  auVar8._0_8_ = dVar4;
  auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar8 = blendpd(auVar20,auVar8,2);
  auVar12._0_8_ = auVar8._0_8_ * dVar9 - auVar10._0_8_ * dVar4;
  auVar12._8_8_ = auVar8._8_8_ * auVar16._8_8_ - auVar10._8_8_ * dVar5;
  auVar8 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar20 = blendpd(auVar19,auVar12,2);
  dVar5 = auVar19._8_8_ + auVar19._8_8_;
  dVar1 = auVar12._0_8_ + auVar12._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar14._8_4_ = SUB84(dVar1,0);
  auVar14._0_8_ = dVar5;
  auVar14._12_4_ = uVar17;
  auVar11._8_4_ = SUB84(dVar1,0);
  auVar11._0_8_ = dVar5;
  auVar11._12_4_ = uVar17;
  auVar12 = blendpd(auVar11,auVar21,2);
  auVar20 = blendpd(auVar8,auVar16,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar5;
  auVar15._8_8_ = auVar21._0_8_ * auVar8._8_8_ - dVar9 * dVar1;
  auVar10._8_4_ = SUB84(auVar15._8_8_,0);
  auVar10._0_8_ = auVar15._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar13._0_8_ = auVar12._0_8_ * dVar9 - auVar20._0_8_ * auVar21._0_8_;
  auVar13._8_8_ = auVar12._8_8_ * auVar16._8_8_ - auVar20._8_8_ * auVar21._8_8_;
  dVar9 = dVar1 * dVar6 + dVar3 + auVar13._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  auVar16 = blendpd(auVar15,auVar13,2);
  local_a8._s_0.Z =
       auVar21._0_8_ * dVar6 + dVar4 + auVar16._0_8_ +
       (this->TotalTransform).Translation.ZW.m128d_f64[0];
  local_a8._8_4_ = SUB84(dVar9,0);
  local_a8._0_8_ =
       dVar5 * dVar6 + dVar2 + auVar10._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  DrawCircle(this->CurrentPDI,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_70[0]._s_0
             ,(TVector<double> *)&local_88._s_0,param_5,(double)param_3,param_4,!param_7,
             param_6 * this->PDISizeScale,this->DepthBias,true);
  return;
}

// InternalDrawDirectionalArrow @ 1496df9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawDirectionalArrow
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,float param_6,bool param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  float local_200;
  float local_1f8;
  undefined1 local_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  double *local_1a0;
  FToolDataVisualizer *local_198;
  FLinearColor *local_190;
  bool *local_188;
  float *local_180;
  TVector<double>_u_0 local_178;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_228;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = dVar1 - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = dVar2 - (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 - (param_1->field0_0x0)._s_0.Z;
  dStack_1e0 = dVar7;
  local_1e8 = dVar6;
  dVar5 = dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8;
  if (__real_3e45798ee0000000 < dVar5) {
    dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
    dVar6 = dVar6 * dVar5;
    dVar7 = dVar7 * dVar5;
    dVar8 = dVar8 * dVar5;
    dStack_1e0 = dVar7;
    local_1e8 = dVar6;
  }
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._0_4_;
  uVar10 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_;
  uVar11 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_;
  uVar13 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
  uVar14 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
  local_1b8._s_0.Z = (double)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_;
  local_1b8._s_0.X = (double)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_;
  local_1b8._s_0.Y = (double)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_;
  local_1d0._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar7 - local_1b8._s_0.Y * dVar8;
  local_1d0._s_0.Y =
       local_1b8._s_0.X * dVar8 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar6;
  local_1d0._s_0.Z = local_1b8._s_0.Y * dVar6 - local_1b8._s_0.X * dVar7;
  dVar5 = __real_3ff0000000000000 -
          (local_1d0._s_0.Y * local_1d0._s_0.Y + local_1d0._s_0.X * local_1d0._s_0.X +
          local_1d0._s_0.Z * local_1d0._s_0.Z);
  local_1d8 = dVar8;
  if (__real_3f847ae140000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    UE::Math::TVector<double>::FindBestAxisVectors
              ((TVector<double> *)&local_1e8,(TVector<double> *)&local_1b8._s_0,
               (TVector<double> *)&local_1d0._s_0);
    uVar13 = SUB84(local_1b8._s_0.Z,0);
    uVar14 = (undefined4)((ulonglong)local_1b8._16_8_ >> 0x20);
    uVar11 = SUB84(local_1b8._s_0.Y,0);
    uVar12 = (undefined4)((ulonglong)local_1b8._8_8_ >> 0x20);
    uVar9 = SUB84(local_1b8._s_0.X,0);
    uVar10 = (undefined4)((ulonglong)local_1b8._0_8_ >> 0x20);
  }
  local_208 = param_7 == false;
  dStack_140 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dStack_120 = UE::Math::TMatrix<double>::Identity.M[1][3];
  dStack_100 = UE::Math::TMatrix<double>::Identity.M[2][3];
  dStack_e0 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_200 = param_6 * this->PDISizeScale;
  local_1f0 = 1;
  local_1f8 = this->DepthBias;
  local_118 = CONCAT44(uVar10,uVar9);
  uStack_110 = CONCAT44(uVar12,uVar11);
  local_108 = CONCAT44(uVar14,uVar13);
  local_158 = dVar6;
  dStack_150 = dVar7;
  local_148 = dVar8;
  local_138 = local_1d0._s_0.X;
  dStack_130 = local_1d0._s_0.Y;
  local_128 = local_1d0._s_0.Z;
  local_f8 = dVar1;
  dStack_f0 = dVar2;
  local_e8 = dVar3;
  (**(code **)(this->CurrentPDI->_padding_ + 0x30))(this->CurrentPDI,param_1,param_2,param_4);
  local_1a0 = &local_158;
  local_188 = &param_7;
  local_180 = &param_6;
  local_190 = param_4;
  local_1d0._s_0.X = (double)(float)((uint)SQRT(param_5) ^ __xmm_80000000800000008000000080000000);
  local_1d8 = (undefined8)SQRT(param_5);
  uVar9 = (undefined4)((ulonglong)local_1d0._s_0.X >> 0x20);
  unique0x1000035a = SUB84(local_1d0._s_0.X,0);
  local_1e8 = local_1d0._s_0.X;
  unique0x1000035e = uVar9;
  local_178._8_4_ = SUB84(local_1d0._s_0.X,0);
  local_178._0_8_ = local_1d0._s_0.X;
  local_178._12_4_ = uVar9;
  auVar4._8_4_ = (int)local_1d8;
  auVar4._0_8_ = local_1d8;
  auVar4._12_4_ = (int)((ulonglong)local_1d8 >> 0x20);
  local_1b8._s_0.Z = auVar4._8_8_;
  local_1d0._s_0.Y = (double)local_1d8;
  local_1d0._16_8_ = local_1d0._s_0.X;
  local_1b8._0_8_ = local_1d0._s_0.X;
  local_1b8._8_8_ = local_1d8;
  local_198 = this;
  local_178._16_8_ = local_1d0._s_0.X;
  `FToolDataVisualizer::InternalDrawDirectionalArrow'::__l2::<lambda_1>::operator()
            (&local_1a0,(TVector<double> *)&local_1b8._s_0);
  `FToolDataVisualizer::InternalDrawDirectionalArrow'::__l2::<lambda_1>::operator()
            (&local_1a0,(TVector<double> *)&local_1d0._s_0);
  `FToolDataVisualizer::InternalDrawDirectionalArrow'::__l2::<lambda_1>::operator()
            (&local_1a0,(TVector<double> *)&local_1e8);
  `FToolDataVisualizer::InternalDrawDirectionalArrow'::__l2::<lambda_1>::operator()
            (&local_1a0,(TVector<double> *)&local_178._s_0);
  return;
}

// InternalDrawDisc @ 1496dfdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawDisc
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,int param_4,FColor *param_5,FMaterialRenderProxy *param_6,bool param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90 [5];
  
  TransformN(this,local_90,param_2);
  GizmoMath::MakeNormalPlaneBasis
            (local_90,(TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0);
  dVar9 = local_c0._s_0.X * local_c0._s_0.X + local_c0._s_0.Y * local_c0._s_0.Y +
          local_c0._s_0.Z * local_c0._s_0.Z;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_c0._s_0.X = local_c0._s_0.X * dVar9;
    local_c0._s_0.Y = local_c0._s_0.Y * dVar9;
    local_c0._s_0.Z = local_c0._s_0.Z * dVar9;
  }
  dVar9 = local_d8._s_0.X * local_d8._s_0.X + local_d8._s_0.Y * local_d8._s_0.Y +
          local_d8._s_0.Z * local_d8._s_0.Z;
  if (__real_3e45798ee0000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_d8._s_0.X = local_d8._s_0.X * dVar9;
    local_d8._s_0.Y = local_d8._s_0.Y * dVar9;
    local_d8._s_0.Z = local_d8._s_0.Z * dVar9;
  }
  auVar15 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar4 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar5 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar6 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar2 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar7 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar10 = blendpd(auVar7,auVar15,2);
  auVar17._8_4_ = SUB84(dVar3,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = uVar16;
  dVar9 = auVar15._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar2;
  auVar18._8_8_ = dVar4 * auVar7._8_8_ - dVar9 * dVar3;
  auVar19._8_4_ = SUB84(dVar3,0);
  auVar19._0_8_ = dVar2;
  auVar19._12_4_ = uVar16;
  auVar7._8_4_ = SUB84(dVar5,0);
  auVar7._0_8_ = dVar4;
  auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar7 = blendpd(auVar19,auVar7,2);
  auVar8._0_8_ = auVar7._0_8_ * dVar9 - auVar10._0_8_ * dVar4;
  auVar8._8_8_ = auVar7._8_8_ * auVar15._8_8_ - auVar10._8_8_ * dVar5;
  auVar7 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar8,2);
  dVar5 = auVar18._8_8_ + auVar18._8_8_;
  dVar1 = auVar8._0_8_ + auVar8._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar13._8_4_ = SUB84(dVar1,0);
  auVar13._0_8_ = dVar5;
  auVar13._12_4_ = uVar16;
  auVar11._8_4_ = SUB84(dVar1,0);
  auVar11._0_8_ = dVar5;
  auVar11._12_4_ = uVar16;
  auVar19 = blendpd(auVar11,auVar20,2);
  auVar14._0_8_ = auVar13._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar5;
  auVar14._8_8_ = auVar20._0_8_ * auVar7._8_8_ - dVar9 * dVar1;
  auVar10._8_4_ = SUB84(auVar14._8_8_,0);
  auVar10._0_8_ = auVar14._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
  auVar7 = blendpd(auVar7,auVar15,2);
  auVar12._0_8_ = auVar19._0_8_ * dVar9 - auVar7._0_8_ * auVar20._0_8_;
  auVar12._8_8_ = auVar19._8_8_ * auVar15._8_8_ - auVar7._8_8_ * auVar20._8_8_;
  auVar15 = blendpd(auVar14,auVar12,2);
  dVar9 = dVar1 * dVar6 + dVar3 + auVar12._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  local_a8._s_0.Z =
       auVar20._0_8_ * dVar6 + dVar4 + auVar15._0_8_ +
       (this->TotalTransform).Translation.ZW.m128d_f64[0];
  local_a8._8_4_ = SUB84(dVar9,0);
  local_a8._0_8_ =
       dVar5 * dVar6 + dVar2 + auVar10._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  DrawDisc(this->CurrentPDI,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c0._s_0,
           (TVector<double> *)&local_d8._s_0,(FColor)(param_5->field0_0x0)._s_0,(double)param_3,
           param_4,param_6,!param_7);
  return;
}

// InternalDrawGrid @ 1496e0080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawGrid
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          FLinearColor *param_6,float param_7,bool param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  
  auVar22 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar47 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar2 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar23 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar37 = (undefined4)((ulonglong)dVar23 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar5 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar6 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar21 = blendpd(auVar12,auVar22,2);
  auVar48._8_4_ = SUB84(dVar23,0);
  auVar48._0_8_ = dVar2;
  auVar48._12_4_ = uVar37;
  dVar1 = auVar22._0_8_;
  auVar49._0_8_ = auVar48._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar2;
  auVar49._8_8_ = dVar5 * auVar12._8_8_ - dVar1 * dVar23;
  auVar11._8_4_ = SUB84(dVar23,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = uVar37;
  auVar12._8_4_ = SUB84(dVar6,0);
  auVar12._0_8_ = dVar5;
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar12 = blendpd(auVar11,auVar12,2);
  dVar3 = auVar22._8_8_;
  auVar13._0_8_ = auVar12._0_8_ * dVar1 - auVar21._0_8_ * dVar5;
  auVar13._8_8_ = auVar12._8_8_ * dVar3 - auVar21._8_8_ * dVar6;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar49,auVar13,2);
  dVar42 = auVar49._8_8_ + auVar49._8_8_;
  dVar8 = auVar13._0_8_ + auVar13._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar50._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar50._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar31._8_4_ = SUB84(dVar8,0);
  auVar31._0_8_ = dVar42;
  auVar31._12_4_ = uVar37;
  auVar24._8_4_ = SUB84(dVar8,0);
  auVar24._0_8_ = dVar42;
  auVar24._12_4_ = uVar37;
  auVar21 = blendpd(auVar24,auVar50,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar42;
  auVar32._8_8_ = auVar50._0_8_ * auVar12._8_8_ - dVar1 * dVar8;
  auVar12 = blendpd(auVar12,auVar22,2);
  dVar6 = (param_3->field0_0x0)._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar30 = (param_3->field0_0x0)._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar37 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar14._8_4_ = SUB84(auVar32._8_8_,0);
  auVar14._0_8_ = auVar32._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar39._8_4_ = SUB84(dVar30,0);
  auVar39._0_8_ = dVar6;
  auVar39._12_4_ = uVar37;
  dVar20 = (param_3->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar38 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar25._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * auVar50._0_8_;
  auVar25._8_8_ = auVar21._8_8_ * dVar3 - auVar12._8_8_ * auVar50._8_8_;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar7 = dVar42 * dVar47 + dVar2 + auVar14._8_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[0];
  dVar8 = dVar8 * dVar47 + dVar23 + auVar25._0_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[1];
  auVar21 = blendpd(auVar32,auVar25,2);
  auVar40._0_8_ = auVar39._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar6;
  auVar40._8_8_ = dVar20 * auVar12._8_8_ - dVar1 * dVar30;
  auVar15._8_4_ = SUB84(dVar30,0);
  auVar15._0_8_ = dVar6;
  auVar15._12_4_ = uVar37;
  dVar47 = auVar50._0_8_ * dVar47 + dVar5 + auVar21._0_8_ +
           (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar21._8_4_ = SUB84(dVar38,0);
  auVar21._0_8_ = dVar20;
  auVar21._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  auVar21 = blendpd(auVar15,auVar21,2);
  auVar12 = blendpd(auVar12,auVar22,2);
  auVar16._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * dVar20;
  auVar16._8_8_ = auVar21._8_8_ * dVar3 - auVar12._8_8_ * dVar38;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar40,auVar16,2);
  dVar2 = auVar40._8_8_ + auVar40._8_8_;
  dVar23 = auVar16._0_8_ + auVar16._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar23 >> 0x20);
  auVar41._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar41._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar33._8_4_ = SUB84(dVar23,0);
  auVar33._0_8_ = dVar2;
  auVar33._12_4_ = uVar37;
  auVar26._8_4_ = SUB84(dVar23,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = uVar37;
  auVar21 = blendpd(auVar26,auVar41,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar2;
  auVar34._8_8_ = auVar41._0_8_ * auVar12._8_8_ - dVar1 * dVar23;
  auVar12 = blendpd(auVar12,auVar22,2);
  auVar17._8_4_ = SUB84(auVar34._8_8_,0);
  auVar17._0_8_ = auVar34._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar27._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * auVar41._0_8_;
  auVar27._8_8_ = auVar21._8_8_ * dVar3 - auVar12._8_8_ * auVar41._8_8_;
  auVar21 = blendpd(auVar34,auVar27,2);
  dVar2 = dVar2 * dVar3 + dVar6 + auVar17._8_8_;
  dVar5 = dVar23 * dVar3 + dVar30 + auVar27._0_8_;
  uVar46 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (param_4->field0_0x0)._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar23 = (param_4->field0_0x0)._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar37 = (undefined4)((ulonglong)dVar23 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar43._8_4_ = SUB84(dVar23,0);
  auVar43._0_8_ = dVar6;
  auVar43._12_4_ = uVar37;
  dVar30 = (param_4->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar42 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  local_e8 = auVar41._0_8_ * dVar3 + dVar20 + auVar21._0_8_;
  dStack_e0 = auVar41._8_8_ * dVar3 + dVar38 + auVar21._8_8_;
  auVar21 = blendpd(auVar12,auVar22,2);
  auVar44._0_8_ = auVar43._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar6;
  auVar44._8_8_ = dVar30 * auVar12._8_8_ - dVar1 * dVar23;
  auVar18._8_4_ = SUB84(dVar23,0);
  auVar18._0_8_ = dVar6;
  auVar18._12_4_ = uVar37;
  auVar4._8_4_ = SUB84(dVar42,0);
  auVar4._0_8_ = dVar30;
  auVar4._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  auVar12 = blendpd(auVar18,auVar4,2);
  local_130._8_4_ = SUB84(dVar5,0);
  local_130._0_8_ = dVar2;
  local_130._12_4_ = uVar46;
  auVar19._0_8_ = auVar12._0_8_ * dVar1 - auVar21._0_8_ * dVar30;
  auVar19._8_8_ = auVar12._8_8_ * dVar3 - auVar21._8_8_ * dVar42;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar20 = auVar44._8_8_ + auVar44._8_8_;
  dVar38 = auVar19._0_8_ + auVar19._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar38 >> 0x20);
  auVar21 = blendpd(auVar44,auVar19,2);
  auVar35._8_4_ = SUB84(dVar38,0);
  auVar35._0_8_ = dVar20;
  auVar35._12_4_ = uVar37;
  auVar28._8_4_ = SUB84(dVar38,0);
  auVar28._0_8_ = dVar20;
  auVar28._12_4_ = uVar37;
  auVar45._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar45._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar21 = blendpd(auVar28,auVar45,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar20;
  auVar36._8_8_ = auVar45._0_8_ * auVar12._8_8_ - dVar1 * dVar38;
  auVar22 = blendpd(auVar12,auVar22,2);
  auVar29._0_8_ = auVar21._0_8_ * dVar1 - auVar22._0_8_ * auVar45._0_8_;
  auVar29._8_8_ = auVar21._8_8_ * dVar3 - auVar22._8_8_ * auVar45._8_8_;
  auVar22._8_4_ = SUB84(auVar36._8_8_,0);
  auVar22._0_8_ = auVar36._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  dVar20 = dVar20 * dVar3 + dVar6 + auVar22._8_8_;
  local_108 = dVar38 * dVar3 + dVar23 + auVar29._0_8_;
  local_120._8_4_ = SUB84(local_108,0);
  local_120._0_8_ = dVar20;
  local_120._12_4_ = (int)((ulonglong)local_108 >> 0x20);
  auVar22 = blendpd(auVar36,auVar29,2);
  iVar9 = 0;
  bVar10 = !param_8;
  local_140 = (double)(float)((param_5->field0_0x0)._s_0.X * __real_3fb0000000000000);
  local_f8 = auVar45._0_8_ * dVar3 + dVar30 + auVar22._0_8_;
  dStack_f0 = auVar45._8_8_ * dVar3 + dVar42 + auVar22._8_8_;
  dVar23 = local_140 * __real_4020000000000000;
  dVar20 = dVar23 * dVar20;
  dVar3 = dVar7 + dVar20;
  dVar20 = dVar7 - dVar20;
  dVar30 = dVar8 - dVar23 * local_108;
  local_d8._8_4_ = SUB84(dVar5,0);
  local_d8._0_8_ = dVar5;
  local_d8._12_4_ = uVar46;
  local_148 = dVar8 + dVar23 * local_108;
  local_150 = dVar47 - dVar23 * local_f8;
  dVar1 = dVar47 + dVar23 * local_f8;
  dVar2 = dVar23 * dVar2;
  local_138 = dVar7 - dVar2;
  dVar7 = dVar7 + dVar2;
  dVar2 = dVar8 - dVar23 * dVar5;
  dVar8 = dVar8 + dVar23 * dVar5;
  dVar6 = dVar47 - dVar23 * local_e8;
  dVar47 = dVar47 + dVar23 * local_e8;
  dStack_100 = local_108;
  do {
    dVar42 = (double)iVar9 * local_140;
    dVar23 = (double)local_130._0_8_ * dVar42;
    dVar5 = dVar5 * dVar42;
    dVar38 = local_e8 * dVar42;
    local_160 = local_148 - dVar5;
    local_178 = local_150 - dVar38;
    local_168 = dVar3 - dVar23;
    dStack_180 = dVar30 - dVar5;
    local_188 = dVar20 - dVar23;
    local_158 = dVar1 - dVar38;
    (**(code **)(this->CurrentPDI->_padding_ + 0x30))
              (this->CurrentPDI,&local_188,&local_168,param_6,bVar10,param_7,0,1);
    dStack_180 = dVar30 + dVar5;
    local_188 = dVar20 + dVar23;
    local_160 = local_148 + dVar5;
    local_178 = local_150 + dVar38;
    local_168 = dVar3 + dVar23;
    local_158 = dVar1 + dVar38;
    (**(code **)(this->CurrentPDI->_padding_ + 0x30))
              (this->CurrentPDI,&local_188,&local_168,param_6,bVar10,param_7,0,1);
    dVar23 = (double)local_120._0_8_ * dVar42;
    dVar5 = local_108 * dVar42;
    dVar42 = local_f8 * dVar42;
    local_188 = local_138 - dVar23;
    dStack_180 = dVar2 - dVar5;
    local_178 = dVar6 - dVar42;
    local_160 = dVar8 - dVar5;
    local_168 = dVar7 - dVar23;
    local_158 = dVar47 - dVar42;
    (**(code **)(this->CurrentPDI->_padding_ + 0x30))
              (this->CurrentPDI,&local_188,&local_168,param_6,bVar10,param_7,0,1);
    local_178 = dVar6 + dVar42;
    dStack_180 = dVar2 + dVar5;
    local_188 = local_138 + dVar23;
    local_160 = dVar8 + dVar5;
    local_168 = dVar7 + dVar23;
    local_158 = dVar47 + dVar42;
    (**(code **)(this->CurrentPDI->_padding_ + 0x30))
              (this->CurrentPDI,&local_188,&local_168,param_6,bVar10,param_7,0,1);
    iVar9 = iVar9 + 1;
    dVar5 = (double)local_d8._0_8_;
  } while (iVar9 < 9);
  return;
}

// InternalDrawGrid @ 1496e0820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawGrid
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,bool param_6)

{
  TVector<double> local_38;
  TVector<double> local_20;
  
  GizmoMath::MakeNormalPlaneBasis(param_2,&local_20,&local_38);
  (**(code **)(this->_padding_ + 0x58))
            (this,param_1,param_2,&local_20,&local_38,param_3,param_4,param_5,param_6);
  return;
}

// InternalDrawSquare @ 1496e08d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawSquare
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,bool param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
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
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar41 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar3 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar6 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar21 = blendpd(auVar12,auVar20,2);
  auVar42._8_4_ = SUB84(dVar4,0);
  auVar42._0_8_ = dVar3;
  auVar42._12_4_ = uVar34;
  dVar1 = auVar20._0_8_;
  auVar43._0_8_ = auVar42._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
  auVar43._8_8_ = dVar6 * auVar12._8_8_ - dVar1 * dVar4;
  auVar11._8_4_ = SUB84(dVar4,0);
  auVar11._0_8_ = dVar3;
  auVar11._12_4_ = uVar34;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendpd(auVar11,auVar12,2);
  dVar2 = auVar20._8_8_;
  auVar13._0_8_ = auVar12._0_8_ * dVar1 - auVar21._0_8_ * dVar6;
  auVar13._8_8_ = auVar12._8_8_ * dVar2 - auVar21._8_8_ * dVar7;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar43,auVar13,2);
  dVar9 = auVar43._8_8_ + auVar43._8_8_;
  dVar10 = auVar13._0_8_ + auVar13._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar44._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar44._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar28._8_4_ = SUB84(dVar10,0);
  auVar28._0_8_ = dVar9;
  auVar28._12_4_ = uVar34;
  auVar22._8_4_ = SUB84(dVar10,0);
  auVar22._0_8_ = dVar9;
  auVar22._12_4_ = uVar34;
  auVar21 = blendpd(auVar22,auVar44,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar29._8_8_ = auVar44._0_8_ * auVar12._8_8_ - dVar1 * dVar10;
  auVar14._8_4_ = SUB84(auVar29._8_8_,0);
  auVar14._0_8_ = auVar29._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar12 = blendpd(auVar12,auVar20,2);
  dVar7 = (param_2->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar8 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar23._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * auVar44._0_8_;
  auVar23._8_8_ = auVar21._8_8_ * dVar2 - auVar12._8_8_ * auVar44._8_8_;
  dVar9 = dVar9 * dVar41 + dVar3 + auVar14._8_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[0];
  dVar10 = dVar10 * dVar41 + dVar4 + auVar23._0_8_ +
           (this->TotalTransform).Translation.XY.m128d_f64[1];
  dVar3 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_2->field0_0x0)._s_0.X;
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_2->field0_0x0)._s_0.Y;
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar38._8_4_ = SUB84(dVar4,0);
  auVar38._0_8_ = dVar3;
  auVar38._12_4_ = uVar34;
  auVar21 = blendpd(auVar29,auVar23,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
  auVar39._8_8_ = dVar7 * auVar12._8_8_ - dVar1 * dVar4;
  auVar15._8_4_ = SUB84(dVar4,0);
  auVar15._0_8_ = dVar3;
  auVar15._12_4_ = uVar34;
  dVar41 = auVar44._0_8_ * dVar41 + dVar6 + auVar21._0_8_ +
           (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar21._8_4_ = SUB84(dVar8,0);
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar21 = blendpd(auVar15,auVar21,2);
  auVar12 = blendpd(auVar12,auVar20,2);
  auVar16._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * dVar7;
  auVar16._8_8_ = auVar21._8_8_ * dVar2 - auVar12._8_8_ * dVar8;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar39,auVar16,2);
  dVar6 = auVar39._8_8_ + auVar39._8_8_;
  dVar8 = auVar16._0_8_ + auVar16._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar40._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar40._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar6;
  auVar30._12_4_ = uVar34;
  auVar24._8_4_ = SUB84(dVar8,0);
  auVar24._0_8_ = dVar6;
  auVar24._12_4_ = uVar34;
  auVar21 = blendpd(auVar24,auVar40,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar6;
  auVar31._8_8_ = auVar40._0_8_ * auVar12._8_8_ - dVar1 * dVar8;
  auVar12 = blendpd(auVar12,auVar20,2);
  auVar17._8_4_ = SUB84(auVar31._8_8_,0);
  auVar17._0_8_ = auVar31._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar25._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * auVar40._0_8_;
  auVar25._8_8_ = auVar21._8_8_ * dVar2 - auVar12._8_8_ * auVar40._8_8_;
  auVar21 = blendpd(auVar31,auVar25,2);
  local_e8 = dVar6 * dVar2 + dVar3 + auVar17._8_8_;
  local_e0 = dVar8 * dVar2 + dVar4 + auVar25._0_8_;
  dVar3 = (param_3->field0_0x0)._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (param_3->field0_0x0)._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar35._8_4_ = SUB84(dVar4,0);
  auVar35._0_8_ = dVar3;
  auVar35._12_4_ = uVar34;
  dVar6 = (param_3->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar8 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  local_d8 = auVar40._0_8_ * dVar2 + dVar7 + auVar21._0_8_;
  auVar21 = blendpd(auVar12,auVar20,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar3;
  auVar36._8_8_ = dVar6 * auVar12._8_8_ - dVar1 * dVar4;
  auVar18._8_4_ = SUB84(dVar4,0);
  auVar18._0_8_ = dVar3;
  auVar18._12_4_ = uVar34;
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar12 = blendpd(auVar18,auVar5,2);
  auVar19._0_8_ = auVar12._0_8_ * dVar1 - auVar21._0_8_ * dVar6;
  auVar19._8_8_ = auVar12._8_8_ * dVar2 - auVar21._8_8_ * dVar8;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar36,auVar19,2);
  dVar7 = auVar36._8_8_ + auVar36._8_8_;
  dVar8 = auVar19._0_8_ + auVar19._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar37._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar37._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar32._8_4_ = SUB84(dVar8,0);
  auVar32._0_8_ = dVar7;
  auVar32._12_4_ = uVar34;
  auVar26._8_4_ = SUB84(dVar8,0);
  auVar26._0_8_ = dVar7;
  auVar26._12_4_ = uVar34;
  auVar21 = blendpd(auVar26,auVar37,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar7;
  auVar33._8_8_ = auVar37._0_8_ * auVar12._8_8_ - dVar1 * dVar8;
  auVar12 = blendpd(auVar12,auVar20,2);
  auVar20._8_4_ = SUB84(auVar33._8_8_,0);
  auVar20._0_8_ = auVar33._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar27._0_8_ = auVar21._0_8_ * dVar1 - auVar12._0_8_ * auVar37._0_8_;
  auVar27._8_8_ = auVar21._8_8_ * dVar2 - auVar12._8_8_ * auVar37._8_8_;
  auVar12 = blendpd(auVar33,auVar27,2);
  local_d0 = dVar7 * dVar2 + dVar3 + auVar20._8_8_;
  local_c8 = dVar8 * dVar2 + dVar4 + auVar27._0_8_;
  local_c0 = auVar37._0_8_ * dVar2 + dVar6 + auVar12._0_8_;
  local_a8 = (local_d8 + local_c0) * __real_3fe0000000000000;
  local_b8 = (local_e8 + local_d0) * __real_3fe0000000000000;
  local_f8 = dVar41 - local_a8;
  local_a8 = local_a8 + dVar41;
  local_b0 = (local_e0 + local_c8) * __real_3fe0000000000000;
  local_108 = dVar9 - local_b8;
  local_b8 = local_b8 + dVar9;
  dStack_100 = dVar10 - local_b0;
  local_b0 = local_b0 + dVar10;
  local_d0 = local_108 + local_d0;
  local_e8 = local_108 + local_e8;
  local_c8 = dStack_100 + local_c8;
  local_e0 = dStack_100 + local_e0;
  local_c0 = local_f8 + local_c0;
  local_d8 = local_f8 + local_d8;
  (**(code **)(this->_padding_ + 8))(local_c0,&local_108,&local_d0,param_4,param_5,param_6);
  (**(code **)(this->_padding_ + 8))(this,&local_d0,&local_b8,param_4,param_5,param_6);
  (**(code **)(this->_padding_ + 8))(this,&local_e8,&local_b8,param_4,param_5,param_6);
  (**(code **)(this->_padding_ + 8))(this,&local_108,&local_e8,param_4,param_5,param_6);
  return;
}

// InternalDrawTransformedLine @ 1496e0df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawTransformedLine
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4,bool param_5)

{
  float fVar1;
  
  fVar1 = param_4 * this->PDISizeScale;
  (**(code **)(this->CurrentPDI->_padding_ + 0x30))
            (this->CurrentPDI,fVar1,param_2,param_3,!param_5,fVar1,this->DepthBias,1);
  return;
}

// InternalDrawTransformedPoint @ 1496e0e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawTransformedPoint
          (FToolDataVisualizer *this,TVector<double> *param_1,FLinearColor *param_2,float param_3,
          bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e0e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->CurrentPDI->_padding_ + 0x40))
            (this->CurrentPDI,param_1,param_2,param_3 * this->PDISizeScale);
  return;
}

// InternalDrawViewFacingArc @ 1496e0e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawViewFacingArc
          (FToolDataVisualizer *this,TVector<double> *param_1,float param_2,int param_3,
          float param_4,float param_5,FLinearColor *param_6,float param_7,bool param_8)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [6];
  
  if (this->bHaveCameraState == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHaveCameraState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolDataVisualizer.cpp"
                       ,0x13b,
                       L"To call this function, you must first call the version of BeginFrame that takes the CameraState"
                      );
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  auVar11 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar2 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar7 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar12 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar18 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar23 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar13 = blendpd(auVar9,auVar11,2);
  auVar19._8_4_ = SUB84(dVar18,0);
  auVar19._0_8_ = dVar12;
  auVar19._12_4_ = uVar23;
  dVar4 = auVar11._0_8_;
  auVar20._0_8_ = auVar19._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar12;
  auVar20._8_8_ = dVar2 * auVar9._8_8_ - dVar4 * dVar18;
  auVar21._8_4_ = SUB84(dVar18,0);
  auVar21._0_8_ = dVar12;
  auVar21._12_4_ = uVar23;
  auVar9._8_4_ = SUB84(dVar3,0);
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar9 = blendpd(auVar21,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar4 - auVar13._0_8_ * dVar2;
  auVar10._8_8_ = auVar9._8_8_ * auVar11._8_8_ - auVar13._8_8_ * dVar3;
  auVar9 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar20,auVar10,2);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  dVar3 = auVar20._8_8_ + auVar20._8_8_;
  dVar5 = auVar10._0_8_ + auVar10._0_8_;
  uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar16._8_4_ = SUB84(dVar5,0);
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar23;
  auVar14._8_4_ = SUB84(dVar5,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar23;
  auVar21 = blendpd(auVar14,auVar22,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar17._8_8_ = auVar22._0_8_ * auVar9._8_8_ - dVar4 * dVar5;
  auVar9 = blendpd(auVar9,auVar11,2);
  auVar13._8_4_ = SUB84(auVar17._8_8_,0);
  auVar13._0_8_ = auVar17._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar15._0_8_ = auVar21._0_8_ * dVar4 - auVar9._0_8_ * auVar22._0_8_;
  auVar15._8_8_ = auVar21._8_8_ * auVar11._8_8_ - auVar9._8_8_ * auVar22._8_8_;
  auVar9 = blendpd(auVar17,auVar15,2);
  dVar4 = dVar3 * dVar7 + dVar12 + auVar13._8_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[0];
  dVar12 = dVar5 * dVar7 + dVar18 + auVar15._0_8_ +
           (this->TotalTransform).Translation.XY.m128d_f64[1];
  uVar23 = SUB84(dVar12,0);
  uVar24 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar6._4_8_ = auVar15._0_8_;
  auVar6._0_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar11._0_8_ = auVar6._0_8_ << 0x20;
  auVar11._8_4_ = uVar23;
  auVar11._12_4_ = uVar24;
  dVar18 = auVar22._0_8_ * dVar7 + dVar2 + auVar9._0_8_ +
           (this->TotalTransform).Translation.ZW.m128d_f64[0];
  local_128._s_0.X = (this->CameraState).Position.field0_0x0._s_0.X - dVar4;
  local_128._s_0.Y = (this->CameraState).Position.field0_0x0._s_0.Y - auVar11._8_8_;
  local_128._s_0.Z = (this->CameraState).Position.field0_0x0._s_0.Z - dVar18;
  dVar12 = local_128._s_0.Y * local_128._s_0.Y + local_128._s_0.X * local_128._s_0.X +
           local_128._s_0.Z * local_128._s_0.Z;
  if (__real_3e45798ee0000000 < dVar12) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    local_128._s_0.X = local_128._s_0.X * dVar12;
    local_128._s_0.Y = dVar12 * local_128._s_0.Y;
    local_128._s_0.Z = dVar12 * local_128._s_0.Z;
  }
  GizmoMath::MakeNormalPlaneBasis
            ((TVector<double> *)&local_128._s_0,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_110._s_0);
  local_d8._s_0.X = local_110._s_0.X;
  local_d8._s_0.Y = local_110._s_0.Y;
  local_b8._s_0.X = local_f8._s_0.X;
  local_b8._s_0.Y = local_f8._s_0.Y;
  local_d8._s_0.Z = local_110._s_0.Z;
  local_b8._s_0.Z = local_f8._s_0.Z;
  local_98[0]._8_4_ = uVar23;
  local_98[0]._0_8_ = dVar4;
  local_98[0]._12_4_ = uVar24;
  local_98[0]._16_8_ = dVar18;
  DrawArc(this->CurrentPDI,(TVector<double> *)&local_98[0]._s_0,(TVector<double> *)&local_b8._s_0,
          (TVector<double> *)&local_d8._s_0,param_4,param_5,(double)param_2,param_3,param_6,!param_8
         );
  return;
}

// InternalDrawViewFacingCircle @ 1496e1160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawViewFacingCircle
          (FToolDataVisualizer *this,TVector<double> *param_1,float param_2,int param_3,
          FLinearColor *param_4,float param_5,bool param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double> local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78 [4];
  
  if (this->bHaveCameraState == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHaveCameraState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolDataVisualizer.cpp"
                       ,0x129,
                       L"To call this function, you must first call the version of BeginFrame that takes the CameraState"
                      );
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  auVar17 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  local_98._0_16_ = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar3 = (param_1->field0_0x0)._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (param_1->field0_0x0)._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar18 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar6 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar7 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = uVar18;
  auVar12 = blendpd(local_98._0_16_,auVar17,2);
  dVar11 = auVar17._0_8_;
  auVar20._0_8_ = auVar19._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar3;
  auVar20._8_8_ = dVar5 * local_98._8_8_ - dVar11 * dVar4;
  auVar21._8_4_ = SUB84(dVar4,0);
  auVar21._0_8_ = dVar3;
  auVar21._12_4_ = uVar18;
  auVar9._8_4_ = SUB84(dVar6,0);
  auVar9._0_8_ = dVar5;
  auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar9 = blendpd(auVar21,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar11 - auVar12._0_8_ * dVar5;
  auVar10._8_8_ = auVar9._8_8_ * auVar17._8_8_ - auVar12._8_8_ * dVar6;
  auVar9 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar20,auVar10,2);
  dVar6 = auVar20._8_8_ + auVar20._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar6;
  auVar15._12_4_ = uVar18;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar6;
  auVar13._12_4_ = uVar18;
  auVar21 = blendpd(auVar9,auVar17,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar6;
  auVar16._8_8_ = auVar22._0_8_ * auVar9._8_8_ - dVar11 * dVar2;
  auVar9 = blendpd(auVar13,auVar22,2);
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar14._0_8_ = auVar9._0_8_ * dVar11 - auVar21._0_8_ * auVar22._0_8_;
  auVar14._8_8_ = auVar9._8_8_ * auVar17._8_8_ - auVar21._8_8_ * auVar22._8_8_;
  auVar17 = blendpd(auVar16,auVar14,2);
  dVar11 = dVar6 * dVar7 + dVar3 + auVar12._8_8_ +
           (this->TotalTransform).Translation.XY.m128d_f64[0];
  dVar6 = dVar2 * dVar7 + dVar4 + auVar14._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  local_78[0]._16_8_ =
       auVar22._0_8_ * dVar7 + dVar5 + auVar17._0_8_ +
       (this->TotalTransform).Translation.ZW.m128d_f64[0];
  local_f8._s_0.X = (this->CameraState).Position.field0_0x0._s_0.X - dVar11;
  local_78[0]._8_4_ = SUB84(dVar6,0);
  local_78[0]._0_8_ = dVar11;
  local_78[0]._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_f8._s_0.Y = (this->CameraState).Position.field0_0x0._s_0.Y - dVar6;
  local_f8._s_0.Z = (this->CameraState).Position.field0_0x0._s_0.Z - (double)local_78[0]._16_8_;
  dVar11 = local_f8._s_0.Y * local_f8._s_0.Y + local_f8._s_0.X * local_f8._s_0.X +
           local_f8._s_0.Z * local_f8._s_0.Z;
  if (__real_3e45798ee0000000 < dVar11) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    local_f8._s_0.X = local_f8._s_0.X * dVar11;
    local_f8._s_0.Y = dVar11 * local_f8._s_0.Y;
    local_f8._s_0.Z = dVar11 * local_f8._s_0.Z;
  }
  GizmoMath::MakeNormalPlaneBasis
            ((TVector<double> *)&local_f8._s_0,&local_c8,(TVector<double> *)&local_e0._s_0);
  local_b0._s_0.Z = local_e0._s_0.Z;
  local_b0._s_0.X = local_e0._s_0.X;
  local_b0._s_0.Y = local_e0._s_0.Y;
  local_98._s_0.Z = local_c8.field0_0x0._s_0.Z;
  DrawCircle(this->CurrentPDI,(TVector<double> *)&local_78[0]._s_0,(TVector<double> *)&local_98._s_0
             ,(TVector<double> *)&local_b0._s_0,param_4,(double)param_2,param_3,!param_6,
             param_5 * this->PDISizeScale,this->DepthBias,true);
  return;
}

// InternalDrawViewFacingX @ 1496e1450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawViewFacingX
          (FToolDataVisualizer *this,TVector<double> *param_1,float param_2,FLinearColor *param_3,
          float param_4,bool param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_1a8 [16];
  double local_198;
  double local_188;
  double dStack_180;
  double local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8 [9];
  
  if (this->bHaveCameraState == false) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bHaveCameraState",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolDataVisualizer.cpp"
                        ,0x14c,
                        L"To call this function, you must first call the version of BeginFrame that takes the CameraState"
                       );
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  auVar19 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  auVar11 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar2 = (param_1->field0_0x0)._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar3 = (param_1->field0_0x0)._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar5 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar9 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = uVar20;
  dVar8 = auVar19._0_8_;
  auVar14 = blendpd(auVar11,auVar19,2);
  auVar23._0_8_ = auVar22._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar2;
  auVar23._8_8_ = dVar4 * auVar11._8_8_ - dVar8 * dVar3;
  auVar24._8_4_ = SUB84(dVar3,0);
  auVar24._0_8_ = dVar2;
  auVar24._12_4_ = uVar20;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar11 = blendpd(auVar24,auVar11,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar8 - auVar14._0_8_ * dVar4;
  auVar12._8_8_ = auVar11._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar5;
  auVar11 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar24 = blendpd(auVar23,auVar12,2);
  dVar6 = auVar23._8_8_ + auVar23._8_8_;
  dVar7 = auVar12._0_8_ + auVar12._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar25._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar25._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar17._8_4_ = SUB84(dVar7,0);
  auVar17._0_8_ = dVar6;
  auVar17._12_4_ = uVar20;
  auVar15._8_4_ = SUB84(dVar7,0);
  auVar15._0_8_ = dVar6;
  auVar15._12_4_ = uVar20;
  auVar24 = blendpd(auVar15,auVar25,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar6;
  auVar18._8_8_ = auVar25._0_8_ * auVar11._8_8_ - dVar8 * dVar7;
  auVar11 = blendpd(auVar11,auVar19,2);
  auVar14._8_4_ = SUB84(auVar18._8_8_,0);
  auVar14._0_8_ = auVar18._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar16._0_8_ = auVar24._0_8_ * dVar8 - auVar11._0_8_ * auVar25._0_8_;
  auVar16._8_8_ = auVar24._8_8_ * auVar19._8_8_ - auVar11._8_8_ * auVar25._8_8_;
  auVar19 = blendpd(auVar18,auVar16,2);
  dVar6 = dVar6 * dVar9 + dVar2 + auVar14._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0]
  ;
  dVar3 = dVar7 * dVar9 + dVar3 + auVar16._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  local_108._s_0.Z = __real_3ff0000000000000;
  local_188 = auVar25._0_8_ * dVar9 + dVar4 + auVar19._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  dStack_180 = auVar25._8_8_ * dVar9 + dVar5 + auVar19._8_8_ +
               (this->TotalTransform).Translation.ZW.m128d_f64[1];
  local_1a8._8_4_ = SUB84(dVar3,0);
  local_1a8._0_8_ = dVar6;
  local_1a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_108._s_0.X = 0.0;
  local_108._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_168._s_0,
             (TVector<double> *)&local_108._s_0);
  dVar7 = __real_3fe0000000000000;
  dVar2 = (double)param_2;
  local_e8[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_e8[0]._s_0.Y = _UNK_15061cbc8;
  dVar8 = local_168._s_0.X * dVar2 * __real_3fe0000000000000;
  dVar5 = local_168._s_0.Y * dVar2 * __real_3fe0000000000000;
  dVar4 = local_168._s_0.Z * dVar2 * __real_3fe0000000000000;
  local_e8[0]._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_150._s_0,
             (TVector<double> *)&local_e8[0]._s_0);
  dVar6 = dVar6 + dVar8;
  dVar13 = local_150._s_0.X * dVar2 * dVar7;
  dVar21 = dVar3 + dVar5;
  dVar9 = local_150._s_0.Y * dVar2 * dVar7;
  local_138 = dVar6 + dVar13;
  dVar7 = local_150._s_0.Z * dVar2 * dVar7;
  dVar3 = dVar3 - dVar5;
  dVar2 = local_188 + dVar4;
  local_130 = dVar21 + dVar9;
  dVar4 = local_188 - dVar4;
  local_128 = dVar2 + dVar7;
  uVar20 = local_1a8._12_4_;
  dVar8 = local_1a8._0_8_ - dVar8;
  local_188 = dVar8 - dVar13;
  local_1a8._8_4_ = local_1a8._8_4_;
  local_1a8._0_8_ = dVar8;
  local_1a8._12_4_ = uVar20;
  dStack_180 = dVar3 - dVar9;
  local_178 = dVar4 - dVar7;
  (**(code **)(this->_padding_ + 8))(this,&local_188,&local_138,param_3,param_4,param_5);
  local_120 = dVar6 - dVar13;
  local_198 = dVar4 + dVar7;
  local_118 = dVar21 - dVar9;
  local_110 = dVar2 - dVar7;
  local_1a8._8_8_ = dVar3 + dVar9;
  local_1a8._0_8_ = dVar8 + dVar13;
  (**(code **)(this->_padding_ + 8))(this,&local_120,local_1a8,param_3,param_4,param_5);
  return;
}

// InternalDrawWireBox @ 1496e1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawWireBox
          (FToolDataVisualizer *this,TBox<double> *param_1,FLinearColor *param_2,float param_3,
          bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auStack_1f8 [32];
  float local_1d8;
  bool local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  auVar34 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar5 = (param_1->Min).field0_0x0._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar7 = (param_1->Min).field0_0x0._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar51 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar10 = (param_1->Min).field0_0x0._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar12 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar1 = (param_1->Min).field0_0x0._s_0.Z;
  auVar52._8_4_ = SUB84(dVar7,0);
  auVar52._0_8_ = dVar5;
  auVar52._12_4_ = uVar51;
  dVar14 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dStack_1c0 = (param_1->Min).field0_0x0._s_0.Y;
  dVar2 = auVar34._0_8_;
  auVar32 = blendpd(auVar20,auVar34,2);
  auVar53._0_8_ = auVar52._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar5;
  auVar53._8_8_ = dVar10 * auVar20._8_8_ - dVar2 * dVar7;
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = uVar51;
  auVar20._8_4_ = SUB84(dVar12,0);
  auVar20._0_8_ = dVar10;
  auVar20._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar20 = blendpd(auVar19,auVar20,2);
  dVar3 = auVar34._8_8_;
  auVar21._0_8_ = auVar20._0_8_ * dVar2 - auVar32._0_8_ * dVar10;
  auVar21._8_8_ = auVar20._8_8_ * dVar3 - auVar32._8_8_ * dVar12;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar32 = blendpd(auVar53,auVar21,2);
  auVar54._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar54._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  dVar12 = auVar53._8_8_ + auVar53._8_8_;
  dVar4 = auVar21._0_8_ + auVar21._0_8_;
  uVar51 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar43._8_4_ = SUB84(dVar4,0);
  auVar43._0_8_ = dVar12;
  auVar43._12_4_ = uVar51;
  auVar35._8_4_ = SUB84(dVar4,0);
  auVar35._0_8_ = dVar12;
  auVar35._12_4_ = uVar51;
  auVar32 = blendpd(auVar35,auVar54,2);
  auVar44._0_8_ = auVar43._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar12;
  auVar44._8_8_ = auVar54._0_8_ * auVar20._8_8_ - dVar2 * dVar4;
  auVar22._8_4_ = SUB84(auVar44._8_8_,0);
  auVar22._0_8_ = auVar44._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
  auVar20 = blendpd(auVar20,auVar34,2);
  auVar36._0_8_ = auVar32._0_8_ * dVar2 - auVar20._0_8_ * auVar54._0_8_;
  auVar36._8_8_ = auVar32._8_8_ * dVar3 - auVar20._8_8_ * auVar54._8_8_;
  dVar6 = (param_1->Max).field0_0x0._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar8 = dStack_1c0 * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar51 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar11 = dVar1 * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar13 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar4 = dVar4 * dVar14 + dVar7 + auVar36._0_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[1];
  auVar32 = blendpd(auVar44,auVar36,2);
  local_1a8._8_4_ = SUB84(dVar4,0);
  local_1a8._0_8_ =
       dVar12 * dVar14 + dVar5 + auVar22._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_198 = auVar54._0_8_ * dVar14 + dVar10 + auVar32._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar55._8_4_ = SUB84(dVar8,0);
  auVar55._0_8_ = dVar6;
  auVar55._12_4_ = uVar51;
  auVar33 = blendpd(auVar20,auVar34,2);
  auVar56._0_8_ = auVar55._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar6;
  auVar56._8_8_ = dVar11 * auVar20._8_8_ - dVar2 * dVar8;
  auVar23._8_4_ = SUB84(dVar8,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = uVar51;
  auVar32._8_4_ = SUB84(dVar13,0);
  auVar32._0_8_ = dVar11;
  auVar32._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar20 = blendpd(auVar23,auVar32,2);
  dVar12 = (param_1->Max).field0_0x0._s_0.Y;
  auVar24._0_8_ = auVar20._0_8_ * dVar2 - auVar33._0_8_ * dVar11;
  auVar24._8_8_ = auVar20._8_8_ * dVar3 - auVar33._8_8_ * dVar13;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar32 = blendpd(auVar56,auVar24,2);
  auVar57._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar57._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  dVar4 = auVar56._8_8_ + auVar56._8_8_;
  dVar5 = auVar24._0_8_ + auVar24._0_8_;
  uVar51 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar45._8_4_ = SUB84(dVar5,0);
  auVar45._0_8_ = dVar4;
  auVar45._12_4_ = uVar51;
  auVar37._8_4_ = SUB84(dVar5,0);
  auVar37._0_8_ = dVar4;
  auVar37._12_4_ = uVar51;
  auVar32 = blendpd(auVar37,auVar57,2);
  auVar46._0_8_ = auVar45._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar4;
  auVar46._8_8_ = auVar57._0_8_ * auVar20._8_8_ - dVar2 * dVar5;
  auVar25._8_4_ = SUB84(auVar46._8_8_,0);
  auVar25._0_8_ = auVar46._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar20 = blendpd(auVar20,auVar34,2);
  auVar38._0_8_ = auVar32._0_8_ * dVar2 - auVar20._0_8_ * auVar57._0_8_;
  auVar38._8_8_ = auVar32._8_8_ * dVar3 - auVar20._8_8_ * auVar57._8_8_;
  dVar7 = (param_1->Max).field0_0x0._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar10 = dVar12 * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar51 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar13 = dVar1 * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar14 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar5 = dVar5 * dVar3 + dVar8 + auVar38._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  auVar32 = blendpd(auVar46,auVar38,2);
  local_190._8_4_ = SUB84(dVar5,0);
  local_190._0_8_ =
       dVar4 * dVar3 + dVar6 + auVar25._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_190._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_180 = auVar57._0_8_ * dVar3 + dVar11 + auVar32._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar32 = blendpd(auVar20,auVar34,2);
  auVar58._8_4_ = SUB84(dVar10,0);
  auVar58._0_8_ = dVar7;
  auVar58._12_4_ = uVar51;
  auVar59._0_8_ = auVar58._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar7;
  auVar59._8_8_ = dVar13 * auVar20._8_8_ - dVar2 * dVar10;
  auVar26._8_4_ = SUB84(dVar10,0);
  auVar26._0_8_ = dVar7;
  auVar26._12_4_ = uVar51;
  auVar33._8_4_ = SUB84(dVar14,0);
  auVar33._0_8_ = dVar13;
  auVar33._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar20 = blendpd(auVar26,auVar33,2);
  auVar27._0_8_ = auVar20._0_8_ * dVar2 - auVar32._0_8_ * dVar13;
  auVar27._8_8_ = auVar20._8_8_ * dVar3 - auVar32._8_8_ * dVar14;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar32 = blendpd(auVar59,auVar27,2);
  dVar4 = auVar59._8_8_ + auVar59._8_8_;
  dVar5 = auVar27._0_8_ + auVar27._0_8_;
  uVar51 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar60._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar60._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  auVar47._8_4_ = SUB84(dVar5,0);
  auVar47._0_8_ = dVar4;
  auVar47._12_4_ = uVar51;
  auVar39._8_4_ = SUB84(dVar5,0);
  auVar39._0_8_ = dVar4;
  auVar39._12_4_ = uVar51;
  auVar32 = blendpd(auVar39,auVar60,2);
  auVar48._0_8_ = auVar47._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar4;
  auVar48._8_8_ = auVar60._0_8_ * auVar20._8_8_ - dVar2 * dVar5;
  auVar20 = blendpd(auVar20,auVar34,2);
  auVar40._0_8_ = auVar32._0_8_ * dVar2 - auVar20._0_8_ * auVar60._0_8_;
  auVar40._8_8_ = auVar32._8_8_ * dVar3 - auVar20._8_8_ * auVar60._8_8_;
  auVar28._8_4_ = SUB84(auVar48._8_8_,0);
  auVar28._0_8_ = auVar48._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  local_1c8 = (param_1->Min).field0_0x0._s_0.X;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar5 = dVar5 * dVar3 + dVar10 + auVar40._0_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[1];
  auVar32 = blendpd(auVar48,auVar40,2);
  local_178._8_4_ = SUB84(dVar5,0);
  local_178._0_8_ =
       dVar4 * dVar3 + dVar7 + auVar28._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_168 = auVar60._0_8_ * dVar3 + dVar13 + auVar32._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  dVar1 = dVar1 * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar4 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar32 = blendpd(auVar20,auVar34,2);
  dVar6 = local_1c8 * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar12 = dVar12 * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar51 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar61._8_4_ = SUB84(dVar12,0);
  auVar61._0_8_ = dVar6;
  auVar61._12_4_ = uVar51;
  auVar62._0_8_ = auVar61._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar6;
  auVar62._8_8_ = dVar1 * auVar20._8_8_ - dVar2 * dVar12;
  auVar29._8_4_ = SUB84(dVar12,0);
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = uVar51;
  auVar9._8_4_ = SUB84(dVar4,0);
  auVar9._0_8_ = dVar1;
  auVar9._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar20 = blendpd(auVar29,auVar9,2);
  auVar30._0_8_ = auVar20._0_8_ * dVar2 - auVar32._0_8_ * dVar1;
  auVar30._8_8_ = auVar20._8_8_ * dVar3 - auVar32._8_8_ * dVar4;
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar32 = blendpd(auVar62,auVar30,2);
  dVar4 = auVar62._8_8_ + auVar62._8_8_;
  dVar5 = auVar30._0_8_ + auVar30._0_8_;
  uVar51 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar63._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar63._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  auVar49._8_4_ = SUB84(dVar5,0);
  auVar49._0_8_ = dVar4;
  auVar49._12_4_ = uVar51;
  auVar41._8_4_ = SUB84(dVar5,0);
  auVar41._0_8_ = dVar4;
  auVar41._12_4_ = uVar51;
  auVar32 = blendpd(auVar41,auVar63,2);
  auVar50._0_8_ = auVar49._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar4;
  auVar50._8_8_ = auVar63._0_8_ * auVar20._8_8_ - dVar2 * dVar5;
  auVar31._8_4_ = SUB84(auVar50._8_8_,0);
  auVar31._0_8_ = auVar50._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
  auVar34 = blendpd(auVar20,auVar34,2);
  auVar42._0_8_ = auVar32._0_8_ * dVar2 - auVar34._0_8_ * auVar63._0_8_;
  auVar42._8_8_ = auVar32._8_8_ * dVar3 - auVar34._8_8_ * auVar63._8_8_;
  local_1b8 = (param_1->Max).field0_0x0._s_0.Z;
  dVar12 = dVar5 * dVar3 + dVar12 + auVar42._0_8_ +
           (this->TotalTransform).Translation.XY.m128d_f64[1];
  auVar34 = blendpd(auVar50,auVar42,2);
  local_160._8_4_ = SUB84(dVar12,0);
  local_160._0_8_ =
       dVar4 * dVar3 + dVar6 + auVar31._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_160._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  local_150 = auVar63._0_8_ * dVar3 + dVar1 + auVar34._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  TransformP(this,&local_148,(TVector<double> *)&local_1c8);
  local_1b8 = (param_1->Max).field0_0x0._s_0.Z;
  dStack_1c0 = (param_1->Min).field0_0x0._s_0.Y;
  local_1c8 = (param_1->Max).field0_0x0._s_0.X;
  TransformP(this,&local_130,(TVector<double> *)&local_1c8);
  TransformP(this,&local_118,&param_1->Max);
  local_1b8 = (param_1->Max).field0_0x0._s_0.Z;
  dStack_1c0 = (param_1->Max).field0_0x0._s_0.Y;
  local_1c8 = (param_1->Min).field0_0x0._s_0.X;
  TransformP(this,&local_100,(TVector<double> *)&local_1c8);
  lVar17 = 0;
  do {
    lVar18 = 4;
    lVar15 = 0xc;
    lVar16 = 0;
    do {
      local_1d0 = param_4;
      local_1d8 = param_3;
      (**(code **)(this->_padding_ + 8))
                (this,local_1a8 + (longlong)*(int *)((longlong)BoxFaces[0] + lVar15 + lVar17) * 0x18
                 ,local_1a8 + (longlong)*(int *)((longlong)BoxFaces[0] + lVar16 + lVar17) * 0x18,
                 param_2);
      lVar18 = lVar18 + -1;
      lVar15 = lVar16;
      lVar16 = lVar16 + 4;
    } while (lVar18 != 0);
    lVar17 = lVar17 + 0x10;
  } while (lVar17 < 0x60);
  return;
}

// InternalDrawWireCylinder @ 1496e1e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::InternalDrawWireCylinder
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,float param_4,int param_5,FLinearColor *param_6,float param_7,bool param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float extraout_XMM0_Da;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float extraout_XMM0_Db;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
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
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar40;
  undefined4 uVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0 [7];
  
  GizmoMath::MakeNormalPlaneBasis
            (param_2,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_f0[0]._s_0);
  local_188 = local_108._s_0.X;
  dStack_180 = local_108._s_0.Y;
  local_170 = (double)local_f0[0]._0_8_;
  dStack_168 = (double)local_f0[0]._8_8_;
  local_178 = local_108._s_0.Z;
  dVar4 = (double)param_3;
  dVar61 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  local_1a8 = local_108._s_0.Z * dVar4 + (param_1->field0_0x0)._s_0.Z;
  dVar65 = local_108._s_0.X * dVar4 + (param_1->field0_0x0)._s_0.X;
  dVar40 = local_108._s_0.Y * dVar4 + (param_1->field0_0x0)._s_0.Y;
  dVar44 = local_1a8 * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar42 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  local_160 = (double)local_f0[0]._16_8_;
  auVar30 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar17 = auVar30._0_8_;
  dVar18 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * dVar65;
  dVar31 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * dVar40;
  uVar41 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar5 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar19 = blendpd(auVar5,auVar30,2);
  auVar62._8_4_ = SUB84(dVar31,0);
  auVar62._0_8_ = dVar18;
  auVar62._12_4_ = uVar41;
  auVar63._0_8_ = auVar62._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar18;
  auVar63._8_8_ = dVar44 * auVar5._8_8_ - dVar17 * dVar31;
  auVar20._8_4_ = SUB84(dVar31,0);
  auVar20._0_8_ = dVar18;
  auVar20._12_4_ = uVar41;
  auVar5._8_4_ = SUB84(dVar42,0);
  auVar5._0_8_ = dVar44;
  auVar5._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  auVar5 = blendpd(auVar20,auVar5,2);
  auVar45._8_4_ = SUB84(auVar63._8_8_,0);
  auVar45._0_8_ = auVar63._0_8_;
  auVar45._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar28._0_8_ = auVar5._0_8_ * dVar17 - auVar19._0_8_ * dVar44;
  auVar28._8_8_ = auVar5._8_8_ * auVar30._8_8_ - auVar19._8_8_ * dVar42;
  auVar5 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar19 = blendpd(auVar63,auVar28,2);
  dVar42 = auVar45._8_8_ + auVar45._8_8_;
  dVar50 = auVar28._0_8_ + auVar28._0_8_;
  auVar64._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar64._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar33._8_4_ = SUB84(dVar50,0);
  auVar33._0_8_ = dVar42;
  uVar41 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar33._12_4_ = uVar41;
  auVar25._8_4_ = SUB84(dVar50,0);
  auVar25._0_8_ = dVar42;
  auVar25._12_4_ = uVar41;
  auVar19 = blendpd(auVar25,auVar64,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar42;
  auVar34._8_8_ = auVar64._0_8_ * auVar5._8_8_ - dVar17 * dVar50;
  auVar5 = blendpd(auVar5,auVar30,2);
  auVar26._0_8_ = auVar19._0_8_ * dVar17 - auVar5._0_8_ * auVar64._0_8_;
  auVar26._8_8_ = auVar19._8_8_ * auVar30._8_8_ - auVar5._8_8_ * auVar64._8_8_;
  auVar6._8_4_ = SUB84(auVar34._8_8_,0);
  auVar6._0_8_ = auVar34._0_8_;
  auVar6._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  dVar17 = (double)param_4;
  auVar30 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  local_158 = dVar42 * dVar61 + dVar18 + auVar6._8_8_ +
              (this->TotalTransform).Translation.XY.m128d_f64[0];
  dStack_150 = dVar50 * dVar61 + dVar31 + auVar26._0_8_ +
               (this->TotalTransform).Translation.XY.m128d_f64[1];
  dVar42 = auVar30._8_8_;
  auVar5 = blendpd(auVar34,auVar26,2);
  local_1a8 = dVar17 * (param_2->field0_0x0)._s_0.Z + local_1a8;
  local_148 = auVar64._0_8_ * dVar61 + dVar44 + auVar5._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  dVar18 = local_1a8 * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar31 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar5 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar44 = auVar5._0_8_;
  dVar61 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] *
           (dVar17 * (param_2->field0_0x0)._s_0.X + dVar65);
  dVar50 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] *
           (dVar17 * (param_2->field0_0x0)._s_0.Y + dVar40);
  auVar19 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar52._8_4_ = SUB84(dVar50,0);
  auVar52._0_8_ = dVar61;
  uVar41 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar52._12_4_ = uVar41;
  auVar20 = blendpd(auVar19,auVar5,2);
  auVar53._0_8_ = auVar52._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar61;
  auVar53._8_8_ = dVar18 * auVar19._8_8_ - dVar44 * dVar50;
  auVar7._8_4_ = SUB84(dVar50,0);
  auVar7._0_8_ = dVar61;
  auVar7._12_4_ = uVar41;
  auVar19._8_4_ = SUB84(dVar31,0);
  auVar19._0_8_ = dVar18;
  auVar19._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  auVar19 = blendpd(auVar7,auVar19,2);
  auVar35._8_4_ = SUB84(auVar53._8_8_,0);
  auVar35._0_8_ = auVar53._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
  auVar8._0_8_ = auVar19._0_8_ * dVar44 - auVar20._0_8_ * dVar18;
  auVar8._8_8_ = auVar19._8_8_ * auVar5._8_8_ - auVar20._8_8_ * dVar31;
  auVar19 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar20 = blendpd(auVar53,auVar8,2);
  dVar31 = auVar35._8_8_ + auVar35._8_8_;
  dVar40 = auVar8._0_8_ + auVar8._0_8_;
  auVar54._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar54._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar46._8_4_ = SUB84(dVar40,0);
  auVar46._0_8_ = dVar31;
  uVar41 = (undefined4)((ulonglong)dVar40 >> 0x20);
  auVar46._12_4_ = uVar41;
  auVar27._8_4_ = SUB84(dVar40,0);
  auVar27._0_8_ = dVar31;
  auVar27._12_4_ = uVar41;
  auVar20 = blendpd(auVar19,auVar5,2);
  auVar28 = blendpd(auVar27,auVar54,2);
  auVar15._8_4_ = auVar30._8_4_;
  auVar15._0_8_ = dVar42;
  auVar15._12_4_ = auVar30._12_4_;
  auVar47._0_8_ = auVar46._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar31;
  auVar47._8_8_ = auVar54._0_8_ * auVar19._8_8_ - dVar44 * dVar40;
  auVar30._8_4_ = SUB84(auVar47._8_8_,0);
  auVar30._0_8_ = auVar47._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar29._0_8_ = auVar28._0_8_ * dVar44 - auVar20._0_8_ * auVar54._0_8_;
  auVar29._8_8_ = auVar28._8_8_ * auVar5._8_8_ - auVar20._8_8_ * auVar54._8_8_;
  auVar5 = blendpd(auVar47,auVar29,2);
  local_140 = dVar42 * dVar31 + dVar61 + auVar30._8_8_ +
              (this->TotalTransform).Translation.XY.m128d_f64[0];
  dStack_138 = auVar15._8_8_ * dVar40 + dVar50 + auVar29._0_8_ +
               (this->TotalTransform).Translation.XY.m128d_f64[1];
  local_130 = dVar42 * auVar54._0_8_ + dVar18 + auVar5._0_8_ +
              (this->TotalTransform).Translation.ZW.m128d_f64[0];
  iVar3 = 0;
  if (0 < param_5) {
    do {
      iVar3 = iVar3 + 1;
      __libm_sse2_sincosf_();
      dVar40 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
      dVar18 = (double)extraout_XMM0_Da;
      dVar31 = (double)extraout_XMM0_Db;
      dVar32 = (local_170 * dVar18 + local_188 * dVar31) * dVar4 + (param_1->field0_0x0)._s_0.X;
      auVar30 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
      dVar50 = (dStack_168 * dVar18 + local_108._s_0.Y * dVar31) * dVar4 +
               (param_1->field0_0x0)._s_0.Y;
      auVar5 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
      dVar65 = auVar5._0_8_;
      dVar61 = (local_160 * dVar18 + dVar31 * local_108._s_0.Z) * dVar4 +
               (param_1->field0_0x0)._s_0.Z;
      dVar18 = dVar32 * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
      dVar31 = dVar50 * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
      uVar41 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar42 = dVar61 * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar44 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar19 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
      auVar55._8_4_ = SUB84(dVar31,0);
      auVar55._0_8_ = dVar18;
      auVar55._12_4_ = uVar41;
      dVar16 = auVar5._8_8_;
      auVar20 = blendpd(auVar19,auVar5,2);
      auVar56._0_8_ = auVar55._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar18;
      auVar56._8_8_ = dVar42 * auVar19._8_8_ - dVar65 * dVar31;
      auVar48._8_4_ = SUB84(auVar56._8_8_,0);
      auVar48._0_8_ = auVar56._0_8_;
      auVar48._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
      auVar9._8_4_ = SUB84(dVar31,0);
      auVar9._0_8_ = dVar18;
      auVar9._12_4_ = uVar41;
      auVar1._8_4_ = SUB84(dVar44,0);
      auVar1._0_8_ = dVar42;
      auVar1._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar19 = blendpd(auVar9,auVar1,2);
      auVar10._0_8_ = auVar19._0_8_ * dVar65 - auVar20._0_8_ * dVar42;
      auVar10._8_8_ = auVar19._8_8_ * dVar16 - auVar20._8_8_ * dVar44;
      auVar19 = blendpd(auVar56,auVar10,2);
      dVar43 = auVar48._8_8_ + auVar48._8_8_;
      dVar51 = auVar10._0_8_ + auVar10._0_8_;
      auVar57._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar57._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar36._8_4_ = SUB84(dVar51,0);
      auVar36._0_8_ = dVar43;
      uVar41 = (undefined4)((ulonglong)dVar51 >> 0x20);
      auVar36._12_4_ = uVar41;
      auVar21._8_4_ = SUB84(dVar51,0);
      auVar21._0_8_ = dVar43;
      auVar21._12_4_ = uVar41;
      auVar19 = blendpd(auVar21,auVar57,2);
      auVar20 = blendpd(auVar30,auVar5,2);
      auVar37._0_8_ = auVar36._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar43;
      auVar37._8_8_ = auVar57._0_8_ * auVar30._8_8_ - dVar65 * dVar51;
      auVar22._0_8_ = auVar19._0_8_ * dVar65 - auVar20._0_8_ * auVar57._0_8_;
      auVar22._8_8_ = auVar19._8_8_ * dVar16 - auVar20._8_8_ * auVar57._8_8_;
      auVar30 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
      auVar11._8_4_ = SUB84(auVar37._8_8_,0);
      auVar11._0_8_ = auVar37._0_8_;
      auVar11._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
      auVar19 = blendpd(auVar37,auVar22,2);
      local_190 = auVar57._0_8_ * dVar40 + dVar42 + auVar19._0_8_ +
                  (this->TotalTransform).Translation.ZW.m128d_f64[0];
      dVar42 = (dVar17 * (param_2->field0_0x0)._s_0.Z + dVar61) *
               (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar44 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar19 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
      local_1a0 = dVar43 * dVar40 + dVar18 + auVar11._8_8_ +
                  (this->TotalTransform).Translation.XY.m128d_f64[0];
      dStack_198 = dVar51 * dVar40 + dVar31 + auVar22._0_8_ +
                   (this->TotalTransform).Translation.XY.m128d_f64[1];
      auVar20 = blendpd(auVar19,auVar5,2);
      dVar18 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] *
               (dVar17 * (param_2->field0_0x0)._s_0.X + dVar32);
      dVar31 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] *
               (dVar17 * (param_2->field0_0x0)._s_0.Y + dVar50);
      uVar41 = (undefined4)((ulonglong)dVar31 >> 0x20);
      auVar58._8_4_ = SUB84(dVar31,0);
      auVar58._0_8_ = dVar18;
      auVar58._12_4_ = uVar41;
      auVar59._0_8_ = auVar58._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar18;
      auVar59._8_8_ = dVar42 * auVar19._8_8_ - dVar65 * dVar31;
      auVar12._8_4_ = SUB84(dVar31,0);
      auVar12._0_8_ = dVar18;
      auVar12._12_4_ = uVar41;
      auVar2._8_4_ = SUB84(dVar44,0);
      auVar2._0_8_ = dVar42;
      auVar2._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar19 = blendpd(auVar12,auVar2,2);
      auVar49._8_4_ = SUB84(auVar59._8_8_,0);
      auVar49._0_8_ = auVar59._0_8_;
      auVar49._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
      auVar13._0_8_ = auVar19._0_8_ * dVar65 - auVar20._0_8_ * dVar42;
      auVar13._8_8_ = auVar19._8_8_ * dVar16 - auVar20._8_8_ * dVar44;
      auVar19 = blendpd(auVar59,auVar13,2);
      dVar44 = auVar49._8_8_ + auVar49._8_8_;
      dVar40 = auVar13._0_8_ + auVar13._0_8_;
      auVar60._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar60._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar38._8_4_ = SUB84(dVar40,0);
      auVar38._0_8_ = dVar44;
      uVar41 = (undefined4)((ulonglong)dVar40 >> 0x20);
      auVar38._12_4_ = uVar41;
      auVar23._8_4_ = SUB84(dVar40,0);
      auVar23._0_8_ = dVar44;
      auVar23._12_4_ = uVar41;
      auVar19 = blendpd(auVar23,auVar60,2);
      auVar39._0_8_ = auVar38._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar44;
      auVar39._8_8_ = auVar60._0_8_ * auVar30._8_8_ - dVar65 * dVar40;
      auVar14._8_4_ = SUB84(auVar39._8_8_,0);
      auVar14._0_8_ = auVar39._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar30 = blendpd(auVar30,auVar5,2);
      auVar24._0_8_ = auVar19._0_8_ * dVar65 - auVar30._0_8_ * auVar60._0_8_;
      auVar24._8_8_ = auVar19._8_8_ * dVar16 - auVar30._8_8_ * auVar60._8_8_;
      auVar30 = blendpd(auVar39,auVar24,2);
      local_1b8 = dVar44 * dVar16 + dVar18 + auVar14._8_8_ +
                  (this->TotalTransform).Translation.XY.m128d_f64[0];
      dStack_1b0 = dVar40 * dVar16 + dVar31 + auVar24._0_8_ +
                   (this->TotalTransform).Translation.XY.m128d_f64[1];
      local_1a8 = auVar60._0_8_ * dVar16 + dVar42 + auVar30._0_8_ +
                  (this->TotalTransform).Translation.ZW.m128d_f64[0];
      (**(code **)(this->_padding_ + 8))(this,&local_158,&local_1a0,param_6,param_7,param_8);
      (**(code **)(this->_padding_ + 8))(this,&local_1a0,&local_1b8,param_6,param_7,param_8);
      (**(code **)(this->_padding_ + 8))(this,&local_140,&local_1b8,param_6,param_7,param_8);
      local_148 = local_190;
      local_130 = local_1a8;
      local_158 = local_1a0;
      dStack_150 = dStack_198;
      local_140 = local_1b8;
      dStack_138 = dStack_1b0;
    } while (iVar3 < param_5);
  }
  return;
}

// PopAllTransforms @ 1496e2a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FToolDataVisualizer::PopAllTransforms(FToolDataVisualizer *this)

{
  (this->TransformStack).ArrayNum = 0;
  if ((this->TransformStack).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->TransformStack).AllocatorInstance,0,
               &(this->TransformStack).ArrayMax);
  }
  *&(this->TotalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TotalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TotalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TotalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TotalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TotalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// PopTransform @ 1496e2b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FToolDataVisualizer::PopTransform(FToolDataVisualizer *this)

{
  uint uVar1;
  int *piVar2;
  TTransform<double> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *_Dst;
  TTransform<double> *pTVar7;
  TTransform<double> *pTVar8;
  undefined1 local_res8 [8];
  
  if ((this->TransformStack).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar4 = (this->TransformStack).ArrayNum;
  uVar1 = iVar4 - 1;
  iVar4 = ~uVar1 + iVar4;
  _Dst = (this->TransformStack).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x60;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x60,(longlong)iVar4 * 0x60);
  }
  piVar2 = &(this->TransformStack).ArrayNum;
  *piVar2 = *piVar2 + -1;
  pTVar3 = &this->TotalTransform;
  *&(pTVar3->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TotalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TotalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TotalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TotalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TotalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  iVar4 = (this->TransformStack).ArrayNum;
  pTVar7 = (TTransform<double> *)(this->TransformStack).AllocatorInstance.Data;
  pTVar8 = pTVar7 + iVar4;
  while( true ) {
    if ((this->TransformStack).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar7 == pTVar8) break;
    UE::Math::TTransform<double>::Multiply(pTVar3,pTVar3,pTVar7);
    pTVar7 = pTVar7 + 1;
  }
  return;
}

// PushTransform @ 1496e30b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::PushTransform(FToolDataVisualizer *this,TTransform<double> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TTransform<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar2 = &this->TransformStack;
  pTVar3 = (TTransform<double> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->TransformStack).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->TransformStack).ArrayNum;
  piVar1 = &(this->TransformStack).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TransformStack).ArrayNum = iVar8 + 1;
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  lVar9 = (longlong)iVar8 * 0x60;
  *(double *)(pFVar4 + lVar9) = (param_1->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 8) = dVar6;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x10) = (param_1->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x10 + 8) = dVar6;
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x20) = (param_1->Translation).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x20 + 8) = dVar6;
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x30) = (param_1->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x30 + 8) = dVar6;
  dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x40) = (param_1->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x40 + 8) = dVar6;
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x50) = (param_1->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x50 + 8) = dVar6;
  UE::Math::TTransform<double>::Multiply(&this->TotalTransform,&this->TotalTransform,param_1);
  return;
}

// SetTransform @ 1496e6020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::SetTransform(FToolDataVisualizer *this,TTransform<double> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TTransform<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar2 = &this->TransformStack;
  piVar1 = &(this->TransformStack).ArrayMax;
  (this->TransformStack).ArrayNum = 0;
  if ((this->TransformStack).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pTVar3 = (TTransform<double> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + *piVar1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->TransformStack).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TransformStack).ArrayNum = iVar8 + 1;
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  lVar9 = (longlong)iVar8 * 0x60;
  *(double *)(pFVar4 + lVar9) = (param_1->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 8) = dVar6;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x10) = (param_1->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x10 + 8) = dVar6;
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x20) = (param_1->Translation).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x20 + 8) = dVar6;
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x30) = (param_1->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x30 + 8) = dVar6;
  dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x40) = (param_1->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x40 + 8) = dVar6;
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x50) = (param_1->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x50 + 8) = dVar6;
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  (this->TotalTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->TotalTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->TotalTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->TotalTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  (this->TotalTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->TotalTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  (this->TotalTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->TotalTransform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->TotalTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->TotalTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->TotalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->TotalTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  return;
}

// TransformN @ 1496e6c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FToolDataVisualizer::TransformN
          (FToolDataVisualizer *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  dVar10 = (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  dVar6 = (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar14 = dVar4 * dVar10;
  dVar2 = dVar6 * dVar14;
  dVar7 = __real_3ff0000000000000;
  if ((dVar2 <= 0.0) && (dVar7 = 0.0, dVar2 < 0.0)) {
    dVar7 = __real_bff0000000000000;
  }
  dVar14 = dVar14 * dVar7 * (param_1->field0_0x0)._s_0.Z;
  dVar4 = dVar4 * dVar6 * dVar7 * (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar10 * dVar6 * dVar7 * (param_1->field0_0x0)._s_0.Y;
  dVar10 = dVar2 * dVar2 + dVar4 * dVar4 + dVar14 * dVar14;
  uVar3 = dVar2;
  uVar5 = dVar4;
  uVar15 = dVar14;
  if ((dVar10 != __real_3ff0000000000000) &&
     (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar10)) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar5 = dVar4 * dVar10;
    uVar3 = dVar2 * dVar10;
    uVar15 = dVar14 * dVar10;
  }
  uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
  auVar1 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar6 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  auVar8 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar19._8_4_ = (int)uVar3;
  auVar19._0_8_ = uVar5;
  auVar19._12_4_ = uVar18;
  dVar2 = auVar1._0_8_;
  auVar11 = blendpd(auVar8,auVar1,2);
  auVar20._0_8_ = auVar19._8_8_ * auVar8._0_8_ - auVar8._8_8_ * (double)uVar5;
  auVar20._8_8_ = (double)uVar15 * auVar8._8_8_ - dVar2 * (double)uVar3;
  auVar21._8_4_ = (int)uVar3;
  auVar21._0_8_ = uVar5;
  auVar21._12_4_ = uVar18;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar15;
  auVar8 = blendpd(auVar21,auVar8,2);
  auVar9._0_8_ = auVar8._0_8_ * dVar2 - auVar11._0_8_ * (double)uVar15;
  auVar9._8_8_ = auVar8._8_8_ * auVar1._8_8_ - auVar11._8_8_ * 0.0;
  auVar8 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar20,auVar9,2);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  dVar10 = auVar20._8_8_ + auVar20._8_8_;
  dVar4 = auVar9._0_8_ + auVar9._0_8_;
  uVar18 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar16._8_4_ = SUB84(dVar4,0);
  auVar16._0_8_ = dVar10;
  auVar16._12_4_ = uVar18;
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar10;
  auVar12._12_4_ = uVar18;
  auVar21 = blendpd(auVar12,auVar22,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar10;
  auVar17._8_8_ = auVar22._0_8_ * auVar8._8_8_ - dVar2 * dVar4;
  auVar11._8_4_ = SUB84(auVar17._8_8_,0);
  auVar11._0_8_ = auVar17._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar8 = blendpd(auVar8,auVar1,2);
  auVar13._0_8_ = auVar21._0_8_ * dVar2 - auVar8._0_8_ * auVar22._0_8_;
  auVar13._8_8_ = auVar21._8_8_ * auVar1._8_8_ - auVar8._8_8_ * auVar22._8_8_;
  auVar8 = blendpd(auVar17,auVar13,2);
  dVar2 = dVar4 * dVar6 + (double)uVar3 + auVar13._0_8_;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar10 * dVar6 + (double)uVar5 + auVar11._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar22._0_8_ * dVar6 + (double)uVar15 + auVar8._0_8_;
  return __return_storage_ptr__;
}

// TransformP @ 1496e6e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FToolDataVisualizer::TransformP
          (FToolDataVisualizer *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  auVar10 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  dVar8 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar4 = (param_1->field0_0x0)._s_0.X * (this->TotalTransform).Scale3D.XY.m128d_f64[0];
  dVar5 = (param_1->field0_0x0)._s_0.Y * (this->TotalTransform).Scale3D.XY.m128d_f64[1];
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar12 = blendpd(auVar10,auVar1,2);
  auVar18._8_4_ = SUB84(dVar5,0);
  auVar18._0_8_ = dVar4;
  auVar18._12_4_ = uVar17;
  dVar3 = auVar1._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
  auVar19._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar6;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar3 - auVar12._0_8_ * dVar6;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar7;
  auVar10 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar20 = blendpd(auVar19,auVar11,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar7 = auVar19._8_8_ + auVar19._8_8_;
  dVar2 = auVar11._0_8_ + auVar11._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar7;
  auVar13._12_4_ = uVar17;
  auVar20 = blendpd(auVar13,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
  auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar3 * dVar2;
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar1,2);
  dVar9 = (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar14._0_8_ = auVar20._0_8_ * dVar3 - auVar10._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
  auVar10 = blendpd(auVar16,auVar14,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar14._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar12._8_8_ +
                 (this->TotalTransform).Translation.XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar21._0_8_ * dVar8 + dVar6 + auVar10._0_8_ + dVar9;
  return __return_storage_ptr__;
}

