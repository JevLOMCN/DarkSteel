// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// GetAdjustedComponentToWorld @ 14969ff70

TTransform<double> * __thiscall
UE::GizmoRenderingUtil::FSimpleConstantViewScaleAdjuster::GetAdjustedComponentToWorld
          (FSimpleConstantViewScaleAdjuster *this,TTransform<double> *__return_storage_ptr__,
          ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  TOptional<double> local_38;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_28._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_28._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_38.bIsSet = false;
  fVar7 = CalculateLocalPixelToWorldScale(param_1,(TVector<double> *)&local_28._s_0,false,&local_38)
  ;
  dVar2 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar8 = (double)fVar7;
  dVar5 = (param_2->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar5;
  dVar5 = (param_2->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar2 = (param_2->Translation).ZW.m128d_f64[0];
  dVar4 = (param_2->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar5 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar6 = (param_2->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar4 = (param_2->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  dVar4 = (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar2 = dVar8 * (__return_storage_ptr__->Scale3D).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar8 * (__return_storage_ptr__->Scale3D).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar1;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar8 * (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar3;
  return __return_storage_ptr__;
}

// GetViewIndependentBounds @ 1496aaaf0

TBoxSphereBounds<double,double> * __thiscall
UE::GizmoRenderingUtil::FSimpleConstantViewScaleAdjuster::GetViewIndependentBounds
          (FSimpleConstantViewScaleAdjuster *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar3 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.X;
  uVar2 = ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.Z;
  uVar1 = ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar1;
  uVar4 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.Z;
  uVar1 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)uVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar3;
  dVar5 = ViewBasedTransformAdjustersLocals::InfiniteBounds.SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)uVar4;
  __return_storage_ptr__->SphereRadius = dVar5;
  return __return_storage_ptr__;
}

