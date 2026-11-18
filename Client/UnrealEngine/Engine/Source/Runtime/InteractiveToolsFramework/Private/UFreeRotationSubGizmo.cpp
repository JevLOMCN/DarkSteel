// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 23

// StaticClass @ 14962cc10

UClass * __cdecl UFreeRotationSubGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFreeRotationSubGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"FreeRotationSubGizmo",
               &Z_Registration_Info_UClass_UFreeRotationSubGizmo.InnerSingleton,
               StaticRegisterNativesUFreeRotationSubGizmo,0x100,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UFreeRotationSubGizmo>,
               InternalVTableHelperCtorCaller<UFreeRotationSubGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFreeRotationSubGizmo.InnerSingleton;
}

// UFreeRotationSubGizmo @ 14963a1f0

UFreeRotationSubGizmo * __thiscall
UFreeRotationSubGizmo::UFreeRotationSubGizmo(UFreeRotationSubGizmo *this,FVTableHelper *param_1)

{
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  this->bInInteraction = false;
  this->bShowSphereBoundsDuringInteraction = true;
  *(undefined8 *)&this->AxisSource = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->UnscaledSphereRadius = 100.0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->InteractionSphereRadius = 0.0;
  *(undefined8 *)&this->CustomTickFunction = 0;
  *(undefined8 *)&(this->CustomTickFunction).field_0x28 = 0;
  return this;
}

// UFreeRotationSubGizmo @ 14963a2a0

UFreeRotationSubGizmo * __thiscall
UFreeRotationSubGizmo::UFreeRotationSubGizmo(UFreeRotationSubGizmo *this)

{
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  this->bInInteraction = false;
  this->bShowSphereBoundsDuringInteraction = true;
  *(undefined8 *)&this->AxisSource = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->UnscaledSphereRadius = 100.0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->InteractionSphereRadius = 0.0;
  *(undefined8 *)&this->CustomTickFunction = 0;
  *(undefined8 *)&(this->CustomTickFunction).field_0x28 = 0;
  return this;
}

// ~UFreeRotationSubGizmo @ 14963e6d0

void __thiscall UFreeRotationSubGizmo::~UFreeRotationSubGizmo(UFreeRotationSubGizmo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  if (*(longlong *)&this->CustomTickFunction != 0) {
    plVar1 = *(longlong **)&(this->CustomTickFunction).field_0x28;
    plVar2 = (longlong *)&(this->CustomTickFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// operator() @ 149640640

void __thiscall
`UFreeRotationSubGizmo::InitializeAsRotationGizmo'::__l20::<lambda_2>::operator()
          (void *this,float param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TTransform<double> *pTVar5;
  UInteractiveGizmoManager *pUVar6;
  UGizmoConstantFrameAxisSource *pUVar7;
  TVector<double>_u_0 *pTVar8;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  pUVar7 = *(UGizmoConstantFrameAxisSource **)(*(longlong *)this + 0x48);
  if (pUVar7 != (UGizmoConstantFrameAxisSource *)0x0) {
    pUVar3 = UGizmoConstantFrameAxisSource::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14964067e;
  }
  pUVar7 = (UGizmoConstantFrameAxisSource *)0x0;
LAB_14964067e:
  if (pUVar7 != (UGizmoConstantFrameAxisSource *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8));
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
      if (*(longlong *)(pUVar4 + 0xb) == 0) {
        pTVar5 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar5 = (TTransform<double> *)(*(longlong *)(pUVar4 + 0xb) + 0x1f0);
      }
      local_38._0_4_ = *(undefined4 *)(pTVar5->Translation).XY.m128d_f64;
      local_38._4_4_ = *(undefined4 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + 4);
      local_38._8_4_ = *(undefined4 *)((pTVar5->Translation).XY.m128d_f64 + 1);
      local_38._12_4_ = *(undefined4 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + 0xc);
      pTVar8 = &local_38;
      local_38._s_0.Z = (pTVar5->Translation).ZW.m128d_f64[0];
    }
    else {
      pTVar8 = &local_20;
      local_20._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_20._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    pUVar6 = (UInteractiveGizmoManager *)(**(code **)(**(longlong **)this + 0x2d8))();
    UE::GizmoUtil::UpdateCameraAxisSource(pUVar7,pUVar6,(TVector<double> *)&pTVar8->_s_0);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14964b3c0

FInputRayHit * __thiscall
UFreeRotationSubGizmo::BeginHoverSequenceHitTest
          (UFreeRotationSubGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1
          )

{
  double dVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar4[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar4;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar4[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar4[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar2 = puVar4[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar4[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar2 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FWeakObjectPtr *)(puVar4 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar4[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar3;
  }
  return __return_storage_ptr__;
}

// CanBeginClickDragSequence @ 14964d200

FInputRayHit * __thiscall
UFreeRotationSubGizmo::CanBeginClickDragSequence
          (UFreeRotationSubGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1
          )

{
  double dVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     (((this->_padding_ != 0 && (this->_padding_ != 0)) && (*(longlong *)&this->AxisSource != 0))))
  {
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar4[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar4;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar4[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar4[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar2 = puVar4[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar4[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar2 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FWeakObjectPtr *)(puVar4 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar4[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar3;
  }
  return __return_storage_ptr__;
}

// ClickDrag_IncrementalSphereBound @ 14964d520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UFreeRotationSubGizmo::ClickDrag_IncrementalSphereBound
          (UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStackY_1d8 [32];
  bool local_1a8 [8];
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined1 local_108 [16];
  undefined1 local_f8 [80];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->InteractionSphereRadius == 0.0) {
    return false;
  }
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  if (*(longlong *)&this->AxisSource != 0) {
    plVar10 = *(longlong **)&(this->AxisSource).field_0x8;
  }
  (**(code **)(*plVar10 + 0x10))(0,&local_1a0);
  local_1a8[0] = false;
  GizmoMath::RaySphereIntersection
            ((TVector<double> *)&local_1a0._s_0,(float)this->InteractionSphereRadius,
             (TVector<double> *)param_1,&(param_1->WorldRay).Direction,local_1a8,
             (TVector<double> *)&local_188._s_0);
  if (local_1a8[0] == false) {
    plVar10 = plVar11;
    if (*(longlong *)&this->AxisSource != 0) {
      plVar10 = *(longlong **)&(this->AxisSource).field_0x8;
    }
    pTVar8 = (TVector<double> *)(**(code **)(*plVar10 + 0x18))(plVar10,local_138);
    plVar10 = plVar11;
    if (*(longlong *)&this->AxisSource != 0) {
      plVar10 = *(longlong **)&(this->AxisSource).field_0x8;
    }
    pTVar9 = (TVector<double> *)(**(code **)(*plVar10 + 0x10))(plVar10,local_120);
    GizmoMath::RayPlaneIntersectionPoint
              (pTVar9,pTVar8,(TVector<double> *)param_1,&(param_1->WorldRay).Direction,local_1a8,
               (TVector<double> *)&local_158._s_0);
    if (local_1a8[0] == false) {
      return false;
    }
    local_170._s_0.X = local_1a0._s_0.X - local_158._s_0.X;
    local_170._s_0.Y = local_1a0._s_0.Y - local_158._s_0.Y;
    local_170._s_0.Z = local_1a0._s_0.Z - local_158._s_0.Z;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_170._s_0,__real_3e45798ee0000000)
    ;
    GizmoMath::RaySphereIntersection
              ((TVector<double> *)&local_1a0._s_0,(float)this->InteractionSphereRadius,
               (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_170._s_0,local_1a8,
               (TVector<double> *)&local_188._s_0);
    if (local_1a8[0] == false) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4655216972261228368>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\FreeRotationSubGizmo.cpp"
                         ,0xb0,"bIntersects");
      if (!bVar6) {
        return false;
      }
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
  }
  dVar15 = __real_3ff0000000000000 / this->InteractionSphereRadius;
  dVar2 = (local_188._s_0.Y - local_1a0._s_0.Y) * dVar15;
  dVar17 = (local_188._s_0.Z - local_1a0._s_0.Z) * dVar15;
  dVar12 = ((this->LastSphereIntersectionPoint).field0_0x0._s_0.Y - local_1a0._s_0.Y) * dVar15;
  dVar14 = ((this->LastSphereIntersectionPoint).field0_0x0._s_0.Z - local_1a0._s_0.Z) * dVar15;
  dVar16 = (local_188._s_0.X - local_1a0._s_0.X) * dVar15;
  dVar15 = ((this->LastSphereIntersectionPoint).field0_0x0._s_0.X - local_1a0._s_0.X) * dVar15;
  dVar5 = dVar17 * dVar12 - dVar2 * dVar14;
  dVar4 = dVar16 * dVar14 - dVar17 * dVar15;
  dVar3 = dVar2 * dVar15 - dVar16 * dVar12;
  dVar13 = dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3;
  if (dVar13 <= __real_3e45798ee0000000) {
    return false;
  }
  dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
  dVar17 = dVar16 * dVar15 + dVar2 * dVar12 + dVar17 * dVar14;
  dVar2 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar17) && (dVar2 = dVar17, __real_3ff0000000000000 <= dVar17)) {
    dVar2 = __real_3ff0000000000000;
  }
  dVar2 = acos(dVar2);
  plVar10 = plVar11;
  if (*(longlong *)&this->TransformSource != 0) {
    plVar10 = *(longlong **)&(this->TransformSource).field_0x8;
  }
  (**(code **)(*plVar10 + 0x10))(SUB84(dVar2,0),local_108);
  __libm_sse2_sincos_();
  dVar14 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar4 * dVar13;
  dVar4 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar3 * dVar13;
  dVar2 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  dVar13 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar5 * dVar13;
  dVar3 = dVar13 * (double)local_108._8_8_;
  dVar17 = dVar4 * (double)local_f8._8_8_;
  dVar12 = dVar14 * (double)local_108._0_8_;
  dVar15 = dVar4 * (double)local_108._8_8_;
  dVar5 = (double)local_f8._0_8_ * dVar13 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar2 * (double)local_108._8_8_ +
          dVar14 * (double)local_f8._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar4 * (double)local_108._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = dVar13 * (double)local_108._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar2 * (double)local_f8._8_8_ +
          dVar14 * (double)local_108._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar4 * (double)local_f8._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ =
       (double)local_f8._8_8_ * dVar13 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar2 * (double)local_108._0_8_ +
       dVar14 * (double)local_f8._0_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_f8._8_4_ = SUB84(dVar4,0);
  local_f8._0_8_ =
       dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar2 * (double)local_f8._0_8_ +
       dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  if (*(longlong *)&this->TransformSource != 0) {
    plVar11 = *(longlong **)&(this->TransformSource).field_0x8;
  }
  (**(code **)(*plVar11 + 0x18))(plVar11,local_108);
  (this->LastSphereIntersectionPoint).field0_0x0._s_0.X = local_188._s_0.X;
  (this->LastSphereIntersectionPoint).field0_0x0._s_0.Y = local_188._s_0.Y;
  (this->LastSphereIntersectionPoint).field0_0x0._s_0.Z = local_188._s_0.Z;
  return true;
}

// ClickPress_IncrementalSphereBound @ 14964d9f0

bool __thiscall
UFreeRotationSubGizmo::ClickPress_IncrementalSphereBound
          (UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
  UGizmoViewContext *pUVar1;
  double dVar2;
  TVector<double> *pTVar3;
  ISceneViewInterface *pIVar4;
  ISceneViewInterface *pIVar5;
  float fVar6;
  bool local_res8 [8];
  TOptional<double> local_48;
  TVector<double> local_30;
  
  if (this->UnscaledSphereRadius != 0.0) {
    pIVar5 = (ISceneViewInterface *)0x0;
    pIVar4 = pIVar5;
    if (*(longlong *)&this->AxisSource != 0) {
      pIVar4 = *(ISceneViewInterface **)&(this->AxisSource).field_0x8;
    }
    (**(code **)((longlong)*pIVar4 + 0x10))(0,&local_30);
    pUVar1 = (this->GizmoViewContext).field0_0x0.DebugPtr;
    local_48.bIsSet = false;
    pIVar4 = (ISceneViewInterface *)&pUVar1->field_0x28;
    if (pUVar1 == (UGizmoViewContext *)0x0) {
      pIVar4 = pIVar5;
    }
    fVar6 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                      (pIVar4,&local_30,false,&local_48);
    dVar2 = (double)fVar6 * this->UnscaledSphereRadius;
    this->InteractionSphereRadius = dVar2;
    if (*(longlong *)&this->AxisSource != 0) {
      pIVar5 = *(ISceneViewInterface **)&(this->AxisSource).field_0x8;
    }
    pTVar3 = (TVector<double> *)(**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,&local_48);
    GizmoMath::RaySphereIntersection
              (pTVar3,(float)dVar2,(TVector<double> *)param_1,&(param_1->WorldRay).Direction,
               local_res8,&this->LastSphereIntersectionPoint);
    return local_res8[0];
  }
  return false;
}

// GetPrivateStaticClass @ 149656010

UClass * __cdecl UFreeRotationSubGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFreeRotationSubGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"FreeRotationSubGizmo",
               &Z_Registration_Info_UClass_UFreeRotationSubGizmo.InnerSingleton,
               StaticRegisterNativesUFreeRotationSubGizmo,0x100,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UFreeRotationSubGizmo>,
               InternalVTableHelperCtorCaller<UFreeRotationSubGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFreeRotationSubGizmo.InnerSingleton;
}

// InitializeAsRotationGizmo @ 1496596d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UFreeRotationSubGizmo::InitializeAsRotationGizmo
          (UFreeRotationSubGizmo *this,FTransformSubGizmoCommonParams *param_1,
          UGizmoViewContext *param_2,FTransformSubGizmoSharedState *param_3)

{
  undefined8 uVar1;
  UTransformProxy *pUVar2;
  UGizmoScaledAndUnscaledTransformSources *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  UGizmoConstantFrameAxisSource *pUVar6;
  IToolContextTransactionProvider *pIVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  UGizmoScaledAndUnscaledTransformSources *local_b0;
  FWeakObjectPtr local_a8;
  UObject *local_a0;
  undefined1 local_98 [16];
  IToolContextTransactionProvider local_88;
  TOptional<FText>_u_0 TStack_80;
  IToolContextTransactionProvider *pIStack_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_1->Component == (UPrimitiveComponent *)0x0) ||
     (param_1->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  if ((param_1->Axis == None) ||
     (bVar4 = `UFreeRotationSubGizmo::InitializeAsRotationGizmo'::__l6::<lambda_1>::operator()
                        (local_b8), bVar4)) {
    bVar4 = UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>
                      (this,param_1,param_3,&local_b0);
    if (!bVar4) {
      return false;
    }
  }
  else {
    UE::GizmoUtil::FTransformSubGizmoCommonParams::FTransformSubGizmoCommonParams
              ((FTransformSubGizmoCommonParams *)local_98,param_1);
    local_88 = (IToolContextTransactionProvider)((ulonglong)local_88 & 0xffffffff00000000);
    bVar4 = UE::GizmoUtil::SetCommonSubGizmoProperties<UFreeRotationSubGizmo>
                      (this,(FTransformSubGizmoCommonParams *)local_98,param_3,&local_b0);
    if (!bVar4) {
      if (TStack_80.TypedValue.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*(ITextData *)TStack_80.TypedValue.TextData.Reference + 0x10))();
      return false;
    }
    if (TStack_80.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)TStack_80.TypedValue.TextData.Reference + 0x10))();
    }
  }
  pUVar3 = local_b0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1496597d5:
    plVar8 = &local_b0->_padding_;
    if (local_b0 != (UGizmoScaledAndUnscaledTransformSources *)0x0) goto LAB_1496597e1;
  }
  else if (local_b0 != (UGizmoScaledAndUnscaledTransformSources *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
    goto LAB_1496597d5;
  }
  plVar8 = (longlong *)0x0;
LAB_1496597e1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UGizmoScaledAndUnscaledTransformSources *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(UGizmoScaledAndUnscaledTransformSources **)&this->TransformSource = pUVar3;
  *(longlong **)&(this->TransformSource).field_0x8 = plVar8;
  if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
     (pUVar6 = param_3->CameraAxisSource, pUVar6 == (UGizmoConstantFrameAxisSource *)0x0)) {
    pUVar5 = (UPackage *)param_1->OuterForSubobjects;
    if (pUVar5 == (UPackage *)0x0) {
      pUVar5 = GetTransientPackage();
    }
    pUVar6 = NewObject<UGizmoConstantFrameAxisSource>((UObject *)pUVar5);
    local_a0 = *(UObject **)&param_1->Component->field_0xa8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a0);
    }
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a0);
    }
    FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_a0);
    local_98._0_8_ = *(undefined8 *)&this->CustomTickFunction;
    pUVar2 = *(UTransformProxy **)&(this->CustomTickFunction).field_0x8;
    local_88 = *(IToolContextTransactionProvider *)&(this->CustomTickFunction).field_0x10;
    TStack_80.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)*(undefined8 *)&(this->CustomTickFunction).field_0x18;
    uVar1 = *(undefined8 *)&(this->CustomTickFunction).field_0x20;
    pIStack_70 = *(IToolContextTransactionProvider **)&(this->CustomTickFunction).field_0x28;
    *(code **)&this->CustomTickFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UFreeRotationSubGizmo::InitializeAsRotationGizmo'::__l20::<lambda_2>,void,float>
         ::Call;
    *(undefined8 *)&(this->CustomTickFunction).field_0x8 = local_98._8_8_;
    TStack_80.TypedValue.Flags = local_a8.ObjectIndex;
    TStack_80._12_4_ = local_a8.ObjectSerialNumber;
    *(undefined4 *)&(this->CustomTickFunction).field_0x10 = 0x51e77b18;
    *(undefined4 *)&(this->CustomTickFunction).field_0x14 = 1;
    *(UFreeRotationSubGizmo **)&(this->CustomTickFunction).field_0x18 = this;
    *(uint *)&(this->CustomTickFunction).field_0x20 = TStack_80.TypedValue.Flags;
    *(undefined4 *)&(this->CustomTickFunction).field_0x24 = TStack_80._12_4_;
    *(undefined4 *)&(this->CustomTickFunction).field_0x28 = 0;
    *(undefined4 *)&(this->CustomTickFunction).field_0x2c = 0;
    TStack_80._8_8_ = uVar1;
    local_98._8_8_ = pUVar2;
    if ((UPrimitiveComponent *)local_98._0_8_ != (UPrimitiveComponent *)0x0) {
      pIVar7 = &local_88;
      if (pIStack_70 != (IToolContextTransactionProvider *)0x0) {
        pIVar7 = pIStack_70;
      }
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
      param_3->CameraAxisSource = pUVar6;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoConstantFrameAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  plVar8 = &pUVar6->_padding_;
  if (pUVar6 == (UGizmoConstantFrameAxisSource *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoConstantFrameAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UGizmoConstantFrameAxisSource **)&this->AxisSource = pUVar6;
  *(longlong **)&(this->AxisSource).field_0x8 = plVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->GizmoViewContext).field0_0x0.DebugPtr = param_2;
  return true;
}

// OnBeginHover @ 14965cdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UFreeRotationSubGizmo::OnBeginHover(UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014965ce00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014965ce0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return;
}

// OnClickDrag @ 14965d310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFreeRotationSubGizmo::OnClickDrag(UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStackY_1d8 [32];
  bool abStack_1a8 [8];
  TVector<double>_u_0 TStack_1a0;
  TVector<double>_u_0 TStack_188;
  TVector<double>_u_0 TStack_170;
  TVector<double>_u_0 TStack_158;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [80];
  ulonglong uStack_a8;
  
  if ((this->HitTarget).field_0x8 == '\0') {
    return;
  }
  uStack_a8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (*(double *)&(this->TransformSource).field_0x8 != 0.0) {
    plVar10 = (longlong *)0x0;
    plVar9 = plVar10;
    if (this->_padding_ != 0) {
      plVar9 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar9 + 0x10))(0,&TStack_1a0);
    abStack_1a8[0] = false;
    GizmoMath::RaySphereIntersection
              ((TVector<double> *)&TStack_1a0._s_0,
               (float)*(double *)&(this->TransformSource).field_0x8,(TVector<double> *)param_1,
               &(param_1->WorldRay).Direction,abStack_1a8,(TVector<double> *)&TStack_188._s_0);
    if (abStack_1a8[0] == false) {
      plVar9 = plVar10;
      if (this->_padding_ != 0) {
        plVar9 = (longlong *)this->_padding_;
      }
      pTVar7 = (TVector<double> *)(**(code **)(*plVar9 + 0x18))(plVar9,auStack_138);
      plVar9 = plVar10;
      if (this->_padding_ != 0) {
        plVar9 = (longlong *)this->_padding_;
      }
      pTVar8 = (TVector<double> *)(**(code **)(*plVar9 + 0x10))(plVar9,auStack_120);
      GizmoMath::RayPlaneIntersectionPoint
                (pTVar8,pTVar7,(TVector<double> *)param_1,&(param_1->WorldRay).Direction,abStack_1a8
                 ,(TVector<double> *)&TStack_158._s_0);
      if (abStack_1a8[0] == false) {
        return;
      }
      TStack_170._s_0.X = TStack_1a0._s_0.X - TStack_158._s_0.X;
      TStack_170._s_0.Y = TStack_1a0._s_0.Y - TStack_158._s_0.Y;
      TStack_170._s_0.Z = TStack_1a0._s_0.Z - TStack_158._s_0.Z;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&TStack_170._s_0,__real_3e45798ee0000000);
      GizmoMath::RaySphereIntersection
                ((TVector<double> *)&TStack_1a0._s_0,
                 (float)*(double *)&(this->TransformSource).field_0x8,
                 (TVector<double> *)&TStack_158._s_0,(TVector<double> *)&TStack_170._s_0,abStack_1a8
                 ,(TVector<double> *)&TStack_188._s_0);
      if (abStack_1a8[0] == false) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4655216972261228368>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\FreeRotationSubGizmo.cpp"
                           ,0xb0,"bIntersects");
        if (!bVar6) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    dVar14 = __real_3ff0000000000000 / *(double *)&(this->TransformSource).field_0x8;
    dVar2 = (TStack_188._s_0.Y - TStack_1a0._s_0.Y) * dVar14;
    dVar16 = (TStack_188._s_0.Z - TStack_1a0._s_0.Z) * dVar14;
    dVar11 = (*(double *)&(this->StateTarget).field_0x8 - TStack_1a0._s_0.Y) * dVar14;
    dVar13 = (*(double *)&this->TransformSource - TStack_1a0._s_0.Z) * dVar14;
    dVar15 = (TStack_188._s_0.X - TStack_1a0._s_0.X) * dVar14;
    dVar14 = (*(double *)&this->StateTarget - TStack_1a0._s_0.X) * dVar14;
    dVar5 = dVar16 * dVar11 - dVar2 * dVar13;
    dVar4 = dVar15 * dVar13 - dVar16 * dVar14;
    dVar3 = dVar2 * dVar14 - dVar15 * dVar11;
    dVar12 = dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3;
    if (__real_3e45798ee0000000 < dVar12) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      dVar16 = dVar15 * dVar14 + dVar2 * dVar11 + dVar16 * dVar13;
      dVar2 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar16) && (dVar2 = dVar16, __real_3ff0000000000000 <= dVar16)
         ) {
        dVar2 = __real_3ff0000000000000;
      }
      dVar2 = acos(dVar2);
      plVar9 = plVar10;
      if (this->_padding_ != 0) {
        plVar9 = *(longlong **)&this->AxisSource;
      }
      (**(code **)(*plVar9 + 0x10))(SUB84(dVar2,0),auStack_108);
      __libm_sse2_sincos_();
      dVar13 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar4 * dVar12;
      dVar4 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar3 * dVar12;
      dVar2 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      dVar12 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar5 * dVar12;
      dVar3 = dVar12 * (double)auStack_108._8_8_;
      dVar16 = dVar4 * (double)auStack_f8._8_8_;
      dVar11 = dVar13 * (double)auStack_108._0_8_;
      dVar14 = dVar4 * (double)auStack_108._8_8_;
      dVar5 = (double)auStack_f8._0_8_ * dVar12 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar2 * (double)auStack_108._8_8_ +
              dVar13 * (double)auStack_f8._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar4 * (double)auStack_108._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar4 = dVar12 * (double)auStack_108._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar2 * (double)auStack_f8._8_8_ +
              dVar13 * (double)auStack_108._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar4 * (double)auStack_f8._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auStack_108._8_4_ = SUB84(dVar5,0);
      auStack_108._0_8_ =
           (double)auStack_f8._8_8_ * dVar12 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar2 * (double)auStack_108._0_8_ +
           dVar13 * (double)auStack_f8._0_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auStack_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auStack_f8._8_4_ = SUB84(dVar4,0);
      auStack_f8._0_8_ =
           dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar2 * (double)auStack_f8._0_8_ +
           dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      auStack_f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      if (this->_padding_ != 0) {
        plVar10 = *(longlong **)&this->AxisSource;
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,auStack_108);
      *(double *)&this->StateTarget = TStack_188._s_0.X;
      *(double *)&(this->StateTarget).field_0x8 = TStack_188._s_0.Y;
      *(double *)&this->TransformSource = TStack_188._s_0.Z;
    }
    return;
  }
  return;
}

// OnClickPress @ 14965da30

void __thiscall
UFreeRotationSubGizmo::OnClickPress(UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  ISceneViewInterface *pIVar6;
  ISceneViewInterface *pIVar7;
  float fVar8;
  bool local_res8 [8];
  TOptional<double> local_58;
  TVector<double> local_48 [2];
  
  if ((double)(this->GizmoViewContext).field0_0x0 == 0.0) {
    (this->HitTarget).field_0x8 = 0;
    return;
  }
  pIVar7 = (ISceneViewInterface *)0x0;
  pIVar6 = pIVar7;
  if (this->_padding_ != 0) {
    pIVar6 = (ISceneViewInterface *)this->_padding_;
  }
  (**(code **)((longlong)*pIVar6 + 0x10))(0,local_48);
  lVar1 = *(longlong *)&(this->AxisSource).field_0x8;
  local_58.bIsSet = false;
  pIVar6 = (ISceneViewInterface *)(lVar1 + 0x28);
  if (lVar1 == 0) {
    pIVar6 = pIVar7;
  }
  fVar8 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale(pIVar6,local_48,false,&local_58);
  dVar3 = (double)fVar8 * (double)(this->GizmoViewContext).field0_0x0;
  *(double *)&(this->TransformSource).field_0x8 = dVar3;
  if (this->_padding_ != 0) {
    pIVar7 = (ISceneViewInterface *)this->_padding_;
  }
  pTVar5 = (TVector<double> *)(**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  GizmoMath::RaySphereIntersection
            (pTVar5,(float)dVar3,(TVector<double> *)param_1,&(param_1->WorldRay).Direction,
             local_res8,(TVector<double> *)&this->StateTarget);
  (this->HitTarget).field_0x8 = local_res8[0];
  if (local_res8[0] != false) {
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    }
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014965db69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x20))
                ((longlong *)this->_padding_,(this->HitTarget).field_0x8);
      return;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4655216972261228293>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\FreeRotationSubGizmo.cpp"
                       ,0xfb,"HitTarget");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnClickRelease @ 14965de10

void __thiscall
UFreeRotationSubGizmo::OnClickRelease(UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014965de13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// OnEndHover @ 14965e2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UFreeRotationSubGizmo::OnEndHover(UFreeRotationSubGizmo *this)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014965e300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014965e30b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,0);
  return;
}

// OnTerminateDragSequence @ 14965e5d0

void __thiscall UFreeRotationSubGizmo::OnTerminateDragSequence(UFreeRotationSubGizmo *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->HitTarget).field_0x8 != '\0') {
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x18))();
    }
    (this->HitTarget).field_0x8 = 0;
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014965e617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4655216972261228259>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\FreeRotationSubGizmo.cpp"
                       ,0x11d,"HitTarget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdateHover @ 14965e740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UFreeRotationSubGizmo::OnUpdateHover(UFreeRotationSubGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return true;
  }
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return true;
}

// Render @ 14965f6f0

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
UFreeRotationSubGizmo::Render(UFreeRotationSubGizmo *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  FSceneView *pFVar2;
  FViewCameraState *pFVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_228 [32];
  FLinearColor *local_208;
  float local_200;
  undefined1 local_1f8;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined1 local_1b8 [96];
  FToolDataVisualizer local_158;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  if ((this->bShowSphereBoundsDuringInteraction != false) && (this->bInInteraction != false)) {
    if (*(longlong *)&this->AxisSource == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->AxisSource).field_0x8;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_1e8);
    pFVar2 = (FSceneView *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    fVar5 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                      (pFVar2,(TVector<double> *)&local_1e8._s_0,__real_3ff0000000000000);
    dVar1 = this->UnscaledSphereRadius;
    FToolDataVisualizer::FToolDataVisualizer(&local_158);
    pFVar3 = (FViewCameraState *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_1b8);
    FToolDataVisualizer::BeginFrame(&local_158,param_1,pFVar3);
    local_1d0 = local_1e8._s_0.X;
    dStack_1c8 = local_1e8._s_0.Y;
    local_1f8 = 0;
    local_200 = FreeRotationSubGizmoLocals::CircleThickness;
    local_208 = &FreeRotationSubGizmoLocals::CircleColor;
    local_1c0 = local_1e8._s_0.Z;
    (**(code **)(local_158._padding_ + 0x28))
              (&local_158,&local_1d0,(float)((double)fVar5 * dVar1),
               FreeRotationSubGizmoLocals::CircleNumSections);
    FToolDataVisualizer::EndFrame(&local_158);
    FToolDataVisualizer::~FToolDataVisualizer(&local_158);
  }
  return;
}

// Setup @ 149664690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UFreeRotationSubGizmo::Setup(UFreeRotationSubGizmo *this)

{
  UObject *pUVar1;
  UClickDragInputBehavior *pUVar2;
  UMouseHoverBehavior *pUVar3;
  UGizmoConstantAxisSource *pUVar4;
  UGizmoComponentHitTarget *pUVar5;
  UGizmoNilStateTarget *pUVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 local_res8 [2];
  
  UInteractiveGizmo::Setup((UInteractiveGizmo *)this);
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UClickDragInputBehavior>(pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UClickDragInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  plVar8 = (longlong *)0x0;
  (this->MouseBehavior).field0_0x0.DebugPtr = pUVar2;
  plVar7 = &this->_padding_;
  if (this == (UFreeRotationSubGizmo *)0x0) {
    plVar7 = plVar8;
  }
  (**(code **)(*(longlong *)pUVar2 + 0x378))(pUVar2,plVar7);
  pUVar2 = (this->MouseBehavior).field0_0x0.DebugPtr;
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,local_res8);
  (**(code **)(this->_padding_ + 0x2e0))(this,(this->MouseBehavior).field0_0x0.DebugPtr);
  pUVar1 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UMouseHoverBehavior>(pUVar1);
  plVar7 = &this->_padding_;
  if (this == (UFreeRotationSubGizmo *)0x0) {
    plVar7 = plVar8;
  }
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,plVar7);
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,local_res8);
  (**(code **)(this->_padding_ + 0x2e0))(this,pUVar3);
  pUVar4 = NewObject<UGizmoConstantAxisSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGizmoConstantAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  plVar7 = &pUVar4->_padding_;
  if (pUVar4 == (UGizmoConstantAxisSource *)0x0) {
    plVar7 = plVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGizmoConstantAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UGizmoConstantAxisSource **)&this->AxisSource = pUVar4;
  *(longlong **)&(this->AxisSource).field_0x8 = plVar7;
  pUVar5 = NewObject<UGizmoComponentHitTarget>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  plVar7 = &pUVar5->_padding_;
  if (pUVar5 == (UGizmoComponentHitTarget *)0x0) {
    plVar7 = plVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(UGizmoComponentHitTarget **)&this->HitTarget = pUVar5;
  *(longlong **)&(this->HitTarget).field_0x8 = plVar7;
  pUVar6 = NewObject<UGizmoNilStateTarget>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoNilStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  plVar7 = (longlong *)&pUVar6->field_0x28;
  if (pUVar6 == (UGizmoNilStateTarget *)0x0) {
    plVar7 = plVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoNilStateTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UGizmoNilStateTarget **)&this->StateTarget = pUVar6;
  *(longlong **)&(this->StateTarget).field_0x8 = plVar7;
  this->bInInteraction = false;
  return;
}

// StaticRegisterNativesUFreeRotationSubGizmo @ 149664a60

void __cdecl UFreeRotationSubGizmo::StaticRegisterNativesUFreeRotationSubGizmo(void)

{
  return;
}

// Tick @ 149665090

void __thiscall UFreeRotationSubGizmo::Tick(UFreeRotationSubGizmo *this,float param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_res8 [2];
  
  if (*(void **)&this->CustomTickFunction != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CustomTickFunction);
    pcVar1 = *(code **)&this->CustomTickFunction;
    plVar2 = *(longlong **)&(this->CustomTickFunction).field_0x28;
    plVar4 = (longlong *)&(this->CustomTickFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,local_res8);
  }
  return;
}

// operator() @ 150543cd0

bool __thiscall
`UFreeRotationSubGizmo::InitializeAsRotationGizmo'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4655216972261228477>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4655216972261228477>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

