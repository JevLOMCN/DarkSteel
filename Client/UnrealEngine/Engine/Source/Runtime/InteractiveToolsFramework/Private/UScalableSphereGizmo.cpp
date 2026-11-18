// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 19

// StaticClass @ 149672150

UClass * __cdecl UScalableSphereGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmo",
               &Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton,
               StaticRegisterNativesUScalableSphereGizmo,0xf0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UScalableSphereGizmo>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton;
}

// UScalableSphereGizmo @ 149687fe0

UScalableSphereGizmo * __thiscall
UScalableSphereGizmo::UScalableSphereGizmo(UScalableSphereGizmo *this,FVTableHelper *param_1)

{
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  *(undefined8 *)&this->UpdateRadiusFunc = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&(this->UpdateRadiusFunc).field_0x28 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &___7UScalableSphereGizmo__6B_;
  this->HitErrorThreshold = 12.0;
  FText::FText(&this->TransactionDescription);
  this->bIsHovering = false;
  this->bIsDragging = false;
  (this->ActiveTarget).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  return this;
}

// UScalableSphereGizmo @ 149688060

UScalableSphereGizmo * __thiscall
UScalableSphereGizmo::UScalableSphereGizmo(UScalableSphereGizmo *this)

{
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  *(undefined8 *)&this->UpdateRadiusFunc = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&(this->UpdateRadiusFunc).field_0x28 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &___7UScalableSphereGizmo__6B_;
  this->HitErrorThreshold = 12.0;
  FText::FText(&this->TransactionDescription);
  this->bIsHovering = false;
  this->bIsDragging = false;
  (this->ActiveTarget).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  return this;
}

// ~UScalableSphereGizmo @ 14968a8f0

void __thiscall UScalableSphereGizmo::~UScalableSphereGizmo(UScalableSphereGizmo *this)

{
  ITextData *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0x38 = &___7UScalableSphereGizmo__6B_;
  pIVar1 = (this->TransactionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (*(longlong *)&this->UpdateRadiusFunc != 0) {
    plVar2 = *(longlong **)&(this->UpdateRadiusFunc).field_0x28;
    plVar3 = (longlong *)&(this->UpdateRadiusFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// BeginHoverSequenceHitTest @ 149692af0

FInputRayHit * __thiscall
UScalableSphereGizmo::BeginHoverSequenceHitTest
          (UScalableSphereGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  bool bVar1;
  TVector<double>_u_0 local_188;
  TTransform<double> local_168;
  FHitResult local_108;
  
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  bVar1 = HitTest((UScalableSphereGizmo *)
                  ((longlong)&this[-1].DragStartWorldPosition.field0_0x0 + 8),&param_1->WorldRay,
                  &local_108,(TVector<double> *)&local_188._s_0,&local_168);
  if (bVar1) {
    (this->TransactionDescription).TextData.Reference =
         (ITextData *)local_168.Translation.XY.m128d_f64[0];
    *(double *)&(this->TransactionDescription).Flags = local_168.Translation.XY.m128d_f64[1];
    (this->UpdateRadiusFunc).field_0x14 = 1;
    *(double *)&this->Radius = local_168.Translation.ZW.m128d_f64[0];
    (this->ActiveTarget).field0_0x0 =
         (TObjectPtr<UTransformProxy>_u_0)local_168.Translation.XY.m128d_f64[0];
    (this->ActiveAxis).field0_0x0._s_0.X = local_168.Translation.XY.m128d_f64[1];
    (this->ActiveAxis).field0_0x0._s_0.Y = local_168.Translation.ZW.m128d_f64[0];
    *(double *)&(this->UpdateRadiusFunc).field_0x20 = local_188._s_0.X;
    *(double *)&(this->UpdateRadiusFunc).field_0x28 = local_188._s_0.Y;
    *(double *)&this->HitErrorThreshold = local_188._s_0.Z;
    FInputRayHit::FInputRayHit(__return_storage_ptr__,0.0);
  }
  else {
    (this->UpdateRadiusFunc).field_0x14 = 0;
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// CheckCircleIntersection @ 149696cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UScalableSphereGizmo::CheckCircleIntersection
          (UScalableSphereGizmo *this,TRay<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UTransformProxy *pUVar9;
  double dVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStackY_1c8 [32];
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  undefined1 local_148 [96];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar9 = (this->ActiveTarget).field0_0x0.DebugPtr;
  lVar11 = (**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9,local_148);
  dVar1 = (param_1->Direction).field0_0x0._s_0.X;
  dVar2 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  local_198._s_0.Z = *(double *)(lVar11 + 0x30);
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  local_198._s_0.X = *(double *)(lVar11 + 0x20);
  dVar10 = *(double *)(lVar11 + 0x28);
  dVar12 = (param_1->Origin).field0_0x0._s_0.X;
  dVar7 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar8 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar13 = dVar2 * dVar4 + dVar1 * dVar3 + dVar5 * dVar6;
  if ((__real_3e45798ee0000000 <=
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (dVar13 = ((dVar4 * dVar10 + dVar3 * local_198._s_0.X + dVar6 * local_198._s_0.Z) -
               (dVar7 * dVar4 + dVar12 * dVar3 + dVar8 * dVar6)) / dVar13, 0.0 <= dVar13)) {
    local_168._s_0.X = dVar1 * dVar13 + dVar12;
    local_168._s_0.Y = dVar2 * dVar13 + dVar7;
    local_168._s_0.Z = dVar5 * dVar13 + dVar8;
    if ((local_168._s_0.Y - dVar7) * dVar2 + (local_168._s_0.X - dVar12) * dVar1 +
        (local_168._s_0.Z - dVar8) * dVar5 <=
        (dVar2 * dVar2 + dVar1 * dVar1 + dVar5 * dVar5) * __real_412e848000000000) {
      local_198._s_0.Y = dVar10;
      GizmoMath::ClosetPointOnCircle
                ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_198._s_0,param_2,
                 this->Radius,(TVector<double> *)&local_180._s_0);
      dVar6 = (double)CONCAT44(local_180._12_4_,local_180._8_4_);
      dVar4 = (double)CONCAT44(local_180._4_4_,local_180._0_4_);
      dVar3 = (dVar6 - dVar7) * dVar2 + (dVar4 - dVar12) * dVar1 +
              (local_180._s_0.Z - dVar8) * dVar5;
      if (0.0 <= dVar3) {
        dVar12 = dVar1 * dVar3 + dVar12;
        dVar7 = dVar2 * dVar3 + dVar7;
        dVar8 = dVar5 * dVar3 + dVar8;
      }
      else {
        dVar12 = (param_1->Origin).field0_0x0._s_0.X;
        dVar7 = (param_1->Origin).field0_0x0._s_0.Y;
        dVar8 = (param_1->Origin).field0_0x0._s_0.Z;
      }
      if (SQRT((dVar7 - dVar6) * (dVar7 - dVar6) + (dVar12 - dVar4) * (dVar12 - dVar4) +
               (dVar8 - local_180._s_0.Z) * (dVar8 - local_180._s_0.Z)) <=
          (double)this->HitErrorThreshold) {
        (param_4->field0_0x0)._s_0.X = dVar4 - *(double *)(lVar11 + 0x20);
        (param_4->field0_0x0)._s_0.Y = dVar6 - dVar10;
        (param_4->field0_0x0)._s_0.Z = local_180._s_0.Z - local_198._s_0.Z;
        UE::Math::TVector<double>::Normalize(param_4,__real_3e45798ee0000000);
        *(undefined4 *)&param_3->field0_0x0 = local_180._0_4_;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 4) = local_180._4_4_;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 8) = local_180._8_4_;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc) = local_180._12_4_;
        (param_3->field0_0x0)._s_0.Z = local_180._s_0.Z;
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 1496a72e0

UClass * __cdecl UScalableSphereGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmo",
               &Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton,
               StaticRegisterNativesUScalableSphereGizmo,0xf0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UScalableSphereGizmo>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmo.InnerSingleton;
}

// HitTest @ 1496abde0

bool __thiscall
UScalableSphereGizmo::HitTest
          (UScalableSphereGizmo *this,TRay<double> *param_1,FHitResult *param_2,
          TVector<double> *param_3,TTransform<double> *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double>_u_0 local_28;
  
  if ((this->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) {
LAB_1496abf2c:
    bVar9 = false;
  }
  else {
    local_28._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    bVar9 = CheckCircleIntersection
                      (this,param_1,(TVector<double> *)&local_28._s_0,
                       (TVector<double> *)&local_40._s_0,(TVector<double> *)&local_58._s_0);
    if (!bVar9) {
      local_28._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_28._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_28._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      bVar9 = CheckCircleIntersection
                        (this,param_1,(TVector<double> *)&local_28._s_0,
                         (TVector<double> *)&local_40._s_0,(TVector<double> *)&local_58._s_0);
      if (!bVar9) {
        local_28._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_28._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_28._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        bVar9 = CheckCircleIntersection
                          (this,param_1,(TVector<double> *)&local_28._s_0,
                           (TVector<double> *)&local_40._s_0,(TVector<double> *)&local_58._s_0);
        if (!bVar9) goto LAB_1496abf2c;
      }
    }
    (param_3->field0_0x0)._s_0.X = local_58._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_58._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_58._s_0.Z;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_4->Translation).XY.m128d_f64 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(param_4->Translation).ZW.m128d_f64 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_4->Scale3D).XY.m128d_f64 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(param_4->Scale3D).ZW.m128d_f64 = auVar8;
    (param_4->Translation).XY.m128d_f64[0] = local_40._s_0.X;
    (param_4->Translation).XY.m128d_f64[1] = local_40._s_0.Y;
    (param_4->Translation).ZW.m128d_f64[0] = local_40._s_0.Z;
    (param_4->Translation).ZW.m128d_f64[1] = 0.0;
    bVar9 = true;
  }
  return bVar9;
}

// OnBeginDrag @ 1496b48f0

void __thiscall
UScalableSphereGizmo::OnBeginDrag(UScalableSphereGizmo *this,FInputDeviceRay *param_1)

{
  bool bVar1;
  longlong lVar2;
  float local_res8 [2];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  local_58._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_58._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_a8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  local_40[0]._0_8_ =
       ((param_1->WorldRay).Direction.field0_0x0._s_0.X * __real_412e848000000000 +
       (param_1->WorldRay).Origin.field0_0x0._s_0.X) - local_58._s_0.X;
  local_40[0]._8_8_ =
       ((param_1->WorldRay).Direction.field0_0x0._s_0.Y * __real_412e848000000000 +
       (param_1->WorldRay).Origin.field0_0x0._s_0.Y) - local_58._s_0.Y;
  local_40[0]._16_8_ =
       ((param_1->WorldRay).Direction.field0_0x0._s_0.Z * __real_412e848000000000 +
       (param_1->WorldRay).Origin.field0_0x0._s_0.Z) - local_a8._s_0.Z;
  local_58._s_0.Z = local_a8._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_40[0]._s_0,__real_3e45798ee0000000)
  ;
  if ((this->ActiveTarget).field0_0x0.DebugPtr != (UTransformProxy *)0x0) {
    local_a8._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_a8._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_a8._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    bVar1 = CheckCircleIntersection
                      (this,(TRay<double> *)&local_58._s_0,(TVector<double> *)&local_a8._s_0,
                       (TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70._s_0);
    if (!bVar1) {
      local_a8._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_a8._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_a8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      bVar1 = CheckCircleIntersection
                        (this,(TRay<double> *)&local_58._s_0,(TVector<double> *)&local_a8._s_0,
                         (TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70._s_0);
      if (!bVar1) {
        local_a8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_a8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_a8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        bVar1 = CheckCircleIntersection
                          (this,(TRay<double> *)&local_58._s_0,(TVector<double> *)&local_a8._s_0,
                           (TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70._s_0);
        if (!bVar1) {
          return;
        }
      }
    }
    (this->ActiveAxis).field0_0x0._s_0.X = local_70._s_0.X;
    (this->ActiveAxis).field0_0x0._s_0.Y = local_70._s_0.Y;
    (this->ActiveAxis).field0_0x0._s_0.Z = local_70._s_0.Z;
    local_a8._s_0.X = local_88._s_0.X;
    local_a8._s_0.Y = local_88._s_0.Y;
    local_a8._s_0.Z = local_88._s_0.Z;
    GizmoMath::NearestPointOnLineToRay
              ((TVector<double> *)&local_a8._s_0,&this->ActiveAxis,(TVector<double> *)param_1,
               &(param_1->WorldRay).Direction,(TVector<double> *)&local_88._s_0,
               &this->InteractionStartParameter,(TVector<double> *)&local_70._s_0,local_res8);
    lVar2 = *(longlong *)this;
    (this->DragStartWorldPosition).field0_0x0._s_0.X = local_88._s_0.X;
    (this->DragStartWorldPosition).field0_0x0._s_0.Y = local_88._s_0.Y;
    this->bIsDragging = true;
    (this->DragCurrentPositionProjected).field0_0x0._s_0.X = local_88._s_0.X;
    (this->DragCurrentPositionProjected).field0_0x0._s_0.Y = local_88._s_0.Y;
    (this->DragStartWorldPosition).field0_0x0._s_0.Z = local_88._s_0.Z;
    (this->DragCurrentPositionProjected).field0_0x0._s_0.Z = local_88._s_0.Z;
    lVar2 = (**(code **)(lVar2 + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&this->TransactionDescription);
  }
  return;
}

// OnBeginHover @ 1496b4b70

void __thiscall
UScalableSphereGizmo::OnBeginHover(UScalableSphereGizmo *this,FInputDeviceRay *param_1)

{
  return;
}

// OnEndDrag @ 1496b5c70

void __thiscall UScalableSphereGizmo::OnEndDrag(UScalableSphereGizmo *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this + 0x2d8))();
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  this->bIsDragging = false;
  return;
}

// OnEndHover @ 1496b5ce0

void __thiscall UScalableSphereGizmo::OnEndHover(UScalableSphereGizmo *this)

{
  (this->UpdateRadiusFunc).field_0x14 = 0;
  return;
}

// OnUpdateDrag @ 1496b6190

void __thiscall
UScalableSphereGizmo::OnUpdateDrag(UScalableSphereGizmo *this,FInputDeviceRay *param_1)

{
  float fVar1;
  void *pvVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float local_res8 [2];
  float local_res10 [2];
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  GizmoMath::NearestPointOnLineToRay
            (&this->DragStartWorldPosition,&this->ActiveAxis,(TVector<double> *)param_1,
             &(param_1->WorldRay).Direction,(TVector<double> *)&local_38._s_0,local_res8,&local_20,
             local_res10);
  pvVar2 = *(void **)&this->UpdateRadiusFunc;
  fVar1 = this->InteractionStartParameter;
  this->InteractionStartParameter = local_res8[0];
  local_res8[0] = (local_res8[0] - fVar1) + this->Radius;
  (this->DragCurrentPositionProjected).field0_0x0._s_0.X = local_38._s_0.X;
  (this->DragCurrentPositionProjected).field0_0x0._s_0.Y = local_38._s_0.Y;
  (this->DragCurrentPositionProjected).field0_0x0._s_0.Z = local_38._s_0.Z;
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  this->Radius = local_res8[0];
  if (pvVar2 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar2);
    plVar3 = *(longlong **)&(this->UpdateRadiusFunc).field_0x28;
    pcVar4 = *(code **)&this->UpdateRadiusFunc;
    plVar6 = (longlong *)&(this->UpdateRadiusFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar4)(uVar5,local_res8);
  }
  return;
}

// OnUpdateHover @ 1496b6480

bool __thiscall
UScalableSphereGizmo::OnUpdateHover(UScalableSphereGizmo *this,FInputDeviceRay *param_1)

{
  bool bVar1;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if (*(longlong *)&(this->UpdateRadiusFunc).field_0x18 == 0) {
    (this->UpdateRadiusFunc).field_0x14 = 0;
    return false;
  }
  local_38._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_38._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  local_20._s_0.X =
       ((param_1->WorldRay).Direction.field0_0x0._s_0.X * __real_412e848000000000 +
       (param_1->WorldRay).Origin.field0_0x0._s_0.X) - local_38._s_0.X;
  local_20._s_0.Y =
       ((param_1->WorldRay).Direction.field0_0x0._s_0.Y * __real_412e848000000000 +
       (param_1->WorldRay).Origin.field0_0x0._s_0.Y) - local_38._s_0.Y;
  local_20._s_0.Z =
       ((param_1->WorldRay).Direction.field0_0x0._s_0.Z * __real_412e848000000000 +
       (param_1->WorldRay).Origin.field0_0x0._s_0.Z) - local_88._s_0.Z;
  local_38._s_0.Z = local_88._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_20._s_0,__real_3e45798ee0000000);
  local_88._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  bVar1 = CheckCircleIntersection
                    ((UScalableSphereGizmo *)
                     ((longlong)&this[-1].DragStartWorldPosition.field0_0x0 + 8),
                     (TRay<double> *)&local_38._s_0,(TVector<double> *)&local_88._s_0,
                     (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0);
  if (!bVar1) {
    local_88._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_88._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    bVar1 = CheckCircleIntersection
                      ((UScalableSphereGizmo *)
                       ((longlong)&this[-1].DragStartWorldPosition.field0_0x0 + 8),
                       (TRay<double> *)&local_38._s_0,(TVector<double> *)&local_88._s_0,
                       (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0);
    if (!bVar1) {
      local_88._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_88._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_88._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      bVar1 = CheckCircleIntersection
                        ((UScalableSphereGizmo *)
                         ((longlong)&this[-1].DragStartWorldPosition.field0_0x0 + 8),
                         (TRay<double> *)&local_38._s_0,(TVector<double> *)&local_88._s_0,
                         (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0);
      if (!bVar1) {
        (this->UpdateRadiusFunc).field_0x14 = 0;
        return false;
      }
    }
  }
  (this->UpdateRadiusFunc).field_0x14 = 1;
  (this->TransactionDescription).TextData.Reference = (ITextData *)local_68._s_0.X;
  *(double *)&(this->TransactionDescription).Flags = local_68._s_0.Y;
  (this->ActiveTarget).field0_0x0 = (TObjectPtr<UTransformProxy>_u_0)local_68._s_0.X;
  (this->ActiveAxis).field0_0x0._s_0.X = local_68._s_0.Y;
  *(double *)&this->Radius = local_68._s_0.Z;
  (this->ActiveAxis).field0_0x0._s_0.Y = local_68._s_0.Z;
  *(double *)&(this->UpdateRadiusFunc).field_0x20 = local_50._s_0.X;
  *(double *)&(this->UpdateRadiusFunc).field_0x28 = local_50._s_0.Y;
  *(double *)&this->HitErrorThreshold = local_50._s_0.Z;
  return true;
}

// Render @ 1496bb730

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
UScalableSphereGizmo::Render(UScalableSphereGizmo *this,IToolsContextRenderAPI *param_1)

{
  UTransformProxy *pUVar1;
  code *pcVar2;
  double dVar3;
  FColor FVar4;
  double dVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  TTransform<double> *pTVar9;
  FPrimitiveDrawInterface *pFVar10;
  FColor_u_0 FVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStackY_198 [32];
  double local_158;
  double dStack_150;
  double local_148;
  FLinearColor_u_0 local_140;
  TOptional<double> local_130;
  ISceneViewInterface local_120;
  longlong local_118;
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  dVar5 = __real_403e000000000000;
  FVar4.field0_0x0 = FColor::Yellow.field0_0x0;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) {
    return;
  }
  if (this->bIsHovering == false) {
    uVar13 = 0xff;
    uVar12 = 200;
    uVar14 = 0xff;
    FVar11.Bits = 0xff;
    if (this->bIsDragging == false) goto LAB_1496bb9e0;
  }
  local_158 = (this->DragCurrentPositionProjected).field0_0x0._s_0.X;
  dStack_150 = (this->DragCurrentPositionProjected).field0_0x0._s_0.Y;
  local_148 = (this->DragCurrentPositionProjected).field0_0x0._s_0.Z;
  uVar14 = (uint)FColor::Yellow.field0_0x0 >> 0x18;
  uVar12 = (uint)FColor::Yellow.field0_0x0 >> 0x10;
  uVar13 = (uint)FColor::Yellow.field0_0x0 >> 8;
  local_110._s_0.X = (this->ActiveAxis).field0_0x0._s_0.X * __real_403e000000000000 + local_158;
  local_110._s_0.Y = (this->ActiveAxis).field0_0x0._s_0.Y * __real_403e000000000000 + dStack_150;
  local_110._s_0.Z = (this->ActiveAxis).field0_0x0._s_0.Z * __real_403e000000000000 + local_148;
  lVar7 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if (lVar7 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2511063092146733176>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoRenderingUtil.cpp"
                       ,0x78,"View");
    fVar15 = __real_3f800000;
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_120 = (ISceneViewInterface)&___7FSceneViewWrapper_GizmoRenderingUtil_UE__6B_;
    local_130.TypedValue = __real_3ff0000000000000;
    local_130.bIsSet = true;
    local_118 = lVar7;
    fVar15 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (&local_120,(TVector<double> *)&local_110._s_0,true,&local_130);
  }
  plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
  dVar3 = (double)fVar15;
  local_f8 = dVar3 * (this->ActiveAxis).field0_0x0._s_0.X * dVar5 + local_158;
  local_f0 = dVar3 * (this->ActiveAxis).field0_0x0._s_0.Y * dVar5 + dStack_150;
  local_e8 = dVar3 * (this->ActiveAxis).field0_0x0._s_0.Z * dVar5 + local_148;
  (**(code **)(*plVar8 + 0x30))(plVar8,&local_158,&local_f8,&FLinearColor::Red);
  plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
  local_e0 = local_158 - dVar3 * (this->ActiveAxis).field0_0x0._s_0.X * dVar5;
  local_d8 = dStack_150 - dVar3 * (this->ActiveAxis).field0_0x0._s_0.Y * dVar5;
  local_d0 = local_148 - dVar3 * (this->ActiveAxis).field0_0x0._s_0.Z * dVar5;
  (**(code **)(*plVar8 + 0x30))(plVar8,&local_158,&local_e0,&FLinearColor::Red);
  FVar11 = FVar4.field0_0x0;
LAB_1496bb9e0:
  fVar15 = this->Radius;
  local_140._s_0.R = FLinearColor::sRGBToLinearTable[uVar12 & 0xff];
  local_140._s_0.A = (float)uVar14 * __real_3b808081;
  local_140._s_0.G = FLinearColor::sRGBToLinearTable[uVar13 & 0xff];
  local_140._s_0.B = FLinearColor::sRGBToLinearTable[FVar11.Bits & 0xff];
  pUVar1 = (this->ActiveTarget).field0_0x0.DebugPtr;
  pTVar9 = (TTransform<double> *)(**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,local_c8);
  pFVar10 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
  DrawWireSphereAutoSides
            (pFVar10,pTVar9,(FLinearColor *)&local_140._s_0,(double)fVar15,'\x01',0.0,0.0,false);
  return;
}

// SetRadius @ 1496bf9a0

void __thiscall UScalableSphereGizmo::SetRadius(UScalableSphereGizmo *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_res10 [6];
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->Radius = param_1;
  if (*(void **)&this->UpdateRadiusFunc != (void *)0x0) {
    local_res10[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->UpdateRadiusFunc);
    plVar1 = *(longlong **)&(this->UpdateRadiusFunc).field_0x28;
    pcVar2 = *(code **)&this->UpdateRadiusFunc;
    plVar4 = (longlong *)&(this->UpdateRadiusFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res10);
  }
  return;
}

// SetTarget @ 1496bffe0

void __thiscall UScalableSphereGizmo::SetTarget(UScalableSphereGizmo *this,UTransformProxy *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ActiveTarget).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->ActiveTarget).field0_0x0.DebugPtr = param_1;
  return;
}

// Setup @ 1496c20d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UScalableSphereGizmo::Setup(UScalableSphereGizmo *this)

{
  FText *pFVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UMouseHoverBehavior *pUVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FText local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UInteractiveGizmo::Setup((UInteractiveGizmo *)this);
  this->Radius = 1000.0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"UScalableSphereGizmo",L"ScalableSphereGizmo",L"Scale Sphere Gizmo"
                     );
  FText::operator=(&this->TransactionDescription,pFVar1);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UScalableSphereGizmoInputBehavior::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = this;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  (**(code **)(*(longlong *)pUVar3 + 0x378))(pUVar3,this);
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar3);
  pUVar4 = NewObject<UMouseHoverBehavior>((UObject *)this);
  puVar5 = &this->field_0x38;
  if (this == (UScalableSphereGizmo *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4,puVar5);
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar4);
  return;
}

// StaticRegisterNativesUScalableSphereGizmo @ 1496c2d20

void __cdecl UScalableSphereGizmo::StaticRegisterNativesUScalableSphereGizmo(void)

{
  return;
}

