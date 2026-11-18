// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 66

// Construct<FPerlinLayerProperties> @ 14cbff470

void __cdecl UE::CoreUObject::Private::Construct<FPerlinLayerProperties>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// ConstructForTests<FPerlinLayerProperties> @ 14cbff490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPerlinLayerProperties>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// Destruct<FPerlinLayerProperties> @ 14cbff4b0

void __cdecl UE::CoreUObject::Private::Destruct<FPerlinLayerProperties>(void *param_1)

{
  return;
}

// Copy<FPerlinLayerProperties> @ 14cbff4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPerlinLayerProperties>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// operator-<double> @ 14cc060e0

TQuaternion<double> * __cdecl
UE::Geometry::operator-<double>
          (TQuaternion<double> *__return_storage_ptr__,TQuaternion<double> *param_1,
          TQuaternion<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.W;
  dVar2 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_2->field0_0x0)._s_0.W;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  dVar4 = dVar4 - dVar7;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar5 - dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// DeleterFunc<FGroupTopologyLaplacianDeformer> @ 14cc11dd0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<FGroupTopologyLaplacianDeformer>(void *param_1)

{
  FGroupTopologyLaplacianDeformer::~FGroupTopologyLaplacianDeformer
            ((FGroupTopologyLaplacianDeformer *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x350);
  return;
}

// DereferenceIfNecessary<UDeformMeshPolygonsTool,UDeformMeshPolygonsTool_*_&> @ 14cc11e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDeformMeshPolygonsTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UDeformMeshPolygonsTool,UDeformMeshPolygonsTool_*_&>
          (UDeformMeshPolygonsTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UDynamicMeshBrushTool,UDynamicMeshBrushTool_*_&> @ 14cc11e20

UDynamicMeshBrushTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UDynamicMeshBrushTool,UDynamicMeshBrushTool_*_&>
          (UDynamicMeshBrushTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UDynamicMeshSculptTool,UDynamicMeshSculptTool_*_&> @ 14cc11e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDynamicMeshSculptTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UDynamicMeshSculptTool,UDynamicMeshSculptTool_*_&>
          (UDynamicMeshSculptTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEditMeshPolygonsTool,UEditMeshPolygonsTool_*_&> @ 14cc11e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEditMeshPolygonsTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEditMeshPolygonsTool,UEditMeshPolygonsTool_*_&>
          (UEditMeshPolygonsTool **param_1)

{
  return *param_1;
}

// SignedAngleR<double> @ 14cc1a520

double __cdecl
UE::Geometry::SignedAngleR<double>(TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double _X;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  uVar4 = SUB84(__real_bff0000000000000,0);
  uVar5 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar3 = dVar1 * dVar2 + (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar3) && (_X = dVar3, __real_3ff0000000000000 <= dVar3)) {
    _X = __real_3ff0000000000000;
  }
  dVar2 = dVar2 * (param_1->field0_0x0)._s_0.X - dVar1 * (param_2->field0_0x0)._s_0.X;
  dVar1 = 0.0;
  if (__real_3e45798ee2308c3a <= dVar2 * dVar2) {
    if (0.0 <= dVar2) {
      uVar4 = SUB84(__real_3ff0000000000000,0);
      uVar5 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar1 = acos(_X);
    dVar1 = dVar1 * (double)CONCAT44(uVar5,uVar4);
  }
  else if (dVar3 < 0.0) {
    return __real_400921fb54442d18;
  }
  return dVar1;
}

// Construct<FBrushToolRadius> @ 14cc91ff0

void __cdecl UE::CoreUObject::Private::Construct<FBrushToolRadius>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x447a0000;
  return;
}

// ConstructForTests<FBrushToolRadius> @ 14cc92020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBrushToolRadius>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x447a0000;
  return;
}

// Destruct<FBrushToolRadius> @ 14cc92050

void __cdecl UE::CoreUObject::Private::Destruct<FBrushToolRadius>(void *param_1)

{
  return;
}

// Copy<FBrushToolRadius> @ 14cc92120

bool __cdecl
UE::CoreUObject::Private::Copy<FBrushToolRadius>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14cc96510

double __cdecl
`UE::SculptFalloffs::MakeInverseBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 local_res18 [16];
  
  dVar1 = operator()(local_res18,param_1,param_2);
  return dVar1;
}

// <lambda_invoker_cdecl> @ 14cc96530

double __cdecl
`UE::SculptFalloffs::MakeInverseFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  dVar3 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->LocalFrame).Origin.field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar8 = __real_3ff0000000000000 - param_1->Falloff;
  auVar4._0_8_ = dVar2 * dVar2;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3 * dVar3 + auVar4._0_8_ + dVar1 * dVar1;
  auVar5 = sqrtpd(auVar4,auVar5);
  uVar6 = 0;
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
  }
  else {
    dVar8 = 0.0;
  }
  dVar3 = auVar5._0_8_ / param_1->Radius;
  if (dVar3 <= dVar8) {
    return __real_3ff0000000000000;
  }
  dVar8 = (dVar3 - dVar8) / (__real_3ff0000000000000 - dVar8);
  dVar3 = __real_3ff0000000000000;
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
    dVar3 = __real_3ff0000000000000 - dVar8;
    uVar7 = 0;
    if (dVar3 < 0.0) goto LAB_14cc965bf;
  }
  uVar6 = SUB84(dVar3,0);
  uVar7 = (int)((ulonglong)dVar3 >> 0x20);
  if (__real_3ff0000000000000 <= dVar3) {
    uVar6 = SUB84(__real_3ff0000000000000,0);
    uVar7 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
LAB_14cc965bf:
  return (double)CONCAT44(uVar7,uVar6) * (double)CONCAT44(uVar7,uVar6) *
         (double)CONCAT44(uVar7,uVar6);
}

// <lambda_invoker_cdecl> @ 14cc965e0

double __cdecl
`UE::SculptFalloffs::MakeLinearBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 local_res18 [16];
  
  dVar1 = operator()(local_res18,param_1,param_2);
  return dVar1;
}

// <lambda_invoker_cdecl> @ 14cc96600

double __cdecl
`UE::SculptFalloffs::MakeLinearFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  dVar3 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->LocalFrame).Origin.field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar8 = __real_3ff0000000000000 - param_1->Falloff;
  auVar4._0_8_ = dVar2 * dVar2;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3 * dVar3 + auVar4._0_8_ + dVar1 * dVar1;
  auVar5 = sqrtpd(auVar4,auVar5);
  uVar6 = 0;
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
  }
  else {
    dVar8 = 0.0;
  }
  dVar3 = auVar5._0_8_ / param_1->Radius;
  if (dVar3 <= dVar8) {
    return __real_3ff0000000000000;
  }
  dVar8 = (dVar3 - dVar8) / (__real_3ff0000000000000 - dVar8);
  dVar3 = __real_3ff0000000000000;
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
    dVar3 = __real_3ff0000000000000 - dVar8;
    uVar7 = 0;
    if (dVar3 < 0.0) goto LAB_14cc9668f;
  }
  uVar6 = SUB84(dVar3,0);
  uVar7 = (int)((ulonglong)dVar3 >> 0x20);
  if (__real_3ff0000000000000 <= dVar3) {
    uVar6 = SUB84(__real_3ff0000000000000,0);
    uVar7 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
LAB_14cc9668f:
  return (double)CONCAT44(uVar7,uVar6);
}

// <lambda_invoker_cdecl> @ 14cc966a0

double __cdecl
`UE::SculptFalloffs::MakeRoundBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 local_res18 [16];
  
  dVar1 = operator()(local_res18,param_1,param_2);
  return dVar1;
}

// <lambda_invoker_cdecl> @ 14cc966c0

double __cdecl
`UE::SculptFalloffs::MakeRoundFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  dVar3 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->LocalFrame).Origin.field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar8 = __real_3ff0000000000000 - param_1->Falloff;
  auVar4._0_8_ = dVar2 * dVar2;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3 * dVar3 + auVar4._0_8_ + dVar1 * dVar1;
  auVar5 = sqrtpd(auVar4,auVar5);
  uVar6 = 0;
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
  }
  else {
    dVar8 = 0.0;
  }
  dVar3 = auVar5._0_8_ / param_1->Radius;
  if (dVar3 <= dVar8) {
    return __real_3ff0000000000000;
  }
  dVar8 = (dVar3 - dVar8) / (__real_3ff0000000000000 - dVar8);
  dVar3 = __real_3ff0000000000000;
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
    dVar3 = __real_3ff0000000000000 - dVar8 * dVar8;
    uVar7 = 0;
    if (dVar3 < 0.0) goto LAB_14cc96753;
  }
  uVar6 = SUB84(dVar3,0);
  uVar7 = (int)((ulonglong)dVar3 >> 0x20);
  if (__real_3ff0000000000000 <= dVar3) {
    uVar6 = SUB84(__real_3ff0000000000000,0);
    uVar7 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
LAB_14cc96753:
  return (double)CONCAT44(uVar7,uVar6);
}

// <lambda_invoker_cdecl> @ 14cc96760

double __cdecl
`UE::SculptFalloffs::MakeSmoothBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 local_res18 [16];
  
  dVar1 = operator()(local_res18,param_1,param_2);
  return dVar1;
}

// <lambda_invoker_cdecl> @ 14cc96780

double __cdecl
`UE::SculptFalloffs::MakeStandardSmoothFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM4 [16];
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar3 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->LocalFrame).Origin.field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar5 = __real_3ff0000000000000 - param_1->Falloff;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  auVar4 = sqrtpd(in_XMM4,auVar4);
  if (0.0 <= dVar5) {
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  else {
    dVar5 = 0.0;
  }
  dVar2 = auVar4._0_8_ / param_1->Radius;
  dVar1 = __real_3ff0000000000000;
  if (dVar5 < dVar2) {
    dVar1 = (dVar2 - dVar5) / (__real_3ff0000000000000 - dVar5);
    dVar5 = 0.0;
    if ((0.0 <= dVar1) && (dVar5 = dVar1, __real_3ff0000000000000 <= dVar1)) {
      dVar5 = __real_3ff0000000000000;
    }
    dVar1 = __real_3ff0000000000000 - dVar5 * dVar5;
    dVar1 = dVar1 * dVar1 * dVar1;
  }
  return dVar1;
}

// DeleterFunc<UE::Geometry::FDynamicGraph3<double>_> @ 14ccad540

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FDynamicGraph3<double>_>(void *param_1)

{
  UE::Geometry::TDynamicVector<double,512>::Empty
            ((TDynamicVector<double,512> *)((longlong)param_1 + 0x120),0);
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  UE::Geometry::FDynamicGraph::~FDynamicGraph((FDynamicGraph *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x140);
  return;
}

// DeleterFunc<UE::Geometry::FMeshPlanarSymmetry> @ 14ccad5a0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FMeshPlanarSymmetry>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  ::operator_delete(param_1,0x90);
  return;
}

// DeleterFunc<FSelectClickedAction> @ 14ccad5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FSelectClickedAction>(void *param_1)

{
  FSelectClickedAction::~FSelectClickedAction((FSelectClickedAction *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0xc0);
  return;
}

// DereferenceIfNecessary<UHoleFillTool,UHoleFillTool_*_&> @ 14ccad600

UHoleFillTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UHoleFillTool,UHoleFillTool_*_&>(UHoleFillTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMeshGroupPaintTool,UMeshGroupPaintTool_*_&> @ 14ccad620

UMeshGroupPaintTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMeshGroupPaintTool,UMeshGroupPaintTool_*_&>
          (UMeshGroupPaintTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMeshSculptToolBase,UMeshSculptToolBase_*_&> @ 14ccad640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshSculptToolBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMeshSculptToolBase,UMeshSculptToolBase_*_&>
          (UMeshSculptToolBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMeshSpaceDeformerTool,UMeshSpaceDeformerTool_*_&> @ 14ccad660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshSpaceDeformerTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMeshSpaceDeformerTool,UMeshSpaceDeformerTool_*_&>
          (UMeshSpaceDeformerTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMeshVertexPaintTool,UMeshVertexPaintTool_*_&> @ 14ccad680

UMeshVertexPaintTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMeshVertexPaintTool,UMeshVertexPaintTool_*_&>
          (UMeshVertexPaintTool **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMeshVertexSculptTool,UMeshVertexSculptTool_*_&> @ 14ccad6a0

UMeshVertexSculptTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMeshVertexSculptTool,UMeshVertexSculptTool_*_&>
          (UMeshVertexSculptTool **param_1)

{
  return *param_1;
}

// operator() @ 14cccc430

double __thiscall
`UE::SculptFalloffs::MakeInverseBoxFalloff'::__l2::<lambda_1>::operator()
          (void *this,FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [5];
  
  dVar6 = __real_3ff0000000000000;
  dVar5 = __real_3ff0000000000000 - param_1->Falloff;
  if (0.0 <= dVar5) {
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  else {
    dVar5 = 0.0;
  }
  local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  dVar5 = param_1->Radius * dVar5;
  local_98._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
  dVar4 = param_1->Radius - dVar5;
  dVar5 = dVar5 * __real_3fe6a09e667f3bcc;
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(param_1->LocalFrame).Rotation,(TVector<double> *)&local_80[0]._s_0,
             (TVector<double> *)&local_98._s_0);
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - dVar5;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - dVar5;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - dVar5;
  dVar2 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar5 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_80[0]._s_0.Y;
  if ((((((double)local_80[0]._0_8_ < dVar10) || ((double)local_80[0]._8_8_ < dVar7)) ||
       ((double)local_80[0]._16_8_ < dVar9)) ||
      ((dVar2 < (double)local_80[0]._0_8_ || (dVar3 < (double)local_80[0]._8_8_)))) ||
     (dVar5 < (double)local_80[0]._16_8_)) {
    if (dVar10 <= (double)local_80[0]._0_8_) {
      if ((double)local_80[0]._0_8_ <= dVar2) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = (double)local_80[0]._0_8_ - dVar2;
      }
    }
    else {
      dVar10 = dVar10 - (double)local_80[0]._0_8_;
    }
    if (dVar7 <= (double)local_80[0]._8_8_) {
      if ((double)local_80[0]._8_8_ <= dVar3) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (double)local_80[0]._8_8_ - dVar3;
      }
    }
    else {
      dVar7 = dVar7 - (double)local_80[0]._8_8_;
    }
    if (dVar9 <= (double)local_80[0]._16_8_) {
      if ((double)local_80[0]._16_8_ <= dVar5) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = (double)local_80[0]._16_8_ - dVar5;
      }
    }
    else {
      dVar9 = dVar9 - (double)local_80[0]._16_8_;
    }
    dVar5 = dVar7 * dVar7 + dVar10 * dVar10 + dVar9 * dVar9;
    if (dVar4 * dVar4 <= dVar5) {
      dVar6 = 0.0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar5;
      auVar8 = sqrtpd(auVar8,auVar1);
      dVar7 = auVar8._0_8_ * (dVar6 / dVar4);
      dVar5 = 0.0;
      if ((0.0 <= dVar7) && (dVar5 = dVar7, dVar6 <= dVar7)) {
        dVar5 = dVar6;
      }
      dVar6 = dVar6 - dVar5;
      dVar6 = dVar6 * dVar6 * dVar6;
    }
  }
  return dVar6;
}

// operator() @ 14cccc650

double __thiscall
`UE::SculptFalloffs::MakeLinearBoxFalloff'::__l2::<lambda_1>::operator()
          (void *this,FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [5];
  
  dVar6 = __real_3ff0000000000000;
  dVar5 = __real_3ff0000000000000 - param_1->Falloff;
  if (0.0 <= dVar5) {
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  else {
    dVar5 = 0.0;
  }
  local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  dVar5 = param_1->Radius * dVar5;
  local_98._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
  dVar4 = param_1->Radius - dVar5;
  dVar5 = dVar5 * __real_3fe6a09e667f3bcc;
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(param_1->LocalFrame).Rotation,(TVector<double> *)&local_80[0]._s_0,
             (TVector<double> *)&local_98._s_0);
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - dVar5;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - dVar5;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - dVar5;
  dVar2 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar5 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_80[0]._s_0.Y;
  if ((((((double)local_80[0]._0_8_ < dVar10) || ((double)local_80[0]._8_8_ < dVar7)) ||
       ((double)local_80[0]._16_8_ < dVar9)) ||
      ((dVar2 < (double)local_80[0]._0_8_ || (dVar3 < (double)local_80[0]._8_8_)))) ||
     (dVar5 < (double)local_80[0]._16_8_)) {
    if (dVar10 <= (double)local_80[0]._0_8_) {
      if ((double)local_80[0]._0_8_ <= dVar2) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = (double)local_80[0]._0_8_ - dVar2;
      }
    }
    else {
      dVar10 = dVar10 - (double)local_80[0]._0_8_;
    }
    if (dVar7 <= (double)local_80[0]._8_8_) {
      if ((double)local_80[0]._8_8_ <= dVar3) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (double)local_80[0]._8_8_ - dVar3;
      }
    }
    else {
      dVar7 = dVar7 - (double)local_80[0]._8_8_;
    }
    if (dVar9 <= (double)local_80[0]._16_8_) {
      if ((double)local_80[0]._16_8_ <= dVar5) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = (double)local_80[0]._16_8_ - dVar5;
      }
    }
    else {
      dVar9 = dVar9 - (double)local_80[0]._16_8_;
    }
    dVar5 = dVar7 * dVar7 + dVar10 * dVar10 + dVar9 * dVar9;
    if (dVar4 * dVar4 <= dVar5) {
      dVar6 = 0.0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar5;
      auVar8 = sqrtpd(auVar8,auVar1);
      dVar7 = auVar8._0_8_ * (dVar6 / dVar4);
      dVar5 = 0.0;
      if ((0.0 <= dVar7) && (dVar5 = dVar7, dVar6 <= dVar7)) {
        dVar5 = dVar6;
      }
      dVar6 = dVar6 - dVar5;
    }
  }
  return dVar6;
}

// operator() @ 14cccc860

double __thiscall
`UE::SculptFalloffs::MakeRoundBoxFalloff'::__l2::<lambda_1>::operator()
          (void *this,FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [5];
  
  dVar6 = __real_3ff0000000000000;
  dVar5 = __real_3ff0000000000000 - param_1->Falloff;
  if (0.0 <= dVar5) {
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  else {
    dVar5 = 0.0;
  }
  local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  dVar5 = param_1->Radius * dVar5;
  local_98._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
  dVar4 = param_1->Radius - dVar5;
  dVar5 = dVar5 * __real_3fe6a09e667f3bcc;
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(param_1->LocalFrame).Rotation,(TVector<double> *)&local_80[0]._s_0,
             (TVector<double> *)&local_98._s_0);
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - dVar5;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - dVar5;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - dVar5;
  dVar2 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar5 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_80[0]._s_0.Y;
  if ((((((double)local_80[0]._0_8_ < dVar10) || ((double)local_80[0]._8_8_ < dVar7)) ||
       ((double)local_80[0]._16_8_ < dVar9)) ||
      ((dVar2 < (double)local_80[0]._0_8_ || (dVar3 < (double)local_80[0]._8_8_)))) ||
     (dVar5 < (double)local_80[0]._16_8_)) {
    if (dVar10 <= (double)local_80[0]._0_8_) {
      if ((double)local_80[0]._0_8_ <= dVar2) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = (double)local_80[0]._0_8_ - dVar2;
      }
    }
    else {
      dVar10 = dVar10 - (double)local_80[0]._0_8_;
    }
    if (dVar7 <= (double)local_80[0]._8_8_) {
      if ((double)local_80[0]._8_8_ <= dVar3) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (double)local_80[0]._8_8_ - dVar3;
      }
    }
    else {
      dVar7 = dVar7 - (double)local_80[0]._8_8_;
    }
    if (dVar9 <= (double)local_80[0]._16_8_) {
      if ((double)local_80[0]._16_8_ <= dVar5) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = (double)local_80[0]._16_8_ - dVar5;
      }
    }
    else {
      dVar9 = dVar9 - (double)local_80[0]._16_8_;
    }
    dVar5 = dVar7 * dVar7 + dVar10 * dVar10 + dVar9 * dVar9;
    if (dVar4 * dVar4 <= dVar5) {
      dVar6 = 0.0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar5;
      auVar8 = sqrtpd(auVar8,auVar1);
      dVar7 = auVar8._0_8_ * (dVar6 / dVar4);
      dVar5 = 0.0;
      if ((0.0 <= dVar7) && (dVar5 = dVar7, dVar6 <= dVar7)) {
        dVar5 = dVar6;
      }
      dVar6 = dVar6 - dVar5 * dVar5;
    }
  }
  return dVar6;
}

// operator() @ 14cccca80

double __thiscall
`UE::SculptFalloffs::MakeSmoothBoxFalloff'::__l2::<lambda_1>::operator()
          (void *this,FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [5];
  
  dVar6 = __real_3ff0000000000000;
  dVar5 = __real_3ff0000000000000 - param_1->Falloff;
  if (0.0 <= dVar5) {
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  else {
    dVar5 = 0.0;
  }
  local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  dVar5 = param_1->Radius * dVar5;
  local_98._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
  dVar4 = param_1->Radius - dVar5;
  dVar5 = dVar5 * __real_3fe6a09e667f3bcc;
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(param_1->LocalFrame).Rotation,(TVector<double> *)&local_80[0]._s_0,
             (TVector<double> *)&local_98._s_0);
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - dVar5;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - dVar5;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - dVar5;
  dVar2 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar5 = dVar5 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_80[0]._s_0.Y;
  if ((((((double)local_80[0]._0_8_ < dVar10) || ((double)local_80[0]._8_8_ < dVar7)) ||
       ((double)local_80[0]._16_8_ < dVar9)) ||
      ((dVar2 < (double)local_80[0]._0_8_ || (dVar3 < (double)local_80[0]._8_8_)))) ||
     (dVar5 < (double)local_80[0]._16_8_)) {
    if (dVar10 <= (double)local_80[0]._0_8_) {
      if ((double)local_80[0]._0_8_ <= dVar2) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = (double)local_80[0]._0_8_ - dVar2;
      }
    }
    else {
      dVar10 = dVar10 - (double)local_80[0]._0_8_;
    }
    if (dVar7 <= (double)local_80[0]._8_8_) {
      if ((double)local_80[0]._8_8_ <= dVar3) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = (double)local_80[0]._8_8_ - dVar3;
      }
    }
    else {
      dVar7 = dVar7 - (double)local_80[0]._8_8_;
    }
    if (dVar9 <= (double)local_80[0]._16_8_) {
      if ((double)local_80[0]._16_8_ <= dVar5) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = (double)local_80[0]._16_8_ - dVar5;
      }
    }
    else {
      dVar9 = dVar9 - (double)local_80[0]._16_8_;
    }
    dVar5 = dVar7 * dVar7 + dVar10 * dVar10 + dVar9 * dVar9;
    if (dVar4 * dVar4 <= dVar5) {
      dVar6 = 0.0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar5;
      auVar8 = sqrtpd(auVar8,auVar1);
      dVar7 = auVar8._0_8_ * (dVar6 / dVar4);
      dVar5 = 0.0;
      if ((0.0 <= dVar7) && (dVar5 = dVar7, dVar6 <= dVar7)) {
        dVar5 = dVar6;
      }
      dVar6 = dVar6 - dVar5 * dVar5;
      dVar6 = dVar6 * dVar6 * dVar6;
    }
  }
  return dVar6;
}

// CollectVertexPositions<TArray<int,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14cd48ad0

void __cdecl
UE::Geometry::
CollectVertexPositions<TArray<int,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pFVar12 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar7 = pFVar12 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar7) break;
    uVar4 = *(uint *)pFVar12;
    if ((-1 < (int)uVar4) &&
       ((int)uVar4 <
        (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
      uVar11 = (ulonglong)(uVar4 & 0x1ff);
      lVar2 = (ulonglong)(uVar4 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar2) + uVar11 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + lVar2);
        pFVar5 = (param_3->AllocatorInstance).Data;
        puVar1 = (undefined8 *)(lVar2 + uVar11 * 0x18);
        local_48 = *puVar1;
        uStack_40 = puVar1[1];
        local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar11 * 0x18);
        if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)param_3->ArrayMax * 0x18)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar10 = param_3->ArrayNum;
        if (iVar10 == param_3->ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar10 + 1;
        pFVar6 = (param_3->AllocatorInstance).Data;
        pFVar5 = pFVar6 + (longlong)iVar10 * 0x18;
        *(undefined8 *)pFVar5 = local_48;
        *(undefined8 *)(pFVar5 + 8) = uStack_40;
        *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = local_38;
      }
    }
    pFVar12 = pFVar12 + 4;
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// CollectVertexPositions<UE::Geometry::FRefCountVector::IndexEnumerable,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14cd48c70

void __cdecl
UE::Geometry::
CollectVertexPositions<UE::Geometry::FRefCountVector::IndexEnumerable,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FDynamicMesh3 *param_1,IndexEnumerable param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar11 = ((param_2.Vector)->RefCounts).CurBlock * 0x200 +
           ((param_2.Vector)->RefCounts).CurBlockUsed;
  uVar13 = 0;
  if ((uVar11 != 0) &&
     (pFVar4 = ((param_2.Vector)->RefCounts).Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar11) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 2);
        if ((sVar3 != 0) && (uVar13 = uVar12, sVar3 != -1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = uVar12;
      } while ((int)uVar12 < (int)uVar11);
    }
  }
joined_r0x00014cd48cf9:
  do {
    if (uVar13 == uVar11) {
      return;
    }
    while( true ) {
      if ((-1 < (int)uVar13) &&
         ((int)uVar13 <
          (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar10 = (ulonglong)(uVar13 & 0x1ff);
        lVar2 = (ulonglong)(uVar13 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + lVar2) + uVar10 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + lVar2);
          pFVar4 = (param_3->AllocatorInstance).Data;
          puVar1 = (undefined8 *)(lVar2 + uVar10 * 0x18);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          local_28 = *(undefined8 *)(lVar2 + 0x10 + uVar10 * 0x18);
          if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)param_3->ArrayMax * 0x18))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == param_3->ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar9 + 1;
          pFVar5 = (param_3->AllocatorInstance).Data;
          pFVar4 = pFVar5 + (longlong)iVar9 * 0x18;
          *(undefined8 *)pFVar4 = local_38;
          *(undefined8 *)(pFVar4 + 8) = uStack_30;
          *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = local_28;
        }
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar11 <= (int)uVar13) break;
      pFVar4 = ((param_2.Vector)->RefCounts).Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar2 = (ulonglong)(uVar13 >> 9) * 8;
        lVar7 = (ulonglong)(uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar2)) != 0) &&
           (*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar2)) != -1)) break;
        uVar13 = uVar13 + 1;
        if ((int)uVar11 <= (int)uVar13) goto joined_r0x00014cd48cf9;
      }
    }
  } while( true );
}

// DereferenceIfNecessary<UPolyEditInsertEdgeActivity,UPolyEditInsertEdgeActivity_*_&> @ 14cd48ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditInsertEdgeActivity * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UPolyEditInsertEdgeActivity,UPolyEditInsertEdgeActivity_*_&>
          (UPolyEditInsertEdgeActivity **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UPolyEditInsertEdgeLoopActivity,UPolyEditInsertEdgeLoopActivity_*_&> @ 14cd48ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditInsertEdgeLoopActivity * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UPolyEditInsertEdgeLoopActivity,UPolyEditInsertEdgeLoopActivity_*_&>
          (UPolyEditInsertEdgeLoopActivity **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UUVProjectionTool,UUVProjectionTool_*_&> @ 14cd48ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUVProjectionTool * __cdecl
UE::Core::Private::DereferenceIfNecessary<UUVProjectionTool,UUVProjectionTool_*_&>
          (UUVProjectionTool **param_1)

{
  return *param_1;
}

// Normalized<double> @ 14cd4e5b0

TVector<double> * __cdecl
UE::Geometry::Normalized<double>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  auVar3._0_8_ = dVar1 * dVar1;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5 * dVar5 + auVar3._0_8_ + dVar2 * dVar2;
  auVar4 = sqrtpd(auVar3,auVar4);
  if (param_2 < auVar4._0_8_) {
    dVar5 = __real_3ff0000000000000 / auVar4._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// operator() @ 14cd54390

void __thiscall
`UE::SculptUtil::RecalculateNormals_Overlay'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double>_u_0 local_28;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  iVar1 = *(int *)(*plVar2 + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeOverlayNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 0x10),iVar1,true,true);
  uVar6 = iVar1 * 3;
  lVar3 = **(longlong **)((longlong)this + 0x10);
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
            (ulonglong)(uVar6 & 0x1ff) * 4) = (float)local_28._s_0.X;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
            (ulonglong)(uVar6 + 1 & 0x1ff) * 4) = (float)local_28._s_0.Y;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 + 2 >> 9) * 8) +
            (ulonglong)(uVar6 + 2 & 0x1ff) * 4) = (float)local_28._s_0.Z;
  return;
}

// operator() @ 14cd544c0

void __thiscall
`UE::SculptUtil::RecalculateNormals_Overlay'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double>_u_0 local_28;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  iVar1 = *(int *)(*plVar2 + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeOverlayNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 0x10),iVar1,true,true);
  uVar6 = iVar1 * 3;
  lVar3 = **(longlong **)((longlong)this + 0x10);
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
            (ulonglong)(uVar6 & 0x1ff) * 4) = (float)local_28._s_0.X;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
            (ulonglong)(uVar6 + 1 & 0x1ff) * 4) = (float)local_28._s_0.Y;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 + 2 >> 9) * 8) +
            (ulonglong)(uVar6 + 2 & 0x1ff) * 4) = (float)local_28._s_0.Z;
  return;
}

// operator() @ 14cd545f0

void __thiscall
`UE::SculptUtil::RecalculateNormals_PerVertex'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TVector<double>_u_0 local_28;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)(*plVar1 + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar5,true,true);
  if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
    uVar6 = (ulonglong)(uVar5 & 0x1ff);
    lVar2 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
             (ulonglong)(uVar5 >> 9) * 8);
    *(float *)(lVar2 + uVar6 * 0xc) = (float)local_28._s_0.X;
    *(float *)(lVar2 + 4 + uVar6 * 0xc) = (float)local_28._s_0.Y;
    *(float *)(lVar2 + 8 + uVar6 * 0xc) = (float)local_28._s_0.Z;
  }
  return;
}

// operator() @ 14cd546e0

void __thiscall
`UE::SculptUtil::RecalculateNormals_PerVertex'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TVector<double>_u_0 local_28;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)(*plVar1 + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar5,true,true);
  if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
    uVar6 = (ulonglong)(uVar5 & 0x1ff);
    lVar2 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
             (ulonglong)(uVar5 >> 9) * 8);
    *(float *)(lVar2 + uVar6 * 0xc) = (float)local_28._s_0.X;
    *(float *)(lVar2 + 4 + uVar6 * 0xc) = (float)local_28._s_0.Y;
    *(float *)(lVar2 + 8 + uVar6 * 0xc) = (float)local_28._s_0.Z;
  }
  return;
}

// operator() @ 14cd55a20

void __thiscall
`UE::SculptUtil::RecalculateROINormals'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double>_u_0 local_38;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)param_1 + *plVar1) != '\0') {
    UE::Geometry::FMeshNormals::ComputeOverlayNormal
              ((TVector<double> *)&local_38._s_0,
               (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
               (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
               **(undefined8 **)((longlong)this + 0x10),param_1,true,true);
    uVar5 = param_1 * 3;
    plVar1 = *(longlong **)this;
    lVar2 = **(longlong **)((longlong)this + 0x10);
    *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
              (ulonglong)(uVar5 & 0x1ff) * 4) = (float)local_38._s_0.X;
    *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 + 1 >> 9) * 8) +
              (ulonglong)(uVar5 + 1 & 0x1ff) * 4) = (float)local_38._s_0.Y;
    *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 + 2 >> 9) * 8) +
              (ulonglong)(uVar5 + 2 & 0x1ff) * 4) = (float)local_38._s_0.Z;
    uVar5 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    *(undefined1 *)((longlong)param_1 + *plVar1) = 0;
    UNLOCK();
  }
  return;
}

// operator() @ 14cd55bb0

void __thiscall
`UE::SculptUtil::RecalculateROINormals'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double>_u_0 local_28;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  iVar1 = *(int *)(*plVar2 + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeOverlayNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 0x10),iVar1,true,true);
  uVar6 = iVar1 * 3;
  lVar3 = **(longlong **)((longlong)this + 0x10);
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
            (ulonglong)(uVar6 & 0x1ff) * 4) = (float)local_28._s_0.X;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
            (ulonglong)(uVar6 + 1 & 0x1ff) * 4) = (float)local_28._s_0.Y;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar6 + 2 >> 9) * 8) +
            (ulonglong)(uVar6 + 2 & 0x1ff) * 4) = (float)local_28._s_0.Z;
  return;
}

// operator() @ 14cd56100

void __thiscall
`UE::SculptUtil::RecalculateROINormals'::__l7::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TVector<double>_u_0 local_38;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)param_1 + *plVar1) != '\0') {
    UE::Geometry::FMeshNormals::ComputeVertexNormal
              ((TVector<double> *)&local_38._s_0,
               (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),param_1,true,true);
    if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
      uVar6 = (ulonglong)(param_1 & 0x1ff);
      lVar2 = *(longlong *)
               (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
               (ulonglong)((uint)param_1 >> 9) * 8);
      *(float *)(lVar2 + uVar6 * 0xc) = (float)local_38._s_0.X;
      *(float *)(lVar2 + 4 + uVar6 * 0xc) = (float)local_38._s_0.Y;
      *(float *)(lVar2 + 8 + uVar6 * 0xc) = (float)local_38._s_0.Z;
    }
    plVar1 = *(longlong **)this;
    uVar5 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    *(undefined1 *)((longlong)param_1 + *plVar1) = 0;
    UNLOCK();
  }
  return;
}

// operator() @ 14cd56260

void __thiscall
`UE::SculptUtil::RecalculateROINormals'::__l7::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TVector<double>_u_0 local_28;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)(*plVar1 + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar5,true,true);
  if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
    uVar6 = (ulonglong)(uVar5 & 0x1ff);
    lVar2 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
             (ulonglong)(uVar5 >> 9) * 8);
    *(float *)(lVar2 + uVar6 * 0xc) = (float)local_28._s_0.X;
    *(float *)(lVar2 + 4 + uVar6 * 0xc) = (float)local_28._s_0.Y;
    *(float *)(lVar2 + 8 + uVar6 * 0xc) = (float)local_28._s_0.Z;
  }
  return;
}

// operator() @ 14cd56350

void __thiscall
`UE::SculptUtil::PrecalculateNormalsROI'::__l9::<lambda_2>::operator()(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar4 = **(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = *(int *)((longlong)param_1 * 4 + *plVar3) * 3;
  if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4)) {
    plVar3 = *(longlong **)((longlong)this + 8);
    lVar4 = **(longlong **)this;
    uVar8 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x78);
    plVar5 = *(longlong **)((longlong)this + 0x10);
    uVar2 = *(int *)((longlong)param_1 * 4 + *plVar3) * 3;
    uVar8 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    uVar2 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
    uVar9 = 0;
    if ((int)uVar8 < (int)plVar5[1]) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    LOCK();
    *(undefined1 *)((longlong)(int)uVar8 + *plVar5) = 1;
    UNLOCK();
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if ((int)uVar1 < (int)plVar3[1]) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    LOCK();
    *(undefined1 *)((longlong)(int)uVar1 + *plVar3) = 1;
    UNLOCK();
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    LOCK();
    *(undefined1 *)((longlong)(int)uVar2 + *plVar3) = 1;
    UNLOCK();
  }
  return;
}

// operator() @ 14cd565c0

void __thiscall
`UE::SculptUtil::PrecalculateNormalsROI'::__l10::<lambda_2>::operator()(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar4 = **(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  lVar4 = *(longlong *)(lVar4 + 0x78);
  uVar2 = *(int *)(*plVar3 + (longlong)param_1 * 4) * 3;
  uVar8 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                   (ulonglong)(uVar2 & 0x1ff) * 4);
  uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                   (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
  uVar2 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                   (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
  uVar7 = 0;
  if ((int)uVar8 < Flags.ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  LOCK();
  Flags.AllocatorInstance.Data[(int)uVar8] = (FScriptContainerElement)0x1;
  UNLOCK();
  uVar8 = 0;
  if ((int)uVar1 < Flags.ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  LOCK();
  Flags.AllocatorInstance.Data[(int)uVar1] = (FScriptContainerElement)0x1;
  UNLOCK();
  uVar8 = 0;
  if ((int)uVar2 < Flags.ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  LOCK();
  Flags.AllocatorInstance.Data[(int)uVar2] = (FScriptContainerElement)0x1;
  UNLOCK();
  return;
}

// operator() @ 14cd568d0

void __thiscall
`UE::SculptUtil::PrecalculateNormalsROI'::__l11::<lambda_3>::operator()(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> local_28;
  
  uVar3 = 0;
  if (param_1 < Flags.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (Flags.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x1) {
    UE::Geometry::FMeshNormals::ComputeOverlayNormal
              (&local_28,(FDynamicMesh3 *)**(undefined8 **)this,
               (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
               **(undefined8 **)((longlong)this + 8),param_1,true,true);
  }
  return;
}

// CreatePolyEditPreviewMesh @ 14cd67fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPolyEditPreviewMesh * __cdecl
UE::Geometry::PolyEditActivityUtil::CreatePolyEditPreviewMesh
          (UInteractiveTool *param_1,UPolyEditActivityContext *param_2)

{
  UClass *pUVar1;
  UPolyEditPreviewMesh *this;
  UWorld *pUVar2;
  UInteractiveToolManager *pUVar3;
  UMaterialInterface *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FLinearColor_u_0 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  this = (UPolyEditPreviewMesh *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  pUVar2 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  UPreviewMesh::CreateInWorld((UPreviewMesh *)this,pUVar2,&UE::Math::TTransform<double>::Identity);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview((UPreviewMesh *)this,(UToolTarget *)0x0);
  UPreviewMesh::ClearOverrideRenderMaterial((UPreviewMesh *)this);
  pUVar3 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  local_a8._0_8_ = ___xmm_3f800000000000003f4000003f4ccccd;
  local_a8._8_8_ = _UNK_15297a578;
  pUVar4 = ToolSetupUtil::GetSelectionMaterial((FLinearColor *)&local_a8._s_0,pUVar3,0.0);
  UPreviewMesh::SetMaterial((UPreviewMesh *)this,pUVar4);
  UPreviewMesh::EnableWireframe((UPreviewMesh *)this,true);
  return this;
}

// PrecalculateNormalsROI @ 14cd76650

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::SculptUtil::PrecalculateNormalsROI
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_> *param_3,bool *param_4,bool param_5)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  longlong local_res8;
  TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_> *local_58;
  code *local_50;
  TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_> **local_48;
  TArrayView<std::nullptr_t,int> local_40;
  code *local_30;
  longlong **local_28;
  longlong *local_20;
  TArray<int,TSizedDefaultAllocator<32>_> *local_18;
  TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_> *local_10;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
    local_res8 = 0;
  }
  else {
    if ((pFVar1->NormalLayers).Array.ArrayNum < 1) {
      local_res8 = 0;
    }
    else {
      local_res8 = *(longlong *)(pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    if ((local_res8 != 0) && (!param_5)) {
      *param_4 = true;
      iVar3 = *(int *)(local_res8 + 0xc) + *(int *)(local_res8 + 8) * 0x200;
      if (param_3->ArrayNum != iVar3) {
        TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar3,Default);
        local_48 = &local_58;
        local_50 = Core::Private::Function::
                   TFunctionRefCaller<`UE::SculptUtil::PrecalculateNormalsROI'::__l8::<lambda_1>,void,int>
                   ::Call;
        local_58 = param_3;
        ParallelFor(*(int *)(local_res8 + 8) * 0x200 + *(int *)(local_res8 + 0xc),
                    (TFunctionRef<void___cdecl(int)> *)&local_50,None);
      }
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId366,"PrecalculateNormalsROI_FIND",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                   ,0x16e);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId366);
      }
      local_20 = &local_res8;
      local_30 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SculptUtil::PrecalculateNormalsROI'::__l9::<lambda_2>,void,int>
                 ::Call;
      local_28 = &local_20;
      local_40.DataPtr = (void **)0x0;
      local_40.ArrayNum = 0;
      local_18 = param_2;
      local_10 = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",param_2->ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_30,local_res8._0_1_,None,&local_40);
      if (!bVar4) {
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  *param_4 = false;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                     ,0x17e,L"");
  if (!bVar4) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PrecalculateNormalsROI @ 14cd76840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::SculptUtil::PrecalculateNormalsROI
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FUniqueIndexSet *param_3,bool *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDynamicMeshAttributeSet *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  char local_147;
  undefined1 local_146;
  undefined1 local_145 [5];
  int local_140 [2];
  int local_138 [2];
  int local_130 [2];
  int local_128 [2];
  int local_120 [2];
  int local_118 [2];
  longlong local_110;
  FDynamicMesh3 *local_108;
  TArray<int,TSizedDefaultAllocator<32>_> *local_100;
  TArrayView<std::nullptr_t,int> local_f8;
  code *local_e8;
  undefined1 *local_e0;
  longlong *local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  longlong **local_b0;
  FDynamicMesh3 **local_a8;
  longlong *local_a0;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  FDynamicMesh3 ***local_80;
  _RTL_CRITICAL_SECTION local_78;
  ulonglong local_50;
  
  pvVar8 = ThreadLocalStoragePointer;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_110 = 0;
  pFVar3 = (param_1->AttributeSet).Ptr;
  local_108 = param_1;
  local_100 = param_2;
  if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
    local_110 = 0;
  }
  else {
    if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
      local_110 = *(longlong *)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
    }
    if ((local_110 != 0) && (!param_5)) {
      uVar11 = (ulonglong)_tls_index;
      *param_4 = true;
      piVar14 = (int *)(*(longlong *)((longlong)pvVar8 + uVar11 * 8) + 0x9d4c);
      if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UE::SculptUtil::PrecalculateNormalsROI'::__l5::
               _dynamic_atexit_destructor_for__List__);
        _Init_thread_footer(&::_TSS0);
      }
      if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        atexit(`UE::SculptUtil::PrecalculateNormalsROI'::__l5::
               _dynamic_atexit_destructor_for__Flags__);
        _Init_thread_footer(&::_TSS1);
      }
      iVar12 = *(int *)(local_110 + 0xc) + *(int *)(local_110 + 8) * 0x200;
      if (Flags.ArrayNum != iVar12) {
        TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_>::SetNum(&Flags,iVar12,Default);
      }
      bVar17 = -1 < CpuChannel->Enabled;
      if (bVar17) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId238,"PrecalculateNormalsROI_InitClear",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                   ,0xee);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId238);
      }
      local_146 = 0;
      local_e8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SculptUtil::PrecalculateNormalsROI'::__l9::<lambda_1>,void,int>
                 ::Call;
      local_e0 = &local_146;
      local_f8.DataPtr = (void **)0x0;
      local_f8.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",*(int *)(local_110 + 8) * 0x200 + *(int *)(local_110 + 0xc),1,
                 (TFunctionRef<void___cdecl(int)> *)&local_e8,local_148,None,&local_f8);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar17 = -1 < CpuChannel->Enabled;
      if (bVar17) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId243,"PrecalculateNormalsROI_FIND",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                   ,0xf3);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId243);
      }
      List.ArrayNum = 0;
      if ((List.ArrayMax < 0) && (List.ArrayMax != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&List.AllocatorInstance,0,&List.ArrayMax);
      }
      InitializeCriticalSectionAndSpinCount(&local_78,4000);
      local_d8 = &local_110;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SculptUtil::PrecalculateNormalsROI'::__l10::<lambda_2>,void,int>
                 ::Call;
      local_b0 = &local_d8;
      local_c8.DataPtr = (void **)0x0;
      local_c8.ArrayNum = 0;
      local_d0 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",param_2->ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_b8,local_148,None,&local_c8);
      DeleteCriticalSection(&local_78);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar17 = -1 < CpuChannel->Enabled;
      if (bVar17) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId268,"PrecalculateNormalsROI_NORMALS",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                   ,0x10c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId268);
      }
      local_80 = &local_a8;
      local_98.DataPtr = (void **)0x0;
      local_a8 = &local_108;
      local_a0 = &local_110;
      local_88 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SculptUtil::PrecalculateNormalsROI'::__l11::<lambda_3>,void,int>
                 ::Call;
      local_98.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",*(int *)(local_110 + 8) * 0x200 + *(int *)(local_110 + 0xc),1,
                 (TFunctionRef<void___cdecl(int)> *)&local_88,local_148,None,&local_98);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (CpuChannel->Enabled < 0) {
        local_147 = '\0';
      }
      else {
        local_147 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId297,"PrecalculateNormalsROI_BitArraySet",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                   ,0x129);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId297);
      }
      UE::Geometry::FUniqueIndexSet::Initialize
                (param_3,*(int *)(local_110 + 8) * 0x200 + *(int *)(local_110 + 0xc),0);
      pFVar15 = (param_2->AllocatorInstance).Data;
      iVar12 = param_2->ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar12 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar12) {
          local_145[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_145);
        }
        if (pFVar15 == pFVar1) break;
        uVar7 = *(int *)pFVar15 * 3;
        lVar4 = *(longlong *)(local_110 + 0x78);
        local_140[0] = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                               (ulonglong)(uVar7 & 0x1ff) * 4);
        bVar10 = (byte)local_140[0] & 0x3f;
        iVar9 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
        iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                        (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
        iVar16 = local_140[0];
        if (local_140[0] < 0) {
          iVar16 = local_140[0] + 0x3f;
          bVar10 = bVar10 - 0x40;
        }
        uVar11 = param_3->Bits[iVar16 >> 6];
        uVar13 = 1L << (bVar10 & 0x3f);
        if ((uVar11 & uVar13) == 0) {
          param_3->Bits[iVar16 >> 6] = uVar11 | uVar13;
          pFVar5 = (param_3->Values).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_140) &&
              ((FScriptContainerElement *)local_140 <
               pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = (param_3->Values).ArrayNum;
          piVar14 = &(param_3->Values).ArrayMax;
          if (iVar16 == *piVar14) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(param_3->Values).AllocatorInstance,piVar14);
          }
          (param_3->Values).ArrayNum = iVar16 + 1;
          *(int *)((param_3->Values).AllocatorInstance.Data + (longlong)iVar16 * 4) = local_140[0];
        }
        bVar10 = (byte)iVar9 & 0x3f;
        iVar16 = iVar9;
        if (iVar9 < 0) {
          iVar16 = iVar9 + 0x3f;
          bVar10 = bVar10 - 0x40;
        }
        uVar11 = param_3->Bits[iVar16 >> 6];
        uVar13 = 1L << (bVar10 & 0x3f);
        local_138[0] = iVar9;
        if ((uVar13 & uVar11) == 0) {
          param_3->Bits[iVar16 >> 6] = uVar11 | uVar13;
          pFVar5 = (param_3->Values).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_138) &&
              ((FScriptContainerElement *)local_138 <
               pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (param_3->Values).ArrayNum;
          piVar14 = &(param_3->Values).ArrayMax;
          if (iVar9 == *piVar14) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(param_3->Values).AllocatorInstance,piVar14);
          }
          (param_3->Values).ArrayNum = iVar9 + 1;
          *(int *)((param_3->Values).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_138[0];
        }
        bVar10 = (byte)iVar2 & 0x3f;
        iVar9 = iVar2;
        if (iVar2 < 0) {
          iVar9 = iVar2 + 0x3f;
          bVar10 = bVar10 - 0x40;
        }
        uVar11 = param_3->Bits[iVar9 >> 6];
        uVar13 = 1L << (bVar10 & 0x3f);
        local_130[0] = iVar2;
        if ((uVar13 & uVar11) == 0) {
          param_3->Bits[iVar9 >> 6] = uVar11 | uVar13;
          pFVar5 = (param_3->Values).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_130) &&
              ((FScriptContainerElement *)local_130 <
               pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (param_3->Values).ArrayNum;
          piVar14 = &(param_3->Values).ArrayMax;
          if (iVar9 == *piVar14) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(param_3->Values).AllocatorInstance,piVar14);
          }
          (param_3->Values).ArrayNum = iVar9 + 1;
          *(int *)((param_3->Values).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_130[0];
        }
        pFVar15 = pFVar15 + 4;
        param_2 = local_100;
      }
      if (local_147 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((byte)LogTemp._0_1_ < 3) {
        return;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      return;
    }
  }
  *param_4 = false;
  UE::Geometry::FUniqueIndexSet::Initialize
            (param_3,(param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->VertexRefCounts).RefCounts.CurBlockUsed,0);
  pFVar15 = (param_2->AllocatorInstance).Data;
  iVar12 = param_2->ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar12 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar12) {
      local_148 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_148);
    }
    if (pFVar15 == pFVar1) break;
    uVar11 = (ulonglong)(*(uint *)pFVar15 & 0x1ff);
    lVar4 = *(longlong *)
             ((local_108->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)(*(uint *)pFVar15 >> 9) * 8);
    local_128[0] = *(int *)(lVar4 + uVar11 * 0xc);
    lVar4 = lVar4 + uVar11 * 0xc;
    bVar10 = (byte)local_128[0] & 0x3f;
    iVar9 = local_128[0];
    if (local_128[0] < 0) {
      iVar9 = local_128[0] + 0x3f;
      bVar10 = bVar10 - 0x40;
    }
    uVar11 = param_3->Bits[iVar9 >> 6];
    uVar13 = 1L << (bVar10 & 0x3f);
    if ((uVar11 & uVar13) == 0) {
      param_3->Bits[iVar9 >> 6] = uVar11 | uVar13;
      pFVar5 = (param_3->Values).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_128) &&
          ((FScriptContainerElement *)local_128 < pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)
          ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (param_3->Values).ArrayNum;
      piVar14 = &(param_3->Values).ArrayMax;
      if (iVar9 == *piVar14) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_3->Values).AllocatorInstance,piVar14);
      }
      (param_3->Values).ArrayNum = iVar9 + 1;
      *(int *)((param_3->Values).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_128[0];
    }
    local_120[0] = *(int *)(lVar4 + 4);
    bVar10 = (byte)local_120[0] & 0x3f;
    iVar9 = local_120[0];
    if (local_120[0] < 0) {
      iVar9 = local_120[0] + 0x3f;
      bVar10 = bVar10 - 0x40;
    }
    uVar11 = param_3->Bits[iVar9 >> 6];
    uVar13 = 1L << (bVar10 & 0x3f);
    if ((uVar11 & uVar13) == 0) {
      param_3->Bits[iVar9 >> 6] = uVar11 | uVar13;
      pFVar5 = (param_3->Values).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_120) &&
          ((FScriptContainerElement *)local_120 < pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)
          ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (param_3->Values).ArrayNum;
      piVar14 = &(param_3->Values).ArrayMax;
      if (iVar9 == *piVar14) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_3->Values).AllocatorInstance,piVar14);
      }
      (param_3->Values).ArrayNum = iVar9 + 1;
      *(int *)((param_3->Values).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_120[0];
    }
    local_118[0] = *(int *)(lVar4 + 8);
    bVar10 = (byte)local_118[0] & 0x3f;
    iVar9 = local_118[0];
    if (local_118[0] < 0) {
      iVar9 = local_118[0] + 0x3f;
      bVar10 = bVar10 - 0x40;
    }
    uVar11 = param_3->Bits[iVar9 >> 6];
    uVar13 = 1L << (bVar10 & 0x3f);
    if ((uVar11 & uVar13) == 0) {
      param_3->Bits[iVar9 >> 6] = uVar11 | uVar13;
      pFVar5 = (param_3->Values).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_118) &&
          ((FScriptContainerElement *)local_118 < pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)
          ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (param_3->Values).ArrayNum;
      piVar14 = &(param_3->Values).ArrayMax;
      if (iVar9 == *piVar14) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_3->Values).AllocatorInstance,piVar14);
      }
      (param_3->Values).ArrayNum = iVar9 + 1;
      *(int *)((param_3->Values).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_118[0];
    }
    pFVar15 = pFVar15 + 4;
    param_2 = local_100;
  }
  return;
}

// RecalculateNormals_Overlay @ 14cd77910

void __cdecl
UE::SculptUtil::RecalculateNormals_Overlay
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  FDynamicMesh3 *local_res8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_res20 [8];
  uint local_118;
  uint local_114;
  int local_110 [2];
  ForElementType<unsigned_int> local_108;
  ulonglong local_100;
  int local_f8;
  int local_f4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> **local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FDynamicMesh3 **local_68;
  ulonglong *local_60;
  undefined4 local_3c;
  ulonglong uVar14;
  
  pFVar3 = (param_1->AttributeSet).Ptr;
  uVar14 = 0;
  uVar13 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
    local_100 = 0;
  }
  else {
    local_100 = uVar14;
    if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
      local_100 = *(ulonglong *)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
    }
    if (local_100 != 0) goto LAB_14cd77994;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Normals != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                     ,0x10,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14cd77994:
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  uVar18 = *(uint *)&(local_res10->Elements).field_0x28;
  local_108 = (ForElementType<unsigned_int>)&(local_res10->Elements).field_0x10;
  uStack_e4 = 1;
  local_d0 = 0;
  uStack_d4 = local_d0;
  if (uVar18 != 0) {
    puVar17 = *(uint **)&(local_res10->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_108;
    }
    uVar19 = *puVar17;
    uVar16 = uVar14;
    local_d0 = 0;
    uVar13 = 0;
    while (uVar19 == 0) {
      iVar12 = (int)uVar14;
      local_d0 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)local_d0;
      uVar13 = iVar12 + 1;
      uVar14 = (ulonglong)uVar13;
      uStack_d4 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14cd77a54;
      uVar19 = (puVar17 + 1)[iVar12];
    }
    uStack_e4 = -uVar19 & uVar19;
    uVar14 = (ulonglong)uStack_e4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f8 = (int)lVar10;
    uStack_d4 = local_f8 + -1 + local_d0;
    if ((int)uVar18 < (int)uStack_d4) {
      uStack_d4 = uVar18;
    }
  }
LAB_14cd77a54:
  local_114 = *(uint *)&(local_res10->Elements).field_0x28;
  uStack_cc = local_3c;
  iStack_c8 = *(int *)&(local_res10->Elements).field_0x8 -
              *(int *)&(local_res10->Elements).field_0x34;
  uVar19 = local_114 & 0xffffffe0;
  local_f0 = local_res10;
  uStack_d8 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_e4,uVar13);
  local_c0 = local_res10;
  iVar12 = (int)local_114 >> 5;
  TStack_b8._28_4_ = local_3c;
  TStack_b8.BaseBitIndex = local_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  bVar9 = (byte)local_114;
  uStack_e8 = uVar13;
  local_e0 = (undefined1 *)local_108;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
  if ((((int)local_114 < 0) || ((int)uVar18 < (int)local_114)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = *(int *)((longlong)local_108 + 0x18);
  uVar18 = local_114;
  if (local_114 != uVar13) {
    FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_108;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      local_114 = uVar13;
      uVar18 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14cd77b80;
      uVar18 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar10 * 4);
    }
    uVar14 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f4 = (int)lVar10;
    local_114 = local_f4 + -1 + uVar19;
    uVar18 = local_114;
    if ((int)uVar13 < (int)local_114) {
      local_114 = uVar13;
      uVar18 = uVar13;
    }
  }
LAB_14cd77b80:
  do {
    pTVar7 = local_c0;
    if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
        (int)uStack_98) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        ((ForElementType<unsigned_int>)TStack_b8.Array == local_108)) && (pTVar7 == local_res10)) {
      local_68 = &local_res8;
      local_60 = &local_100;
      local_90.DataPtr = (void **)0x0;
      local_90.ArrayNum = 0;
      local_80 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SculptUtil::RecalculateNormals_Overlay'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_78 = &local_70;
      local_70 = param_4;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",param_4->ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_80,local_res10._0_1_,None,&local_90);
      return;
    }
    uVar2 = *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_b8.CurrentBitIndex * 0xc) * 3
    ;
    lVar10 = *(longlong *)(local_100 + 0x78);
    uVar13 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 >> 9) * 8) +
                      (ulonglong)(uVar2 & 0x1ff) * 4);
    uVar19 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    uVar2 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
    if (uVar13 != 0xffffffff) {
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar4 = (param_3->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar13) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar12 * 0xc) == uVar13) {
              if (iVar12 != -1) goto LAB_14cd77d38;
              break;
            }
            iVar12 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      local_118 = uVar13;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,local_110,(bool *)&local_118);
      pFVar5 = (param_4->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      pFVar5 = (param_4->AllocatorInstance).Data;
      param_4->ArrayNum = iVar12 + 1;
      *(uint *)(pFVar5 + (longlong)iVar12 * 4) = local_118;
LAB_14cd77d38:
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar4 = (param_3->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar19) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar12 * 0xc) == uVar19)
            goto LAB_14cd77e35;
            iVar12 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      local_118 = uVar19;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,local_110,(bool *)&local_118);
      pFVar5 = (param_4->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar12 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_118;
LAB_14cd77e35:
      local_118 = uVar2;
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar4 = (param_3->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar2) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar12 * 0xc) == uVar2)
            goto LAB_14cd77f35;
            iVar12 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,local_110,(bool *)&local_118);
      pFVar5 = (param_4->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar12 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_118;
    }
LAB_14cd77f35:
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// RecalculateNormals_Overlay @ 14cd77fe0

void __cdecl
UE::SculptUtil::RecalculateNormals_Overlay
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          FUniqueIndexSet *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FDynamicMesh3 *local_res8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  int local_138 [2];
  int local_130 [2];
  int local_128 [2];
  longlong local_120;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  int local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> **local_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  FDynamicMesh3 **local_80;
  longlong *local_78;
  undefined4 local_54;
  
  pFVar5 = (param_1->AttributeSet).Ptr;
  local_res8 = param_1;
  local_res10 = param_2;
  if (pFVar5 == (FDynamicMeshAttributeSet *)0x0) {
    local_120 = 0;
  }
  else {
    if ((pFVar5->NormalLayers).Array.ArrayNum < 1) {
      local_120 = 0;
    }
    else {
      local_120 = *(longlong *)(pFVar5->NormalLayers).Array.AllocatorInstance.Data;
    }
    if (local_120 != 0) goto LAB_14cd78060;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Normals != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                     ,0x6d,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14cd78060:
  UE::Geometry::FUniqueIndexSet::Initialize
            (param_3,*(int *)(local_120 + 8) * 0x200 + *(int *)(local_120 + 0xc),0);
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  iStack_100 = 0;
  local_e8 = 0;
  uStack_fc = 1;
  iStack_ec = 0;
  if (iVar10 != 0) {
    puVar20 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar21;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      iStack_ec = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_14cd78100;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_fc = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_fc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iStack_ec = local_e8 + -1 + local_res20;
    if (iVar10 < iStack_ec) {
      iStack_ec = iVar10;
    }
  }
LAB_14cd78100:
  uVar17 = *(uint *)&(param_2->Elements).field_0x28;
  uStack_e4 = local_54;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_e0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_f0 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
  TStack_d0.CurrentBitIndex = iStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_d0._28_4_ = local_54;
  TStack_d0.BaseBitIndex = local_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  local_118 = pTVar21;
  local_108 = param_2;
  local_f8 = (undefined1 *)pTVar21;
  local_d8 = param_2;
  TStack_d0.Array = pTVar21;
  if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar21;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd78200;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_110 = (int)lVar13;
    uVar17 = local_110 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14cd78200:
  while( true ) {
    pTVar8 = local_d8;
    if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_d0.CurrentBitIndex == uVar17) && (TStack_d0.Array == pTVar21)) &&
       (pTVar8 == param_2)) break;
    uVar16 = *(int *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_d0.CurrentBitIndex * 0xc) *
             3;
    lVar13 = *(longlong *)(local_120 + 0x78);
    iVar10 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 >> 9) * 8) +
                     (ulonglong)(uVar16 & 0x1ff) * 4);
    iVar14 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                     (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                    (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
    if (iVar10 != -1) {
      bVar12 = (byte)iVar10 & 0x3f;
      iVar19 = iVar10;
      if (iVar10 < 0) {
        iVar19 = iVar10 + 0x3f;
        bVar12 = bVar12 - 0x40;
      }
      pTVar15 = &param_3->Values;
      uVar11 = 1L << (bVar12 & 0x3f);
      uVar2 = param_3->Bits[iVar19 >> 6];
      local_138[0] = iVar10;
      if ((uVar11 & uVar2) == 0) {
        param_3->Bits[iVar19 >> 6] = uVar11 | uVar2;
        pFVar6 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_138) &&
            ((FScriptContainerElement *)local_138 <
             pFVar6 + (longlong)(param_3->Values).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_3->Values).ArrayNum;
        piVar1 = &(param_3->Values).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar15->AllocatorInstance,piVar1);
        }
        (param_3->Values).ArrayNum = iVar10 + 1;
        *(int *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_138[0];
      }
      bVar12 = (byte)iVar14 & 0x3f;
      iVar10 = iVar14;
      if (iVar14 < 0) {
        iVar10 = iVar14 + 0x3f;
        bVar12 = bVar12 - 0x40;
      }
      uVar11 = 1L << (bVar12 & 0x3f);
      uVar2 = param_3->Bits[iVar10 >> 6];
      local_130[0] = iVar14;
      if ((uVar11 & uVar2) == 0) {
        param_3->Bits[iVar10 >> 6] = uVar11 | uVar2;
        pFVar6 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_130) &&
            ((FScriptContainerElement *)local_130 <
             pFVar6 + (longlong)(param_3->Values).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_3->Values).ArrayNum;
        piVar1 = &(param_3->Values).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar15->AllocatorInstance,piVar1);
          (param_3->Values).ArrayNum = iVar10;
        }
        (param_3->Values).ArrayNum = iVar10 + 1;
        *(int *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_130[0];
      }
      pTVar15 = &param_3->Values;
      bVar12 = (byte)iVar4 & 0x3f;
      iVar10 = iVar4;
      if (iVar4 < 0) {
        iVar10 = iVar4 + 0x3f;
        bVar12 = bVar12 - 0x40;
      }
      uVar11 = 1L << (bVar12 & 0x3f);
      uVar2 = param_3->Bits[iVar10 >> 6];
      pTVar21 = local_118;
      param_2 = local_res10;
      local_128[0] = iVar4;
      if ((uVar11 & uVar2) == 0) {
        param_3->Bits[iVar10 >> 6] = uVar11 | uVar2;
        pFVar6 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_128) &&
            ((FScriptContainerElement *)local_128 <
             pFVar6 + (longlong)(param_3->Values).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_3->Values).ArrayNum;
        piVar1 = &(param_3->Values).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar15->AllocatorInstance,piVar1);
          (param_3->Values).ArrayNum = iVar10;
        }
        (param_3->Values).ArrayNum = iVar10 + 1;
        *(int *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_128[0];
        pTVar21 = local_118;
        param_2 = local_res10;
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  local_88 = &param_3->Values;
  local_80 = &local_res8;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::SculptUtil::RecalculateNormals_Overlay'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78 = &local_120;
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_90 = &local_88;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_3->Values).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_98,local_res10._0_1_,None,&local_a8);
  return;
}

// RecalculateNormals_PerVertex @ 14cd785e0

void __cdecl
UE::SculptUtil::RecalculateNormals_PerVertex
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  FDynamicMesh3 *local_res8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_res20 [8];
  uint local_118 [2];
  ForElementType<unsigned_int> local_110;
  int local_108 [2];
  undefined8 local_100;
  uint local_f8;
  int local_f0;
  int local_ec;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  FDynamicMesh3 **local_80;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> **local_60;
  undefined4 local_3c;
  
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (param_4->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  iVar9 = *(int *)&(param_2->Elements).field_0x28;
  local_110 = (ForElementType<unsigned_int>)&(param_2->Elements).field_0x10;
  iStack_e0 = 0;
  uStack_dc = 1;
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_110;
    }
    uVar16 = *puVar15;
    iStack_e0 = 0;
    local_c8 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14cd786d5;
      uVar16 = (puVar15 + 1)[lVar10];
    }
    uStack_dc = -uVar16 & uVar16;
    uVar14 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f0 = (int)lVar10;
    iStack_cc = local_f0 + -1 + local_c8;
    if (iVar9 < iStack_cc) {
      iStack_cc = iVar9;
    }
  }
LAB_14cd786d5:
  uVar16 = *(uint *)&(param_2->Elements).field_0x28;
  uStack_c4 = local_3c;
  iStack_c0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar17 = uVar16 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = param_2;
  local_d8 = (undefined1 *)local_110;
  local_b8 = param_2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_res10;
  uVar2 = *(int *)((longlong)local_110 + 0x18);
  if (uVar16 != uVar2) {
    FVar13 = *(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_110;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cd787f0;
      uVar16 = *(uint *)((undefined1 *)((longlong)FVar13 + 4) + lVar10 * 4);
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_ec = (int)lVar10;
    uVar16 = local_ec + -1 + uVar17;
    if ((int)uVar2 < (int)uVar16) {
      uVar16 = uVar2;
    }
  }
LAB_14cd787f0:
  do {
    pTVar7 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b0.CurrentBitIndex == uVar16) &&
        ((ForElementType<unsigned_int>)TStack_b0.Array == local_110)) && (pTVar7 == pTVar6)) {
      local_80 = &local_res8;
      local_78.DataPtr = (void **)0x0;
      local_68 = Core::Private::Function::
                 TFunctionRefCaller<`UE::SculptUtil::RecalculateNormals_PerVertex'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_60 = &local_88;
      local_78.ArrayNum = 0;
      local_88 = param_4;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",param_4->ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_68,local_res10._0_1_,None,&local_78);
      return;
    }
    uVar17 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_b0.CurrentBitIndex * 0xc);
    uVar14 = (ulonglong)(uVar17 & 0x1ff);
    lVar10 = *(longlong *)
              ((local_res8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
    ;
    local_100 = *(undefined8 *)(lVar10 + uVar14 * 0xc);
    uVar17 = *(uint *)(lVar10 + 8 + uVar14 * 0xc);
    local_118[0] = (uint)local_100;
    local_f8 = uVar17;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar3;
      }
      iVar9 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & (uint)local_100) * 4)
      ;
      if (iVar9 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0xc) == (uint)local_100)
          {
            if (iVar9 != -1) goto LAB_14cd7898d;
            break;
          }
          iVar9 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar9 * 0xc);
        } while (iVar9 != -1);
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_3,local_108,(bool *)local_118);
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_118) &&
        ((FScriptContainerElement *)local_118 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,piVar1);
    }
    pFVar4 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar9 + 1;
    *(uint *)(pFVar4 + (longlong)iVar9 * 4) = local_118[0];
LAB_14cd7898d:
    local_118[0] = local_100._4_4_;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar3;
      }
      iVar9 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & local_100._4_4_) * 4)
      ;
      if (iVar9 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0xc) == local_100._4_4_)
          goto LAB_14cd78a8b;
          iVar9 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar9 * 0xc);
        } while (iVar9 != -1);
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_3,local_108,(bool *)local_118);
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_118) &&
        ((FScriptContainerElement *)local_118 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar9 + 1;
    *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_118[0];
LAB_14cd78a8b:
    local_118[0] = uVar17;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar3 = (param_3->Hash).SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar3;
      }
      iVar9 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar17) * 4);
      if (iVar9 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0xc) == uVar17)
          goto LAB_14cd78b85;
          iVar9 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar9 * 0xc);
        } while (iVar9 != -1);
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_3,local_108,(bool *)local_118);
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_118) &&
        ((FScriptContainerElement *)local_118 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,piVar1);
    }
    param_4->ArrayNum = iVar9 + 1;
    *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_118[0];
LAB_14cd78b85:
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// RecalculateNormals_PerVertex @ 14cd78c20

void __cdecl
UE::SculptUtil::RecalculateNormals_PerVertex
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          FUniqueIndexSet *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  FDynamicMesh3 *local_res8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  int local_f8 [2];
  int local_f0 [2];
  int local_e8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  FDynamicMesh3 **local_70;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  TArray<int,TSizedDefaultAllocator<32>_> **local_50;
  
  local_res8 = param_1;
  local_res10 = param_2;
  UE::Geometry::FUniqueIndexSet::Initialize
            (param_3,(param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->VertexRefCounts).RefCounts.CurBlockUsed,0);
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  puVar1 = &(param_2->Elements).field_0x10;
  iStack_d8 = 0;
  local_c0 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar9 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14cd78cdd;
      uVar15 = puVar18[lVar9 + 1];
    }
    uStack_d4 = -uVar15 & uVar15;
    uVar17 = (ulonglong)uStack_d4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_c4 = local_c0 + -1 + local_res20;
    if (iVar10 < iStack_c4) {
      iStack_c4 = iVar10;
    }
  }
LAB_14cd78cdd:
  uVar15 = *(uint *)&(param_2->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_b8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_c8 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_a0.CurrentBitIndex = iStack_c4;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_a0._28_4_ = iStack_c4;
  TStack_a0.BaseBitIndex = local_c0;
  uStack_80 = CONCAT44(uStack_b4,iStack_b8);
  local_e0 = param_2;
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_a8 = param_2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cd78de0;
      uVar15 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_b0 = (int)lVar9;
    uVar15 = local_b0 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14cd78de0:
  while( true ) {
    pTVar6 = local_a8;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_a0.CurrentBitIndex == uVar15) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    uVar14 = *(uint *)(*(longlong *)&pTVar6->Elements + (longlong)TStack_a0.CurrentBitIndex * 0xc);
    uVar17 = (ulonglong)(uVar14 & 0x1ff);
    lVar9 = *(longlong *)
             ((local_res8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
    local_f8[0] = *(int *)(lVar9 + uVar17 * 0xc);
    lVar9 = lVar9 + uVar17 * 0xc;
    bVar8 = (byte)local_f8[0] & 0x3f;
    iVar10 = local_f8[0];
    if (local_f8[0] < 0) {
      iVar10 = local_f8[0] + 0x3f;
      bVar8 = bVar8 - 0x40;
    }
    pTVar13 = &param_3->Values;
    uVar17 = param_3->Bits[iVar10 >> 6];
    uVar11 = 1L << (bVar8 & 0x3f);
    if ((uVar17 & uVar11) == 0) {
      param_3->Bits[iVar10 >> 6] = uVar17 | uVar11;
      pFVar4 = (pTVar13->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_f8) &&
          ((FScriptContainerElement *)local_f8 < pFVar4 + (longlong)(param_3->Values).ArrayMax * 4))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (param_3->Values).ArrayNum;
      piVar2 = &(param_3->Values).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar13->AllocatorInstance,piVar2);
      }
      (param_3->Values).ArrayNum = iVar10 + 1;
      *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_f8[0];
    }
    local_f0[0] = *(int *)(lVar9 + 4);
    bVar8 = (byte)local_f0[0] & 0x3f;
    iVar10 = local_f0[0];
    if (local_f0[0] < 0) {
      iVar10 = local_f0[0] + 0x3f;
      bVar8 = bVar8 - 0x40;
    }
    uVar17 = param_3->Bits[iVar10 >> 6];
    uVar11 = 1L << (bVar8 & 0x3f);
    if ((uVar17 & uVar11) == 0) {
      param_3->Bits[iVar10 >> 6] = uVar17 | uVar11;
      pFVar4 = (pTVar13->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_f0) &&
          ((FScriptContainerElement *)local_f0 < pFVar4 + (longlong)(param_3->Values).ArrayMax * 4))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (param_3->Values).ArrayNum;
      piVar2 = &(param_3->Values).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar13->AllocatorInstance,piVar2);
        (param_3->Values).ArrayNum = iVar10;
      }
      (param_3->Values).ArrayNum = iVar10 + 1;
      *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_f0[0];
    }
    pTVar13 = &param_3->Values;
    local_e8[0] = *(int *)(lVar9 + 8);
    bVar8 = (byte)local_e8[0] & 0x3f;
    iVar10 = local_e8[0];
    if (local_e8[0] < 0) {
      iVar10 = local_e8[0] + 0x3f;
      bVar8 = bVar8 - 0x40;
    }
    uVar17 = param_3->Bits[iVar10 >> 6];
    uVar11 = 1L << (bVar8 & 0x3f);
    if ((uVar17 & uVar11) == 0) {
      param_3->Bits[iVar10 >> 6] = uVar17 | uVar11;
      pFVar4 = (pTVar13->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar4 + (longlong)(param_3->Values).ArrayMax * 4))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (param_3->Values).ArrayNum;
      piVar2 = &(param_3->Values).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar13->AllocatorInstance,piVar2);
        (param_3->Values).ArrayNum = iVar10;
      }
      (param_3->Values).ArrayNum = iVar10 + 1;
      *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_e8[0];
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    param_2 = local_res10;
  }
  local_78 = &param_3->Values;
  local_70 = &local_res8;
  local_68.DataPtr = (void **)0x0;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::SculptUtil::RecalculateNormals_PerVertex'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_78;
  local_68.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_3->Values).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_58,local_res8._0_1_,None,&local_68);
  return;
}

// RecalculateROINormalForTriangles @ 14cd79170

void __cdecl
UE::SculptUtil::RecalculateROINormalForTriangles
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  
  if (param_3) {
    UE::Geometry::FMeshNormals::RecomputeOverlayTriNormals(param_1,param_2,true,true);
  }
  else {
    UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles
              (param_1,param_2,true,true,false);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// RecalculateROINormals @ 14cd791c0

void __cdecl
UE::SculptUtil::RecalculateROINormals
          (FDynamicMesh3 *param_1,TArray<std::atomic<bool>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  TFunctionRef<void___cdecl(int)> *pTVar3;
  FDynamicMesh3 *local_res8 [2];
  <lambda_1> local_res18;
  undefined8 local_res20;
  TArrayView<std::nullptr_t,int> local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 *local_18;
  
  if (param_3) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    local_res20 = 0;
    if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
    {
      local_res20 = *(undefined8 *)(pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    local_28._8_8_ = local_res8;
    iVar2 = param_2->ArrayNum;
    pTVar3 = (TFunctionRef<void___cdecl(int)> *)local_38;
    local_18 = &local_res20;
    local_38._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::SculptUtil::RecalculateROINormals'::__l5::<lambda_1>,void,int>::
         Call;
    local_38._8_8_ = local_28;
    local_28._0_8_ = param_2;
  }
  else {
    iVar2 = param_2->ArrayNum;
    local_38._8_8_ = local_res8;
    pTVar3 = (TFunctionRef<void___cdecl(int)> *)local_28;
    local_28._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::SculptUtil::RecalculateROINormals'::__l7::<lambda_2>,void,int>::
         Call;
    local_28._8_8_ = local_38;
    local_38._0_8_ = param_2;
  }
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  local_res8[0] = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,pTVar3,local_res18,None,&local_48);
  return;
}

// RecalculateROINormals @ 14cd792a0

void __cdecl
UE::SculptUtil::RecalculateROINormals
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  TFunctionRef<void___cdecl(int)> *pTVar3;
  FDynamicMesh3 *local_res8 [2];
  <lambda_1> local_res18;
  undefined8 local_res20;
  TArrayView<std::nullptr_t,int> local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 *local_18;
  
  if (param_3) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    local_res20 = 0;
    if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
    {
      local_res20 = *(undefined8 *)(pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    local_28._8_8_ = local_res8;
    iVar2 = param_2->ArrayNum;
    pTVar3 = (TFunctionRef<void___cdecl(int)> *)local_38;
    local_18 = &local_res20;
    local_38._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::SculptUtil::RecalculateROINormals'::__l5::<lambda_1>,void,int>::
         Call;
    local_38._8_8_ = local_28;
    local_28._0_8_ = param_2;
  }
  else {
    iVar2 = param_2->ArrayNum;
    local_38._8_8_ = local_res8;
    pTVar3 = (TFunctionRef<void___cdecl(int)> *)local_28;
    local_28._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::SculptUtil::RecalculateROINormals'::__l7::<lambda_2>,void,int>::
         Call;
    local_28._8_8_ = local_38;
    local_38._0_8_ = param_2;
  }
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  local_res8[0] = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,pTVar3,local_res18,None,&local_48);
  return;
}

// RecalculateROINormals @ 14cd79380

void __cdecl
UE::SculptUtil::RecalculateROINormals
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMeshAttributeSet *pFVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  FDynamicMesh3 *pFStackX_8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStackX_10;
  undefined1 auStackX_20 [8];
  uint uStack_118;
  uint uStack_114;
  int aiStack_110 [2];
  ForElementType<unsigned_int> FStack_108;
  ulonglong uStack_100;
  int iStack_f8;
  int iStack_f4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TArrayView<std::nullptr_t,int> TStack_90;
  code *pcStack_80;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTStack_78;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_70;
  FDynamicMesh3 **ppFStack_68;
  ulonglong *puStack_60;
  undefined4 uStack_3c;
  ulonglong uVar14;
  
  pFVar5 = (param_1->AttributeSet).Ptr;
  if ((((pFVar5 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar5->NormalLayers).Array.ArrayNum < 1))
      || (*(longlong *)(pFVar5->NormalLayers).Array.AllocatorInstance.Data == 0)) || (param_5)) {
    RecalculateNormals_PerVertex(param_1,param_2,param_3,param_4);
    return;
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  uVar14 = 0;
  uVar13 = 0;
  pFStackX_8 = param_1;
  pTStackX_10 = param_2;
  if (pFVar5 == (FDynamicMeshAttributeSet *)0x0) {
    uStack_100 = 0;
  }
  else {
    uStack_100 = uVar14;
    if (0 < (pFVar5->NormalLayers).Array.ArrayNum) {
      uStack_100 = *(ulonglong *)(pFVar5->NormalLayers).Array.AllocatorInstance.Data;
    }
    if (uStack_100 != 0) goto LAB_14cd77994;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Normals != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                     ,0x10,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14cd77994:
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  uVar18 = *(uint *)&(pTStackX_10->Elements).field_0x28;
  FStack_108 = (ForElementType<unsigned_int>)&(pTStackX_10->Elements).field_0x10;
  uStack_e4 = 1;
  uStack_d0 = 0;
  uStack_d4 = uStack_d0;
  if (uVar18 != 0) {
    puVar17 = *(uint **)&(pTStackX_10->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)FStack_108;
    }
    uVar19 = *puVar17;
    uVar16 = uVar14;
    uStack_d0 = 0;
    uVar13 = 0;
    while (uVar19 == 0) {
      iVar12 = (int)uVar14;
      uStack_d0 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uStack_d0;
      uVar13 = iVar12 + 1;
      uVar14 = (ulonglong)uVar13;
      uStack_d4 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14cd77a54;
      uVar19 = (puVar17 + 1)[iVar12];
    }
    uStack_e4 = -uVar19 & uVar19;
    uVar14 = (ulonglong)uStack_e4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_f8 = (int)lVar10;
    uStack_d4 = iStack_f8 + -1 + uStack_d0;
    if ((int)uVar18 < (int)uStack_d4) {
      uStack_d4 = uVar18;
    }
  }
LAB_14cd77a54:
  uStack_114 = *(uint *)&(pTStackX_10->Elements).field_0x28;
  uStack_cc = uStack_3c;
  iStack_c8 = *(int *)&(pTStackX_10->Elements).field_0x8 -
              *(int *)&(pTStackX_10->Elements).field_0x34;
  uVar19 = uStack_114 & 0xffffffe0;
  pTStack_f0 = pTStackX_10;
  uStack_d8 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_e4,uVar13);
  pTStack_c0 = pTStackX_10;
  iVar12 = (int)uStack_114 >> 5;
  TStack_b8._28_4_ = uStack_3c;
  TStack_b8.BaseBitIndex = uStack_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  bVar9 = (byte)uStack_114;
  uStack_e8 = uVar13;
  puStack_e0 = (undefined1 *)FStack_108;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_108;
  if ((((int)uStack_114 < 0) || ((int)uVar18 < (int)uStack_114)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = *(int *)((longlong)FStack_108 + 0x18);
  uVar18 = uStack_114;
  if (uStack_114 != uVar13) {
    FVar15 = *(ForElementType<unsigned_int> *)((longlong)FStack_108 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FStack_108 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = FStack_108;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uStack_114 = uVar13;
      uVar18 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14cd77b80;
      uVar18 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar10 * 4);
    }
    uVar14 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_f4 = (int)lVar10;
    uStack_114 = iStack_f4 + -1 + uVar19;
    uVar18 = uStack_114;
    if ((int)uVar13 < (int)uStack_114) {
      uStack_114 = uVar13;
      uVar18 = uVar13;
    }
  }
LAB_14cd77b80:
  do {
    pTVar7 = pTStack_c0;
    if (*(int *)&(pTStack_c0->Elements).field_0x8 - *(int *)&(pTStack_c0->Elements).field_0x34 !=
        (int)uStack_98) {
      auStackX_20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
    }
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        ((ForElementType<unsigned_int>)TStack_b8.Array == FStack_108)) && (pTVar7 == pTStackX_10)) {
      ppFStack_68 = &pFStackX_8;
      puStack_60 = &uStack_100;
      TStack_90.DataPtr = (void **)0x0;
      TStack_90.ArrayNum = 0;
      pcStack_80 = Core::Private::Function::
                   TFunctionRefCaller<`UE::SculptUtil::RecalculateNormals_Overlay'::__l2::<lambda_1>,void,int>
                   ::Call;
      ppTStack_78 = &pTStack_70;
      pTStack_70 = param_4;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",param_4->ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&pcStack_80,pTStackX_10._0_1_,None,&TStack_90);
      return;
    }
    uVar2 = *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_b8.CurrentBitIndex * 0xc) * 3
    ;
    lVar10 = *(longlong *)(uStack_100 + 0x78);
    uVar13 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 >> 9) * 8) +
                      (ulonglong)(uVar2 & 0x1ff) * 4);
    uVar19 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    uVar2 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
    if (uVar13 != 0xffffffff) {
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar3 = (param_3->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar13) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar12 * 0xc) == uVar13) {
              if (iVar12 != -1) goto LAB_14cd77d38;
              break;
            }
            iVar12 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      uStack_118 = uVar13;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,aiStack_110,(bool *)&uStack_118);
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&uStack_118) &&
          ((FScriptContainerElement *)&uStack_118 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      pFVar4 = (param_4->AllocatorInstance).Data;
      param_4->ArrayNum = iVar12 + 1;
      *(uint *)(pFVar4 + (longlong)iVar12 * 4) = uStack_118;
LAB_14cd77d38:
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar3 = (param_3->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar19) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar12 * 0xc) == uVar19)
            goto LAB_14cd77e35;
            iVar12 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      uStack_118 = uVar19;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,aiStack_110,(bool *)&uStack_118);
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&uStack_118) &&
          ((FScriptContainerElement *)&uStack_118 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar12 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 4) = uStack_118;
LAB_14cd77e35:
      uStack_118 = uVar2;
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar3 = (param_3->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(param_3->HashSize - 1U & uVar2) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar12 * 0xc) == uVar2)
            goto LAB_14cd77f35;
            iVar12 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,aiStack_110,(bool *)&uStack_118);
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&uStack_118) &&
          ((FScriptContainerElement *)&uStack_118 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar12 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 4) = uStack_118;
    }
LAB_14cd77f35:
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// RecalculateROINormals @ 14cd793c0

void __cdecl
UE::SculptUtil::RecalculateROINormals
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          FUniqueIndexSet *param_3,bool param_4)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FDynamicMesh3 *pFStackX_8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStackX_10;
  undefined1 auStackX_18 [8];
  int iStackX_20;
  int aiStack_138 [2];
  int aiStack_130 [2];
  int aiStack_128 [2];
  longlong lStack_120;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  int iStack_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *puStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TArrayView<std::nullptr_t,int> TStack_a8;
  code *pcStack_98;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTStack_90;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_88;
  FDynamicMesh3 **ppFStack_80;
  longlong *plStack_78;
  undefined4 uStack_54;
  
  pFVar6 = (param_1->AttributeSet).Ptr;
  if ((((pFVar6 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar6->NormalLayers).Array.ArrayNum < 1))
      || (*(longlong *)(pFVar6->NormalLayers).Array.AllocatorInstance.Data == 0)) || (param_4)) {
    RecalculateNormals_PerVertex(param_1,param_2,param_3);
    return;
  }
  pFVar6 = (param_1->AttributeSet).Ptr;
  pFStackX_8 = param_1;
  pTStackX_10 = param_2;
  if (pFVar6 == (FDynamicMeshAttributeSet *)0x0) {
    lStack_120 = 0;
  }
  else {
    if ((pFVar6->NormalLayers).Array.ArrayNum < 1) {
      lStack_120 = 0;
    }
    else {
      lStack_120 = *(longlong *)(pFVar6->NormalLayers).Array.AllocatorInstance.Data;
    }
    if (lStack_120 != 0) goto LAB_14cd78060;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Normals != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptUtil.cpp"
                     ,0x6d,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14cd78060:
  UE::Geometry::FUniqueIndexSet::Initialize
            (param_3,*(int *)(lStack_120 + 8) * 0x200 + *(int *)(lStack_120 + 0xc),0);
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
  iStack_100 = 0;
  iStack_e8 = 0;
  uStack_fc = 1;
  iStack_ec = 0;
  if (iVar10 != 0) {
    puVar20 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar21;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_100;
      iStack_e8 = iStack_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      iStack_ec = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_14cd78100;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_fc = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_fc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStackX_20 = (int)lVar13;
    iStack_ec = iStack_e8 + -1 + iStackX_20;
    if (iVar10 < iStack_ec) {
      iStack_ec = iVar10;
    }
  }
LAB_14cd78100:
  uVar17 = *(uint *)&(param_2->Elements).field_0x28;
  uStack_e4 = uStack_54;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_e0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_f0 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
  TStack_d0.CurrentBitIndex = iStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_d0._28_4_ = uStack_54;
  TStack_d0.BaseBitIndex = iStack_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  pTStack_118 = pTVar21;
  pTStack_108 = param_2;
  puStack_f8 = (undefined1 *)pTVar21;
  pTStack_d8 = param_2;
  TStack_d0.Array = pTVar21;
  if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar21;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd78200;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_110 = (int)lVar13;
    uVar17 = iStack_110 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14cd78200:
  while( true ) {
    pTVar8 = pTStack_d8;
    if (*(int *)&(pTStack_d8->Elements).field_0x8 - *(int *)&(pTStack_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      auStackX_18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (((TStack_d0.CurrentBitIndex == uVar17) && (TStack_d0.Array == pTVar21)) &&
       (pTVar8 == param_2)) break;
    uVar16 = *(int *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_d0.CurrentBitIndex * 0xc) *
             3;
    lVar13 = *(longlong *)(lStack_120 + 0x78);
    iVar10 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 >> 9) * 8) +
                     (ulonglong)(uVar16 & 0x1ff) * 4);
    iVar14 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                     (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                    (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
    if (iVar10 != -1) {
      bVar12 = (byte)iVar10 & 0x3f;
      iVar19 = iVar10;
      if (iVar10 < 0) {
        iVar19 = iVar10 + 0x3f;
        bVar12 = bVar12 - 0x40;
      }
      pTVar15 = &param_3->Values;
      uVar11 = 1L << (bVar12 & 0x3f);
      uVar2 = param_3->Bits[iVar19 >> 6];
      aiStack_138[0] = iVar10;
      if ((uVar11 & uVar2) == 0) {
        param_3->Bits[iVar19 >> 6] = uVar11 | uVar2;
        pFVar5 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)aiStack_138) &&
            ((FScriptContainerElement *)aiStack_138 <
             pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_3->Values).ArrayNum;
        piVar1 = &(param_3->Values).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar15->AllocatorInstance,piVar1);
        }
        (param_3->Values).ArrayNum = iVar10 + 1;
        *(int *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = aiStack_138[0];
      }
      bVar12 = (byte)iVar14 & 0x3f;
      iVar10 = iVar14;
      if (iVar14 < 0) {
        iVar10 = iVar14 + 0x3f;
        bVar12 = bVar12 - 0x40;
      }
      uVar11 = 1L << (bVar12 & 0x3f);
      uVar2 = param_3->Bits[iVar10 >> 6];
      aiStack_130[0] = iVar14;
      if ((uVar11 & uVar2) == 0) {
        param_3->Bits[iVar10 >> 6] = uVar11 | uVar2;
        pFVar5 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)aiStack_130) &&
            ((FScriptContainerElement *)aiStack_130 <
             pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_3->Values).ArrayNum;
        piVar1 = &(param_3->Values).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar15->AllocatorInstance,piVar1);
          (param_3->Values).ArrayNum = iVar10;
        }
        (param_3->Values).ArrayNum = iVar10 + 1;
        *(int *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = aiStack_130[0];
      }
      pTVar15 = &param_3->Values;
      bVar12 = (byte)iVar4 & 0x3f;
      iVar10 = iVar4;
      if (iVar4 < 0) {
        iVar10 = iVar4 + 0x3f;
        bVar12 = bVar12 - 0x40;
      }
      uVar11 = 1L << (bVar12 & 0x3f);
      uVar2 = param_3->Bits[iVar10 >> 6];
      pTVar21 = pTStack_118;
      param_2 = pTStackX_10;
      aiStack_128[0] = iVar4;
      if ((uVar11 & uVar2) == 0) {
        param_3->Bits[iVar10 >> 6] = uVar11 | uVar2;
        pFVar5 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)aiStack_128) &&
            ((FScriptContainerElement *)aiStack_128 <
             pFVar5 + (longlong)(param_3->Values).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_3->Values).ArrayNum;
        piVar1 = &(param_3->Values).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar15->AllocatorInstance,piVar1);
          (param_3->Values).ArrayNum = iVar10;
        }
        (param_3->Values).ArrayNum = iVar10 + 1;
        *(int *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = aiStack_128[0];
        pTVar21 = pTStack_118;
        param_2 = pTStackX_10;
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pTStack_88 = &param_3->Values;
  ppFStack_80 = &pFStackX_8;
  pcStack_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::SculptUtil::RecalculateNormals_Overlay'::__l2::<lambda_1>,void,int>
               ::Call;
  plStack_78 = &lStack_120;
  TStack_a8.DataPtr = (void **)0x0;
  TStack_a8.ArrayNum = 0;
  ppTStack_90 = &pTStack_88;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_3->Values).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&pcStack_98,pTStackX_10._0_1_,None,&TStack_a8);
  return;
}

// UpdatePolyEditPreviewMaterials @ 14cd84d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Geometry::PolyEditActivityUtil::UpdatePolyEditPreviewMaterials
          (UInteractiveTool *param_1,UPolyEditActivityContext *param_2,UPolyEditPreviewMesh *param_3
          ,EPreviewMaterialType param_4)

{
  UInteractiveToolManager *pUVar1;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *this;
  FName *pFVar4;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_28;
  wchar_t *local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_4 == SourceMaterials) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UPreviewMesh::GetMaterials
              ((((param_2->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_28
              );
    UPreviewMesh::ClearOverrideRenderMaterial((UPreviewMesh *)param_3);
    UPreviewMesh::SetMaterials((UPreviewMesh *)param_3,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
  else {
    if (param_4 == PreviewMaterial) {
      UPreviewMesh::ClearOverrideRenderMaterial((UPreviewMesh *)param_3);
      pUVar1 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
      local_18 = (wchar_t *)___xmm_3f800000000000003f4000003f4ccccd;
      _uStack_10 = _UNK_15297a578;
      pUVar2 = ToolSetupUtil::GetSelectionMaterial((FLinearColor *)&local_18,pUVar1,0.0);
      UPreviewMesh::SetMaterial((UPreviewMesh *)param_3,pUVar2);
      return;
    }
    if (param_4 == UVMaterial) {
      uStack_10 = 0x31;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18 = L"/MeshModelingToolsetExp/Materials/CheckerMaterial";
      pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
      pUVar2 = (UMaterialInterface *)
               StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)&local_18,
                                (TStringView<wchar_t> *)&local_28,0,(UPackageMap *)0x0,true,
                                (FLinkerInstancingContext *)0x0);
      if (pUVar2 != (UMaterialInterface *)0x0) {
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)0x0,(FName)0x0);
        pFVar4 = ::FName::FName((FName *)&local_28,"Density");
        UMaterialInstanceDynamic::SetScalarParameterValue(this,*pFVar4,__real_3f800000);
        UPreviewMesh::SetOverrideRenderMaterial((UPreviewMesh *)param_3,(UMaterialInterface *)this);
      }
    }
  }
  return;
}

