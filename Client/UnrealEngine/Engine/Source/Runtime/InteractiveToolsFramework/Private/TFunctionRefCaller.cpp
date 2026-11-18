// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 156

// Call @ 14964bf40

FDeviceButtonState * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FDeviceButtonState_(__cdecl*)(FInputDeviceState_const_&),FDeviceButtonState,FInputDeviceState_const_&>
::Call(FDeviceButtonState *__return_storage_ptr__,void *param_1,FInputDeviceState *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14964bf60

FInputRayHit * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
::Call(FInputRayHit *__return_storage_ptr__,void *param_1,FInputDeviceRay *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14964bf80

FKey * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FKey_(__cdecl*)(void),FKey>::Call
          (FKey *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 14964bfa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::Call
          (void *param_1,FInputDeviceRay *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014964bfa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14964bfb0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,bool),void,int,bool>::Call
          (void *param_1,int *param_2,bool *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014964bfbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 14964bfd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UPrimitiveComponent_*,enum_EToolContextCoordinateSystem),void,UPrimitiveComponent_*,enum_EToolContextCoordinateSystem>
::Call(void *param_1,UPrimitiveComponent **param_2,EToolContextCoordinateSystem *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014964bfdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 14964bff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UPrimitiveComponent_*,bool),void,UPrimitiveComponent_*,bool>::
Call(void *param_1,UPrimitiveComponent **param_2,bool *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014964bffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 14964c010

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TRay<double> *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014964c01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14964c030

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014964c03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14964c050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014964c05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14964c070

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceRay_const_&),bool,FInputDeviceRay_const_&>::Call
          (void *param_1,FInputDeviceRay *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014964c076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 14964c080

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&),bool,UE::GizmoRenderingUtil::ISceneViewInterface_const_&,UE::Math::TTransform<double>_const_&>
::Call(void *param_1,ISceneViewInterface *param_2,TTransform<double> *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014964c08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 14964c0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l2::<lambda_1>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::RotationAxisAngleSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,0);
  return bVar1;
}

// Call @ 14964c0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisScaleGizmo'::__l2::<lambda_1>,bool,double_const_&,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 14964c0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14964c0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l2::<lambda_1>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 14964c110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14964c120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddUniformScaleGizmo'::__l2::<lambda_1>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 14964c140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKeyAsModifierInputBehavior::Initialize'::__l2::<lambda_1>,bool,FInputDeviceState_const_&>
::Call(void *param_1,FInputDeviceState *param_2)

{
  if (((*(FName *)param_1 == EKeys::AnyKey.KeyName) ||
      ((param_2->Keyboard).ActiveKey.Button.KeyName == *(FName *)param_1)) &&
     ((param_2->Keyboard).ActiveKey.bPressed != false)) {
    return true;
  }
  return false;
}

// Call @ 14964c170

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USingleKeyCaptureBehavior::Initialize'::__l2::<lambda_1>,bool,FInputDeviceState_const_&>
::Call(void *param_1,FInputDeviceState *param_2)

{
  if (((*(FName *)param_1 == EKeys::AnyKey.KeyName) ||
      ((param_2->Keyboard).ActiveKey.Button.KeyName == *(FName *)param_1)) &&
     ((param_2->Keyboard).ActiveKey.bPressed != false)) {
    return true;
  }
  return false;
}

// Call @ 14964c1a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoElementArrow::LineTrace'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x140));
  }
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x140));
  }
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4b0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x144));
  }
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149640038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4b0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x144));
    return;
  }
  return;
}

// Call @ 14964c1b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoElementArrowHead::LineTrace'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x140));
  }
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x140));
  }
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x200);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496400b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)param_1 + 0x140));
    return;
  }
  return;
}

// Call @ 14964c1c0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoArrowComponent::LineTraceComponent'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
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
  
  pauVar2 = *(undefined1 (**) [16])param_1;
  auVar1 = pauVar2[1];
  auVar10 = *pauVar2;
  dVar9 = *(double *)(pauVar2[1] + 8);
  dVar5 = (param_2->field0_0x0)._s_0.X * *(double *)pauVar2[4];
  dVar6 = (param_2->field0_0x0)._s_0.Y * *(double *)(pauVar2[4] + 8);
  uVar17 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar18._8_4_ = SUB84(dVar6,0);
  auVar18._0_8_ = dVar5;
  auVar18._12_4_ = uVar17;
  dVar7 = (param_2->field0_0x0)._s_0.Z * *(double *)pauVar2[5];
  dVar8 = *(double *)(pauVar2[5] + 8) * 0.0;
  auVar12 = blendpd(auVar10,auVar1,2);
  dVar4 = auVar1._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar5;
  auVar19._8_8_ = dVar7 * auVar10._8_8_ - dVar4 * dVar6;
  auVar20._8_4_ = SUB84(dVar6,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar8,0);
  auVar10._0_8_ = dVar7;
  auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar12._0_8_ * dVar7;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar8;
  auVar10 = *pauVar2;
  auVar20 = blendpd(auVar19,auVar11,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar8 = auVar19._8_8_ + auVar19._8_8_;
  dVar3 = auVar11._0_8_ + auVar11._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar8;
  auVar13._12_4_ = uVar17;
  auVar20 = blendpd(auVar13,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar8;
  auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar4 * dVar3;
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar1,2);
  auVar14._0_8_ = auVar20._0_8_ * dVar4 - auVar10._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
  auVar10 = blendpd(auVar16,auVar14,2);
  dVar4 = dVar3 * dVar9 + dVar6 + auVar14._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar8 * dVar9 + dVar5 + auVar12._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar21._0_8_ * dVar9 + dVar7 + auVar10._0_8_;
  return __return_storage_ptr__;
}

// Call @ 14964c2f0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGizmoArrowComponentSceneProxy::GetDynamicMeshElements'::__l7::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = *(double **)param_1;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = pdVar2[5];
  dVar6 = pdVar2[1];
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = pdVar2[6];
  dVar8 = pdVar2[9];
  dVar9 = pdVar2[0xd];
  dVar10 = pdVar2[2];
  dVar11 = pdVar2[10];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar4 * pdVar2[4] + dVar3 * *pdVar2 + dVar1 * pdVar2[8] + pdVar2[0xc] * 0.0;
  dVar12 = pdVar2[0xe];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar4 * dVar5 + dVar3 * dVar6 + dVar1 * dVar8 + dVar9 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar7 * dVar4 + dVar10 * dVar3 + dVar11 * dVar1 + dVar12 * 0.0;
  return __return_storage_ptr__;
}

// Call @ 14964c3c0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGizmoBoxComponentSceneProxy::GetDynamicMeshElements'::__l7::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = *(double **)param_1;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = pdVar2[5];
  dVar6 = pdVar2[1];
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = pdVar2[6];
  dVar8 = pdVar2[9];
  dVar9 = pdVar2[0xd];
  dVar10 = pdVar2[2];
  dVar11 = pdVar2[10];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar4 * pdVar2[4] + dVar3 * *pdVar2 + dVar1 * pdVar2[8] + pdVar2[0xc] * 0.0;
  dVar12 = pdVar2[0xe];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar4 * dVar5 + dVar3 * dVar6 + dVar1 * dVar8 + dVar9 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar7 * dVar4 + dVar10 * dVar3 + dVar11 * dVar1 + dVar12 * 0.0;
  return __return_storage_ptr__;
}

// Call @ 14964c490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l8::<lambda_1>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::RotationAxisAngleSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisScaleGizmo'::__l8::<lambda_1>,bool,double_const_&,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l8::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14964c4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddFreeTranslationGizmo'::__l8::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14964c4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l8::<lambda_1>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l8::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,param_2,param_3);
  return bVar1;
}

// Call @ 14964c520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddUniformScaleGizmo'::__l8::<lambda_1>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 14964c540

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoBoxComponent::LineTraceComponent'::__l8::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
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
  
  pauVar2 = *(undefined1 (**) [16])param_1;
  auVar1 = pauVar2[1];
  auVar10 = *pauVar2;
  dVar9 = *(double *)(pauVar2[1] + 8);
  dVar5 = (param_2->field0_0x0)._s_0.X * *(double *)pauVar2[4];
  dVar6 = (param_2->field0_0x0)._s_0.Y * *(double *)(pauVar2[4] + 8);
  uVar17 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar18._8_4_ = SUB84(dVar6,0);
  auVar18._0_8_ = dVar5;
  auVar18._12_4_ = uVar17;
  dVar7 = (param_2->field0_0x0)._s_0.Z * *(double *)pauVar2[5];
  dVar8 = *(double *)(pauVar2[5] + 8) * 0.0;
  auVar12 = blendpd(auVar10,auVar1,2);
  dVar4 = auVar1._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar5;
  auVar19._8_8_ = dVar7 * auVar10._8_8_ - dVar4 * dVar6;
  auVar20._8_4_ = SUB84(dVar6,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar8,0);
  auVar10._0_8_ = dVar7;
  auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar12._0_8_ * dVar7;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar8;
  auVar10 = *pauVar2;
  auVar20 = blendpd(auVar19,auVar11,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar8 = auVar19._8_8_ + auVar19._8_8_;
  dVar3 = auVar11._0_8_ + auVar11._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar8;
  auVar13._12_4_ = uVar17;
  auVar20 = blendpd(auVar13,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar8;
  auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar4 * dVar3;
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar1,2);
  auVar14._0_8_ = auVar20._0_8_ * dVar4 - auVar10._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
  auVar10 = blendpd(auVar16,auVar14,2);
  dVar4 = dVar3 * dVar9 + dVar6 + auVar14._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar8 * dVar9 + dVar5 + auVar12._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar21._0_8_ * dVar9 + dVar7 + auVar10._0_8_;
  return __return_storage_ptr__;
}

// Call @ 14964c670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l18::<lambda_1>,bool>::
Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964c6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14964c6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l2::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 14964c710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l8::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddFreeTranslationGizmo'::__l8::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l8::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::ScaleAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l8::<lambda_2>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964c7b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l18::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar5 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x488);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964c818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 14964c830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFreeRotationSubGizmo::InitializeAsRotationGizmo'::__l20::<lambda_2>,void,float>
::Call(void *param_1,float *param_2)

{
  `UFreeRotationSubGizmo::InitializeAsRotationGizmo'::__l20::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14964c840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo'::__l20::<lambda_2>,void,float>
::Call(void *param_1,float *param_2)

{
  `UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo'::__l20::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14964c850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l12::<lambda_2>,void,bool>::
Call(void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x150));
  pcVar2 = *(code **)(lVar1 + 0x150);
  plVar4 = (longlong *)(lVar1 + 0x160);
  if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 14964c8c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisScaleGizmo'::__l12::<lambda_2>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x150));
  pcVar2 = *(code **)(lVar1 + 0x150);
  plVar4 = (longlong *)(lVar1 + 0x160);
  if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 14964c930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddUniformScaleGizmo'::__l12::<lambda_2>,void,bool>::
Call(void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x150));
  pcVar2 = *(code **)(lVar1 + 0x150);
  plVar4 = (longlong *)(lVar1 + 0x160);
  if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 14964c9a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l2::<lambda_3>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964c9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14964ca00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_3>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964ca20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddFreeTranslationGizmo'::__l8::<lambda_3>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964ca40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l8::<lambda_3>,bool,double,double_&>
::Call(void *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = UCombinedTransformGizmo::PositionAxisDeltaSnapFunction
                    (*(UCombinedTransformGizmo **)param_1,*param_2,param_3,
                     *(int *)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 14964ca60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l27::<lambda_3>,bool>::
Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964caa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14964cac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l12::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x150));
  pcVar2 = *(code **)(lVar1 + 0x150);
  plVar4 = (longlong *)(lVar1 + 0x160);
  if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 14964cb30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneScaleGizmo'::__l12::<lambda_3>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x150));
  pcVar2 = *(code **)(lVar1 + 0x150);
  plVar4 = (longlong *)(lVar1 + 0x160);
  if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 14964cba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisRotationGizmo'::__l2::<lambda_4>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar5 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x488);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964cc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 14964cc20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_4>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964cc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14964cc80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l27::<lambda_4>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar5 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x488);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964cce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 14964cd00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l12::<lambda_4>,void,bool>
::Call(void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x150));
  pcVar2 = *(code **)(lVar1 + 0x150);
  plVar4 = (longlong *)(lVar1 + 0x160);
  if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x178);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 14964cd70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddAxisTranslationGizmo'::__l2::<lambda_5>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar5 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x488);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964cdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 14964cdf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_5>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964ce38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14964ce50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l30::<lambda_5>,bool>::
Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964ce98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 14964ceb0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UCombinedTransformGizmo::<lambda_66_>,bool>::Call
          (void *param_1)

{
  return *(char *)(*(longlong *)param_1 + 0x83) == '\x01';
}

// Call @ 14964ced0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::AddPlaneTranslationGizmo'::__l2::<lambda_6>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar5 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x488);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964cf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 14964cf50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCombinedTransformGizmo::SetWorldAlignmentFunctions'::__l30::<lambda_6>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar5 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x488);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014964cfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149695240

UInputBehaviorSet * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UInputBehaviorSet_const_*>::Call(void *param_1)

{
  UInputBehaviorSet *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149695240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UInputBehaviorSet *)(**(code **)param_1)();
  return pUVar1;
}

// Call @ 149695250

TQuat<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),UE::Math::TQuat<double>,UE::Math::TQuat<double>_const_&>
::Call(TQuat<double> *__return_storage_ptr__,void *param_1,TQuat<double> *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 149695270

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,TVector2<double> *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 149695290

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(void),UE::Math::TVector<double>_>::Call
          (TVector<double> *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 1496952b0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call
          (void *param_1,double *param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496952b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(**(code **)param_1)(param_2);
  return dVar1;
}

// Call @ 1496952c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::Math::TVector<double>),void,UE::Math::TVector<double>_>::Call
          (void *param_1,TVector<double> *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_28 = *(undefined4 *)&param_2->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  local_18 = (param_2->field0_0x0)._s_0.Z;
  (**(code **)param_1)(&local_28);
  return;
}

// Call @ 1496952f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_&),bool,double_const_&,double_&>::Call
          (void *param_1,double *param_2,double *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496952fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 149695310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014969531c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 149695330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014969533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 149695350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>::Call
          (void *param_1,FInputDeviceState *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149695356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 149695360

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call
          (void *param_1,double *param_2,double *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014969536e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3);
  return (bool)uVar1;
}

// Call @ 149695380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149695390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1496953a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1496953b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1496953c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1496953d0

TTransform<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTransformProxy::AddComponent'::__l2::<lambda_1>,UE::Math::TTransform<double>_>
::Call(TTransform<double> *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *(longlong *)param_1;
  dVar2 = *(double *)(lVar1 + 0x1f8);
  dVar3 = *(double *)(lVar1 + 0x200);
  dVar4 = *(double *)(lVar1 + 0x208);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar1 + 0x1f0);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x210);
  dVar5 = *(double *)(lVar1 + 0x218);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar3 = *(double *)(lVar1 + 0x220);
  dVar4 = *(double *)(lVar1 + 0x228);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
  dVar2 = *(double *)(lVar1 + 0x230);
  dVar5 = *(double *)(lVar1 + 0x238);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  dVar3 = *(double *)(lVar1 + 0x240);
  dVar4 = *(double *)(lVar1 + 0x248);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// Call @ 149695420

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveGizmo * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::CreateGizmoViaSimpleBuilder'::__l2::<lambda_1>,UInteractiveGizmo_*,FToolBuilderState_const_&>
::Call(void *param_1,FToolBuilderState *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  FName FVar5;
  FName FVar6;
  UClass *pUVar7;
  UInteractiveGizmo *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  undefined1 auStack_c8 [32];
  FName FStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  pUVar10 = (UClass *)0x0;
  FStack_a8.ComparisonIndex.Value = 0;
  FStack_a8.Number = 0;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UInteractiveGizmo_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = *(UClass **)((longlong)param_1 + 8);
    }
  }
  FVar5 = FStack_a8;
  pUVar3 = *(UObject **)param_1;
  if (FStack_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UInteractiveGizmo_NoRegister();
  CheckIsClassChildOf_Internal(pUVar7,pUVar10);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_98,pUVar10);
  FVar6 = FStack_a8;
  auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_98._56_8_ = (UPackage *)0x0;
  FStack_a8.ComparisonIndex = FVar5.ComparisonIndex.Value;
  FStack_a8.Number = FVar5.Number;
  auStack_98._16_4_ = FStack_a8.ComparisonIndex.Value;
  auStack_98._20_4_ = FStack_a8.Number;
  auStack_98._24_4_ = RF_NoFlags;
  auStack_98._40_8_ = (UObject *)0x0;
  auStack_98[0x20] = false;
  FStack_a8 = FVar6;
  auStack_98._8_8_ = pUVar3;
  pUVar8 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
  if (auStack_98._64_8_ != 0) {
    plVar9 = (longlong *)(auStack_98 + 0x50);
    if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)auStack_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return pUVar8;
}

// Call @ 149695430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USimpleSingleClickGizmo::InitializeWithComponent'::__l2::<lambda_1>,void,bool>::
Call(void *param_1,bool *param_2)

{
  bool bVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  longlong *plVar3;
  
  this = *(UObjectBaseUtility **)param_1;
  bVar1 = *param_2;
  if (this != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,bVar1);
    }
  }
  return;
}

// Call @ 149695480

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoRectangleComponent::LineTraceComponent'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
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
  
  pauVar2 = *(undefined1 (**) [16])param_1;
  auVar1 = pauVar2[1];
  auVar10 = *pauVar2;
  dVar9 = *(double *)(pauVar2[1] + 8);
  dVar5 = (param_2->field0_0x0)._s_0.X * *(double *)pauVar2[4];
  dVar6 = (param_2->field0_0x0)._s_0.Y * *(double *)(pauVar2[4] + 8);
  uVar17 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar18._8_4_ = SUB84(dVar6,0);
  auVar18._0_8_ = dVar5;
  auVar18._12_4_ = uVar17;
  dVar7 = (param_2->field0_0x0)._s_0.Z * *(double *)pauVar2[5];
  dVar8 = *(double *)(pauVar2[5] + 8) * 0.0;
  auVar12 = blendpd(auVar10,auVar1,2);
  dVar4 = auVar1._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar5;
  auVar19._8_8_ = dVar7 * auVar10._8_8_ - dVar4 * dVar6;
  auVar20._8_4_ = SUB84(dVar6,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar8,0);
  auVar10._0_8_ = dVar7;
  auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar12._0_8_ * dVar7;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar8;
  auVar10 = *pauVar2;
  auVar20 = blendpd(auVar19,auVar11,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar8 = auVar19._8_8_ + auVar19._8_8_;
  dVar3 = auVar11._0_8_ + auVar11._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar8;
  auVar13._12_4_ = uVar17;
  auVar20 = blendpd(auVar13,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar8;
  auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar4 * dVar3;
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar1,2);
  auVar14._0_8_ = auVar20._0_8_ * dVar4 - auVar10._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
  auVar10 = blendpd(auVar16,auVar14,2);
  dVar4 = dVar3 * dVar9 + dVar6 + auVar14._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar8 * dVar9 + dVar5 + auVar12._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar21._0_8_ * dVar9 + dVar7 + auVar10._0_8_;
  return __return_storage_ptr__;
}

// Call @ 1496955b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_1>,bool>::
Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496955f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149695610

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::__l2::<lambda_1>,bool,FInputDeviceRay_const_&>
::Call(void *param_1,FInputDeviceRay *param_2)

{
  return *(char *)(*(longlong *)param_1 + 0x83) == '\x01';
}

// Call @ 149695630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149695690

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_1>,bool>::
Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496956d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 1496956f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_1>,bool>::
Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149695750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_1>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149695756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x408))();
  return;
}

// Call @ 149695770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster::SetGizmoOriginTransform'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  atomic<int> aVar13;
  atomic<int> aVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  
  pTVar15 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x68);
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar13 = pTVar15->SharedReferenceCount;
    do {
      if (aVar13 == (atomic<int>)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14968b543;
      }
      LOCK();
      aVar14 = pTVar15->SharedReferenceCount;
      bVar16 = aVar13 == aVar14;
      if (bVar16) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar13 + 1);
        aVar14 = aVar13;
      }
      UNLOCK();
      aVar13 = aVar14;
    } while (!bVar16);
    lVar1 = *(longlong *)((longlong)param_1 + 0x60);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 8);
      uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x18);
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x20);
      uVar6 = *(undefined8 *)((longlong)param_1 + 0x28);
      uVar7 = *(undefined8 *)((longlong)param_1 + 0x30);
      uVar8 = *(undefined8 *)((longlong)param_1 + 0x38);
      uVar9 = *(undefined8 *)((longlong)param_1 + 0x40);
      uVar10 = *(undefined8 *)((longlong)param_1 + 0x48);
      uVar11 = *(undefined8 *)((longlong)param_1 + 0x50);
      uVar12 = *(undefined8 *)((longlong)param_1 + 0x58);
      *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)param_1;
      *(undefined8 *)(lVar1 + 0x88) = uVar2;
      *(undefined8 *)(lVar1 + 0x90) = uVar3;
      *(undefined8 *)(lVar1 + 0x98) = uVar4;
      *(undefined8 *)(lVar1 + 0xa0) = uVar5;
      *(undefined8 *)(lVar1 + 0xa8) = uVar6;
      *(undefined8 *)(lVar1 + 0xb0) = uVar7;
      *(undefined8 *)(lVar1 + 0xb8) = uVar8;
      *(undefined8 *)(lVar1 + 0xc0) = uVar9;
      *(undefined8 *)(lVar1 + 200) = uVar10;
      *(undefined8 *)(lVar1 + 0xd0) = uVar11;
      *(undefined8 *)(lVar1 + 0xd8) = uVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      return;
    }
  }
LAB_14968b543:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// Call @ 149695780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoElementGroupBase::SetPartIdentifier'::__l2::<lambda_1>,void,UGizmoElementBase_*>
::Call(void *param_1,UGizmoElementBase **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149695794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x380))
            (*param_2,*(undefined4 *)param_1,*(undefined1 *)((longlong)param_1 + 4),0);
  return;
}

// Call @ 1496957b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x430));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x430);
  plVar4 = (longlong *)(lVar1 + 0x440);
  if (*(longlong **)(lVar1 + 0x458) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x458);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496957f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149695810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::Tick'::__l2::<lambda_1>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,UGizmoLineHandleComponent **param_3,
      UGizmoComponentAxisSource **param_4,TInterval1<float> *param_5,TVector<double> *param_6,
      float *param_7)

{
  UGizmoLineHandleComponent *pUVar1;
  float fVar2;
  
  pUVar1 = *param_3;
  if (pUVar1 != (UGizmoLineHandleComponent *)0x0) {
    fVar2 = (float)(**(code **)((*param_2)->_padding_ + 0x10))();
    pUVar1->Length = fVar2;
  }
  return;
}

// Call @ 149695840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoElementGroupBase::DrawHUD'::__l5::<lambda_1>,void,UGizmoElementBase_*>::
Call(void *param_1,UGizmoElementBase **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149695854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x2b8))
            (*param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined8 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 149695870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoElementGroupBase::Render'::__l5::<lambda_1>,void,UGizmoElementBase_*>::
Call(void *param_1,UGizmoElementBase **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149695880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x2b0))
            (*param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 149695890

float __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_1>,float>::
Call(void *param_1)

{
  longlong lVar1;
  
  lVar1 = 0xb8;
  if (*(char *)(*(longlong *)(*(longlong *)param_1 + 0x128) + 0xb4) == '\0') {
    lVar1 = 0xb0;
  }
  return *(float *)(lVar1 + *(longlong *)(*(longlong *)param_1 + 0x128));
}

// Call @ 1496958c0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGizmoRectangleComponentSceneProxy::GetDynamicMeshElements'::__l7::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar2 = *(double **)param_1;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = pdVar2[5];
  dVar6 = pdVar2[1];
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = pdVar2[6];
  dVar8 = pdVar2[9];
  dVar9 = pdVar2[0xd];
  dVar10 = pdVar2[2];
  dVar11 = pdVar2[10];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar4 * pdVar2[4] + dVar3 * *pdVar2 + dVar1 * pdVar2[8] + pdVar2[0xc] * 0.0;
  dVar12 = pdVar2[0xe];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar4 * dVar5 + dVar3 * dVar6 + dVar1 * dVar8 + dVar9 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar7 * dVar4 + dVar10 * dVar3 + dVar11 * dVar1 + dVar12 * 0.0;
  return __return_storage_ptr__;
}

// Call @ 149695990

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_1>,bool>
::Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496959d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 1496959f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_1>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 400));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 400);
  plVar4 = (longlong *)(lVar1 + 0x1a0);
  if (*(longlong **)(lVar1 + 0x1b8) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x1b8);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149695a50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l11::<lambda_1>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,
      UGizmoLocalFloatParameterSource **param_3,UGizmoLineHandleComponent **param_4,
      TInterval1<float> *param_5,float *param_6)

{
  TInterval1<float> TVar1;
  
  if (*param_6 <= 0.0 && *param_6 != 0.0) {
    TVar1.Max = 0.0;
    TVar1.Min = (float)__real_ff7fffff;
    *param_5 = TVar1;
    return;
  }
  *param_5 = (TInterval1<float>)((ulonglong)__real_7f7fffff << 0x20);
  return;
}

// Call @ 149695a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::AddIntervalHandleGizmo'::__l12::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  local_res10 = *(undefined8 *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x130));
  pcVar2 = *(code **)(lVar1 + 0x130);
  plVar4 = (longlong *)(lVar1 + 0x140);
  if (*(longlong **)(lVar1 + 0x158) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x158);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_res10,local_res8);
  return;
}

// Call @ 149695b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGizmoElementGroupBase::LineTrace'::__l13::<lambda_1>,void,UGizmoElementBase_*>
::Call(void *param_1,UGizmoElementBase **param_2)

{
  `UGizmoElementGroupBase::LineTrace'::__l13::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 149695b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisAngleGizmo>'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149695b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UAxisPositionGizmo>'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149695b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149695b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149695b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  `UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149695b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTransformProxy::AddComponent'::__l2::<lambda_2>,void,UE::Math::TTransform<double>_const_&>
::Call(void *param_1,TTransform<double> *param_2)

{
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  USceneComponent::SetWorldTransform
            (*(USceneComponent **)param_1,&local_68,false,(FHitResult *)0x0,None);
  (**(code **)(**(longlong **)param_1 + 0x440))(*(longlong **)param_1,1,0);
  return;
}

// Call @ 149695be0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_2>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 400));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 400);
  plVar4 = (longlong *)(lVar1 + 0x1a0);
  if (*(longlong **)(lVar1 + 0x1b8) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x1b8);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149695c40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149695cc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_2>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149695d40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_2>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149695dc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_2>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149695e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_2>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149695e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x410))();
  return;
}

// Call @ 149695e60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,TRay<double> *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x460));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x460);
  plVar4 = (longlong *)(lVar1 + 0x470);
  if (*(longlong **)(lVar1 + 0x488) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x488);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3,param_2,param_3);
  return (bool)uVar2;
}

// Call @ 149695ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_2>,void,float>::Call
          (void *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x128);
  if (*(char *)(lVar1 + 0xb4) != '\0') {
    if (fVar2 <= __real_3c23d70a) {
      fVar2 = __real_3c23d70a;
    }
    *(float *)(lVar1 + 0xb8) = fVar2;
    return;
  }
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(lVar1 + 0xb0) = fVar2;
  return;
}

// Call @ 149695f30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149695f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149695fb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetWorldAlignmentFunctions'::__l9::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x1c0));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x1c0);
  plVar5 = (longlong *)(lVar1 + 0x1d0);
  if (*(longlong **)(lVar1 + 0x1e8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x1e8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149696018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149696030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>,void,float>
::Call(void *param_1,float *param_2)

{
  `UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 149696040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l15::<lambda_2>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,
      UGizmoLocalFloatParameterSource **param_3,UGizmoLineHandleComponent **param_4,
      TInterval1<float> *param_5,float *param_6)

{
  TInterval1<float> TVar1;
  
  TVar1.Max = __real_7f7fffff;
  TVar1.Min = __real_ff7fffff;
  *param_5 = TVar1;
  return;
}

// Call @ 149696070

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::AddIntervalHandleGizmo'::__l2::<lambda_3>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x1c0));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x1c0);
  plVar5 = (longlong *)(lVar1 + 0x1d0);
  if (*(longlong **)(lVar1 + 0x1e8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x1e8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496960d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 1496960f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_3>,bool,FInputDeviceRay_const_&>
::Call(void *param_1,FInputDeviceRay *param_2)

{
  return *(char *)(*(longlong *)param_1 + 0x83) == '\x01';
}

// Call @ 149696110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_3>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149696116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x428))();
  return;
}

// Call @ 149696130

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_3>,float,float>::Call
          (void *param_1,float *param_2)

{
  if (*(char *)(*(longlong *)(*(longlong *)param_1 + 0x128) + 0xb4) != '\0') {
    return *(float *)(*(longlong *)param_1 + 0x178) * *param_2;
  }
  return __real_3f800000 * *param_2;
}

// Call @ 149696170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l17::<lambda_3>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,
      UGizmoLocalFloatParameterSource **param_3,UGizmoLineHandleComponent **param_4,
      TInterval1<float> *param_5,float *param_6)

{
  float fVar1;
  UGizmoLocalFloatParameterSource *pUVar2;
  TInterval1<float> TVar3;
  
  fVar1 = *param_6;
  pUVar2 = *param_3;
  TVar3.Max = __real_7f7fffff;
  TVar3.Min = __real_ff7fffff;
  *param_5 = TVar3;
  if (pUVar2 != (UGizmoLocalFloatParameterSource *)0x0) {
    if (fVar1 < 0.0) {
      param_5->Max = 0.0;
      return;
    }
    param_5->Min = 0.0;
  }
  return;
}

// Call @ 1496961c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_3>,bool>
::Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149696208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149696220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_4>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149696226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x430))();
  return;
}

// Call @ 149696240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_4>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,UGizmoLineHandleComponent **param_3,
      UGizmoComponentAxisSource **param_4,TInterval1<float> *param_5,TVector<double> *param_6,
      float *param_7)

{
  UGizmoComponentAxisSource **local_res20;
  
  local_res20 = param_4;
  TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UIntervalGizmo,__UIntervalGizmo::SetActiveTarget_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
              *)&(*param_2)->_padding_,(UIntervalGizmo *)&local_res20,*(<lambda_1> **)param_1);
  return;
}

// Call @ 1496962a0

float __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_4>,float>::
Call(void *param_1)

{
  return *(float *)(*(longlong *)(*(longlong *)param_1 + 0x128) + 0xc0);
}

// Call @ 1496962c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_4>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149696328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149696340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_5>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149696346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x418))();
  return;
}

// Call @ 149696360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_5>,void,float>::Call
          (void *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  *(float *)(*(longlong *)(*(longlong *)param_1 + 0x128) + 0xc0) = fVar1;
  return;
}

// Call @ 149696390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_5>,bool>
::Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496963d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 1496963f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_6>,void>::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496963f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x420))();
  return;
}

// Call @ 149696410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_6>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,UGizmoLineHandleComponent **param_3,
      UGizmoComponentAxisSource **param_4,TInterval1<float> *param_5,TVector<double> *param_6,
      float *param_7)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  `UIntervalGizmo::SetActiveTarget'::__l2::<lambda_6>::operator()
            (param_1,*param_2,*param_3,*param_4,param_5,(TVector<double> *)&local_28._s_0,*param_7);
  return;
}

// Call @ 149696480

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_6>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496964e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 149696500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_7>,void,UGizmoLocalFloatParameterSource_*,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UE::Geometry::TInterval1<float>_&,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,
      UGizmoLocalFloatParameterSource **param_3,UGizmoLineHandleComponent **param_4,
      TInterval1<float> *param_5,float *param_6)

{
  USceneComponent::SetVisibility((USceneComponent *)*param_4,false,DirtyOnly);
  return;
}

// Call @ 149696520

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_7>,bool>
::Call(void *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x560));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x560);
  plVar4 = (longlong *)(lVar1 + 0x570);
  if (*(longlong **)(lVar1 + 0x588) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x588);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149696568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return (bool)uVar2;
}

// Call @ 149696580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UIntervalGizmo::SetActiveTarget'::__l2::<lambda_8>,void,UGizmoLocalFloatParameterSource_*,UGizmoLineHandleComponent_*,UGizmoComponentAxisSource_*,UE::Geometry::TInterval1<float>_&,UE::Math::TVector<double>,float>
::Call(void *param_1,UGizmoLocalFloatParameterSource **param_2,UGizmoLineHandleComponent **param_3,
      UGizmoComponentAxisSource **param_4,TInterval1<float> *param_5,TVector<double> *param_6,
      float *param_7)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  `UIntervalGizmo::SetActiveTarget'::__l2::<lambda_8>::operator()
            (param_1,*param_2,*param_3,*param_4,param_5,(TVector<double> *)&local_28._s_0,*param_7);
  return;
}

// Call @ 1496965f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_8>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
::Call(void *param_1,FCustomDestinationParams *param_2,TVector<double> *param_3)

{
  longlong lVar1;
  TRay<double> *pTVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = param_2->WorldRay;
  CheckCallable(*(void **)(lVar1 + 0x590));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x590);
  plVar5 = (longlong *)(lVar1 + 0x5a0);
  if (*(longlong **)(lVar1 + 0x5b8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x5b8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149696658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar4,pTVar2,param_3);
  return (bool)uVar3;
}

// Call @ 1496d84e0

UContextObjectStore * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UContextObjectStore_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UContextObjectStore_*,UInteractiveToolsContext::FContextInitInfo_const_&>
::Call(void *param_1,FContextInitInfo *param_2)

{
  UContextObjectStore *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d84e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UContextObjectStore *)(**(code **)param_1)(param_2);
  return pUVar1;
}

// Call @ 1496d84f0

UInputRouter * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UInputRouter_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UInputRouter_*,UInteractiveToolsContext::FContextInitInfo_const_&>
::Call(void *param_1,FContextInitInfo *param_2)

{
  UInputRouter *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d84f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UInputRouter *)(**(code **)param_1)(param_2);
  return pUVar1;
}

// Call @ 1496d8500

UInteractiveGizmoManager * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UInteractiveGizmoManager_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UInteractiveGizmoManager_*,UInteractiveToolsContext::FContextInitInfo_const_&>
::Call(void *param_1,FContextInitInfo *param_2)

{
  UInteractiveGizmoManager *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d8506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UInteractiveGizmoManager *)(**(code **)param_1)(param_2);
  return pUVar1;
}

// Call @ 1496d8510

UToolTargetManager * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UToolTargetManager_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UToolTargetManager_*,UInteractiveToolsContext::FContextInitInfo_const_&>
::Call(void *param_1,FContextInitInfo *param_2)

{
  UToolTargetManager *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d8516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UToolTargetManager *)(**(code **)param_1)(param_2);
  return pUVar1;
}

// Call @ 1496d8520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UContextObjectStore_*),void,UContextObjectStore_*>::Call
          (void *param_1,UContextObjectStore **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d8526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1496d8530

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(UInputRouter_*),void,UInputRouter_*>
::Call(void *param_1,UInputRouter **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d8536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1496d8540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UInteractiveGizmoManager_*),void,UInteractiveGizmoManager_*>::
Call(void *param_1,UInteractiveGizmoManager **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d8546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1496d8550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UInteractiveToolManager_*),void,UInteractiveToolManager_*>::Call
          (void *param_1,UInteractiveToolManager **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d8556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1496d8560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UToolTargetManager_*),void,UToolTargetManager_*>::Call
          (void *param_1,UToolTargetManager **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d8566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1496d8570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UToolTargetManager::BuildAllSelectedTargetable'::__l2::<lambda_1>,bool,UActorComponent_*>
::Call(void *param_1,UActorComponent **param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UActorComponent *local_res10 [3];
  
  local_res10[0] = *param_2;
  if (local_res10[0] == (UActorComponent *)0x0) {
    return false;
  }
  lVar1 = *(longlong *)param_1;
  if (*(void **)(lVar1 + 0x40) != (void *)0x0) {
    CheckCallable(*(void **)(lVar1 + 0x40));
    pcVar2 = *(code **)(lVar1 + 0x40);
    plVar5 = (longlong *)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x68);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,local_res10);
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 1496d85e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UToolTargetManager::BuildFirstSelectedTargetable'::__l2::<lambda_1>,bool,UActorComponent_*>
::Call(void *param_1,UActorComponent **param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UActorComponent *local_res10 [3];
  
  local_res10[0] = *param_2;
  if (local_res10[0] == (UActorComponent *)0x0) {
    return false;
  }
  lVar1 = *(longlong *)param_1;
  if (*(void **)(lVar1 + 0x40) != (void *)0x0) {
    CheckCallable(*(void **)(lVar1 + 0x40));
    pcVar2 = *(code **)(lVar1 + 0x40);
    plVar5 = (longlong *)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x68);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,local_res10);
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 1496d8650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UToolTargetManager::CountSelectedAndTargetable'::__l2::<lambda_1>,bool,UActorComponent_&>
::Call(void *param_1,UActorComponent *param_2)

{
  return true;
}

// Call @ 1496d8660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UToolTargetManager::CountSelectedAndTargetableWithPredicate'::__l2::<lambda_1>,bool,UActorComponent_*>
::Call(void *param_1,UActorComponent **param_2)

{
  UActorComponent *pUVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  UActorComponent *local_res10;
  
  pUVar1 = *param_2;
  if (pUVar1 != (UActorComponent *)0x0) {
    lVar2 = *(longlong *)param_1;
    if (*(void **)(lVar2 + 0x40) != (void *)0x0) {
      local_res10 = pUVar1;
      CheckCallable(*(void **)(lVar2 + 0x40));
      pcVar3 = *(code **)(lVar2 + 0x40);
      plVar6 = (longlong *)(lVar2 + 0x50);
      if (*(longlong **)(lVar2 + 0x68) != (longlong *)0x0) {
        plVar6 = *(longlong **)(lVar2 + 0x68);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar3)(uVar5,&local_res10);
      if (cVar4 == '\0') {
        return false;
      }
    }
    cVar4 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                      ((*(undefined8 **)((longlong)param_1 + 8))[1],pUVar1);
    if (cVar4 != '\0') {
      return true;
    }
  }
  return false;
}

// Call @ 1496d8700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UToolTargetManager::EnumerateSelectedAndTargetableComponents'::__l2::<lambda_1>,bool,UActorComponent_*>
::Call(void *param_1,UActorComponent **param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UActorComponent *local_res10 [3];
  
  local_res10[0] = *param_2;
  if (local_res10[0] == (UActorComponent *)0x0) {
    return false;
  }
  lVar1 = *(longlong *)param_1;
  if (*(void **)(lVar1 + 0x40) != (void *)0x0) {
    CheckCallable(*(void **)(lVar1 + 0x40));
    pcVar2 = *(code **)(lVar1 + 0x40);
    plVar5 = (longlong *)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x68);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,local_res10);
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 1496d8770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveToolManager * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_3>,UInteractiveToolManager_*,UInteractiveToolsContext::FContextInitInfo_const_&>
::Call(void *param_1,FContextInitInfo *param_2)

{
  int iVar1;
  longlong lVar2;
  UInteractiveToolsContext *pUVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UInteractiveToolManager *pUVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  UClass *pUStack_b8;
  FName FStack_b0;
  undefined1 auStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)param_1;
  FStack_b0.ComparisonIndex.Value = 0;
  FStack_b0.Number = 0;
  pUVar7 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0x270));
  if ((pUVar7 == (UClass *)0x0) &&
     ((((FSoftObjectPath *)(lVar2 + 0x278))->AssetPath).PackageName != (FName)0x0)) {
    pUVar8 = (UClass *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar2 + 0x278));
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    bVar6 = (*IsInAsyncLoadingThread)();
    if ((bVar6) && (pUVar8 != (UClass *)0x0)) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4));
      if (((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_1496d5017;
LAB_1496d5048:
      if (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0) goto LAB_1496d5056;
      bVar6 = true;
    }
    else {
LAB_1496d5017:
      pUStack_b8 = pUVar8;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar2 + 0x270),(FObjectPtr)&pUStack_b8);
      if (pUVar8 != (UClass *)0x0) goto LAB_1496d5048;
LAB_1496d5056:
      bVar6 = false;
    }
    pUVar7 = (UClass *)0x0;
    if (bVar6) {
      pUVar7 = pUVar8;
    }
  }
  if (pUVar7 != (UClass *)0x0) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      pUVar8 = UInteractiveToolManager::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) goto LAB_1496d50ba;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_1496d50ba:
  FVar4 = FStack_b0;
  pUVar3 = param_2->ToolsContext;
  pUStack_b8 = (UClass *)0x0;
  if (FStack_b0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = UInteractiveToolManager::StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_a8,pUVar7);
  FVar5 = FStack_b0;
  auStack_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_a8._56_8_ = (UPackage *)0x0;
  FStack_b0.ComparisonIndex = FVar4.ComparisonIndex.Value;
  FStack_b0.Number = FVar4.Number;
  auStack_a8._16_4_ = FStack_b0.ComparisonIndex.Value;
  auStack_a8._20_4_ = FStack_b0.Number;
  auStack_a8._24_4_ = RF_NoFlags;
  auStack_a8._40_8_ = (UObject *)0x0;
  auStack_a8[0x20] = false;
  FStack_b0 = FVar5;
  auStack_a8._8_8_ = pUVar3;
  pUVar10 = (UInteractiveToolManager *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_a8);
  if (auStack_a8._64_8_ != 0) {
    plVar11 = (longlong *)(auStack_a8 + 0x50);
    if ((longlong *)auStack_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)auStack_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  (**(code **)(pUVar10->_padding_ + 0x2b0))
            (pUVar10,param_2->QueriesAPI,param_2->TransactionsAPI,param_2->InputRouter);
  return pUVar10;
}

