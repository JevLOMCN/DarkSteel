// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 24

// StaticClass @ 149664930

UClass * __cdecl UPlanePositionGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PlanePositionGizmo",
               &Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton,
               StaticRegisterNativesUPlanePositionGizmo,0x280,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlanePositionGizmo>,
               InternalVTableHelperCtorCaller<UPlanePositionGizmo>,aFStackX_8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 1496734e0

bool __cdecl UPlanePositionGizmo::<lambda_49_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 1496734f0

bool __cdecl
UPlanePositionGizmo::<lambda_50_>::<lambda_invoker_cdecl>
          (FCustomDestinationParams *param_1,TVector<double> *param_2)

{
  return false;
}

// UPlanePositionGizmo @ 149687a60

UPlanePositionGizmo * __thiscall
UPlanePositionGizmo::UPlanePositionGizmo(UPlanePositionGizmo *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->AxisSource = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->ParameterSource = 0;
  *(undefined8 *)&(this->ParameterSource).field_0x8 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->bEnableSignedAxis = false;
  this->bFlipX = false;
  this->bFlipY = false;
  *(undefined8 *)&this->ShouldUseCustomDestinationFunc = 0;
  *(undefined8 *)&(this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldUseCustomDestinationFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldUseCustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_49_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldUseCustomDestinationFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->CustomDestinationFunc = 0;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->CustomDestinationFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UPlanePositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_50_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CustomDestinationFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  uVar2 = __real_3ff0000000000000;
  this->bInInteraction = false;
  (this->ParameterSigns).field0_0x0._s_0.X = 1.0;
  (this->ParameterSigns).field0_0x0._s_0.Y = 1.0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastInputRay).bHas2D = false;
  (this->LastInputRay).WorldRay.Origin.field0_0x0._s_0.X = (double)uVar3;
  (this->LastInputRay).WorldRay.Origin.field0_0x0._s_0.Y = (double)uVar4;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Origin.field0_0x0 + 0x10) = uVar5;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Origin.field0_0x0 + 0x14) = uVar6;
  *(undefined4 *)&(this->LastInputRay).WorldRay.Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 0xc) = 0;
  *(int *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 0x10) = (int)uVar2;
  *(int *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar2 >> 0x20);
  (this->LastInputRay).ScreenPosition.field0_0x0._s_0.X = 0.0;
  (this->LastInputRay).ScreenPosition.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&this->CustomTickFunction = 0;
  *(undefined8 *)&(this->CustomTickFunction).field_0x28 = 0;
  return this;
}

// UPlanePositionGizmo @ 149687bf0

UPlanePositionGizmo * __thiscall UPlanePositionGizmo::UPlanePositionGizmo(UPlanePositionGizmo *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->AxisSource = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->ParameterSource = 0;
  *(undefined8 *)&(this->ParameterSource).field_0x8 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  *(undefined8 *)&this->StateTarget = 0;
  *(undefined8 *)&(this->StateTarget).field_0x8 = 0;
  (this->MouseBehavior).field0_0x0.DebugPtr = (UClickDragInputBehavior *)0x0;
  this->bEnableSignedAxis = false;
  this->bFlipX = false;
  this->bFlipY = false;
  *(undefined8 *)&this->ShouldUseCustomDestinationFunc = 0;
  *(undefined8 *)&(this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldUseCustomDestinationFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldUseCustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_49_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldUseCustomDestinationFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->CustomDestinationFunc = 0;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = 0;
  *(undefined ***)&(this->CustomDestinationFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFCustomDestinationParams_UPlanePositionGizmo__AEAU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CustomDestinationFunc).field_0x18;
  *(code **)puVar1 = <lambda_50_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CustomDestinationFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&),bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  uVar2 = __real_3ff0000000000000;
  this->bInInteraction = false;
  (this->ParameterSigns).field0_0x0._s_0.X = 1.0;
  (this->ParameterSigns).field0_0x0._s_0.Y = 1.0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastInputRay).bHas2D = false;
  (this->LastInputRay).WorldRay.Origin.field0_0x0._s_0.X = (double)uVar3;
  (this->LastInputRay).WorldRay.Origin.field0_0x0._s_0.Y = (double)uVar4;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Origin.field0_0x0 + 0x10) = uVar5;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Origin.field0_0x0 + 0x14) = uVar6;
  *(undefined4 *)&(this->LastInputRay).WorldRay.Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 0xc) = 0;
  *(int *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 0x10) = (int)uVar2;
  *(int *)((longlong)&(this->LastInputRay).WorldRay.Direction.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar2 >> 0x20);
  (this->LastInputRay).ScreenPosition.field0_0x0._s_0.X = 0.0;
  (this->LastInputRay).ScreenPosition.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&this->CustomTickFunction = 0;
  *(undefined8 *)&(this->CustomTickFunction).field_0x28 = 0;
  return this;
}

// ~UPlanePositionGizmo @ 14968a760

void __thiscall UPlanePositionGizmo::~UPlanePositionGizmo(UPlanePositionGizmo *this)

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
  if (*(longlong *)&this->CustomDestinationFunc != 0) {
    plVar1 = *(longlong **)&(this->CustomDestinationFunc).field_0x28;
    plVar2 = (longlong *)&(this->CustomDestinationFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ShouldUseCustomDestinationFunc != 0) {
    plVar1 = *(longlong **)&(this->ShouldUseCustomDestinationFunc).field_0x28;
    plVar2 = (longlong *)&(this->ShouldUseCustomDestinationFunc).field_0x10;
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

// operator() @ 14968bae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>::operator()
          (void *this,float param_1)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TTransform<double> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  TQuat<double> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  double local_38;
  
  lVar11 = *(longlong *)(*(longlong *)this + 0x48);
  if (lVar11 != 0) {
    pUVar6 = Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14968bb2b;
  }
  lVar11 = 0;
LAB_14968bb2b:
  if (lVar11 != 0) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8));
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
      if (*(longlong *)(pUVar7 + 0xb) == 0) {
        pTVar8 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar8 = (TTransform<double> *)(*(longlong *)(pUVar7 + 0xb) + 0x1f0);
      }
      local_c8._s_0.X = (pTVar8->Translation).XY.m128d_f64[0];
      local_c8._s_0.Y = (pTVar8->Translation).XY.m128d_f64[1];
      local_c8._s_0.Z = (pTVar8->Translation).ZW.m128d_f64[0];
    }
    else {
      local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    plVar9 = (longlong *)(**(code **)(**(longlong **)this + 0x2d8))();
    if ((plVar9 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*plVar9 + 0x328))(plVar9), dVar3 = __real_3ff0000000000000,
       lVar10 != 0)) {
      local_38 = __real_3ff0000000000000;
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_68.X = 0.0;
      local_68.Y = 0.0;
      local_68.Z = ___xmm_3ff00000000000000000000000000000;
      local_68.W = _UNK_15061cbc8;
      local_48 = 0x42b40000;
      local_44 = 0x42c80000;
      local_40 = 0x3f800000;
      local_3c = 0;
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x328))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_88);
      uVar4 = local_c8._s_0.Z;
      *(double *)(lVar11 + 0x30) = local_c8._s_0.X;
      *(double *)(lVar11 + 0x38) = local_c8._s_0.Y;
      local_a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_a8._s_0.Y = _UNK_150689518;
      local_c8._s_0.Z = 0.0;
      *(undefined8 *)(lVar11 + 0x40) = uVar4;
      local_a8._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&local_68,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
      local_a8._s_0.Y = _UNK_15061cbc8;
      local_a8._s_0.X = ___xmm_3ff00000000000000000000000000000;
      uVar12 = (uint)__xmm_80000000000000008000000000000000;
      uVar14 = SUB84(local_c8._s_0.Z,0);
      uVar2 = (ulonglong)local_c8._16_8_ >> 0x20;
      uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_c8._s_0.Z = 0.0;
      *(uint *)(lVar11 + 0x48) = SUB84(local_c8._s_0.X,0) ^ uVar12;
      *(uint *)(lVar11 + 0x4c) = (uint)((ulonglong)local_c8._0_8_ >> 0x20) ^ uVar13;
      *(uint *)(lVar11 + 0x50) = SUB84(local_c8._s_0.Y,0) ^ uVar12;
      *(uint *)(lVar11 + 0x54) = (uint)((ulonglong)local_c8._8_8_ >> 0x20) ^ uVar13;
      *(ulonglong *)(lVar11 + 0x58) = CONCAT44((uint)uVar2 ^ uVar13,uVar14 ^ uVar12);
      local_a8._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&local_68,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
      uVar4 = local_c8._s_0.Z;
      *(double *)(lVar11 + 0x60) = local_c8._s_0.X;
      *(double *)(lVar11 + 0x68) = local_c8._s_0.Y;
      local_c8._s_0.Z = dVar3;
      local_a8._s_0.X = 0.0;
      local_a8._s_0.Y = 0.0;
      *(undefined8 *)(lVar11 + 0x70) = uVar4;
      local_a8._s_0.Z = dVar3;
      UE::Math::TQuat<double>::RotateVector
                (&local_68,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
      *(double *)(lVar11 + 0x78) = local_c8._s_0.X;
      *(double *)(lVar11 + 0x80) = local_c8._s_0.Y;
      *(double *)(lVar11 + 0x88) = local_c8._s_0.Z;
    }
  }
  return;
}

// BeginHoverSequenceHitTest @ 149692a70

FInputRayHit * __thiscall
UPlanePositionGizmo::BeginHoverSequenceHitTest
          (UPlanePositionGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

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

// CanBeginClickDragSequence @ 1496968f0

FInputRayHit * __thiscall
UPlanePositionGizmo::CanBeginClickDragSequence
          (UPlanePositionGizmo *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  double dVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  FWeakObjectPtr FVar7;
  undefined8 *puVar8;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     (((this->_padding_ != 0 && (this->_padding_ != 0)) && (this->_padding_ != 0)))) {
    puVar8 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar8[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar8;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar8[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar8[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar6 = puVar8[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar8[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar6;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar6 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar6 >> 0x20);
    FVar7 = *(FWeakObjectPtr *)(puVar8 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar8[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar7;
    if (__return_storage_ptr__->bHit != false) {
      dVar1 = __return_storage_ptr__->HitDepth;
      dVar4 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      dVar3 = dVar1 * (param_1->WorldRay).Direction.field0_0x0._s_0.Z +
              (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      (this->InteractionCurPoint).field0_0x0._s_0.Z =
           dVar1 * (param_1->WorldRay).Direction.field0_0x0._s_0.X +
           (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      TVar2._8_4_ = SUB84(dVar3,0);
      TVar2._s_0.X = dVar1 * dVar4 + dVar5;
      TVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      (this->InteractionStartParameter).field0_0x0 = TVar2;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a6fe0

UClass * __cdecl UPlanePositionGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PlanePositionGizmo",
               &Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton,
               StaticRegisterNativesUPlanePositionGizmo,0x280,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlanePositionGizmo>,
               InternalVTableHelperCtorCaller<UPlanePositionGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlanePositionGizmo.InnerSingleton;
}

// InitializeAsScaleGizmo @ 1496ac0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPlanePositionGizmo::InitializeAsScaleGizmo
          (UPlanePositionGizmo *this,FTransformSubGizmoCommonParams *param_1,bool param_2,
          FTransformSubGizmoSharedState *param_3)

{
  Type TVar1;
  bool bVar2;
  UPackage *pUVar3;
  UGizmoComponentAxisSource *pUVar4;
  UGizmoPlaneScaleParameterSource *pUVar5;
  IGizmoAxisSource *pIVar6;
  IGizmoAxisSource *pIVar7;
  IGizmoAxisSource *pIVar8;
  UGizmoScaledAndUnscaledTransformSources *local_res10;
  
  if (((param_1->Component != (UPrimitiveComponent *)0x0) &&
      (param_1->TransformProxy != (UTransformProxy *)0x0)) && (TVar1 = param_1->Axis, TVar1 != None)
     ) {
    pIVar8 = (IGizmoAxisSource *)0x0;
    if (TVar1 == Y) {
      pIVar7 = (IGizmoAxisSource *)&DAT_00000001;
    }
    else {
      pIVar7 = pIVar8;
      if (TVar1 == Z) {
        pIVar7 = (IGizmoAxisSource *)&DAT_00000002;
      }
    }
    bVar2 = UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>
                      (this,param_1,param_3,&local_res10);
    if (bVar2) {
      pUVar3 = (UPackage *)param_1->OuterForSubobjects;
      if (pUVar3 == (UPackage *)0x0) {
        pUVar3 = GetTransientPackage();
      }
      this->bEnableSignedAxis = true;
      if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
         (pUVar4 = param_3->UnitCardinalAxisSources[(longlong)pIVar7],
         pUVar4 == (UGizmoComponentAxisSource *)0x0)) {
        pUVar4 = UGizmoComponentAxisSource::Construct
                           (*(USceneComponent **)
                             (*(longlong *)&param_1->Component->field_0xa8 + 0x1b8),(int)pIVar7,true
                            ,(UObject *)pUVar3);
        if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
          param_3->UnitCardinalAxisSources[(longlong)pIVar7] = pUVar4;
        }
      }
      pIVar7 = (IGizmoAxisSource *)&local_res10->_padding_;
      if (local_res10 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
        pIVar7 = pIVar8;
      }
      pIVar6 = (IGizmoAxisSource *)&pUVar4->_padding_;
      if (pUVar4 == (UGizmoComponentAxisSource *)0x0) {
        pIVar6 = pIVar8;
      }
      pUVar5 = UGizmoPlaneScaleParameterSource::Construct
                         (pIVar6,(IGizmoTransformSource *)pIVar7,(UObject *)pUVar3);
      if (pUVar5 != (UGizmoPlaneScaleParameterSource *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        pIVar8 = (IGizmoAxisSource *)&pUVar5->_padding_;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UGizmoPlaneScaleParameterSource *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      *(UGizmoPlaneScaleParameterSource **)&this->ParameterSource = pUVar5;
      *(IGizmoAxisSource **)&(this->ParameterSource).field_0x8 = pIVar8;
      pUVar5->bClampToZero = param_2;
      pUVar5->bUseEqualScaling = true;
      return true;
    }
  }
  return false;
}

// InitializeAsTranslateGizmo @ 1496ac220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPlanePositionGizmo::InitializeAsTranslateGizmo
          (UPlanePositionGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  UGizmoPlaneTranslationParameterSource *pUVar3;
  IGizmoAxisSource *pIVar4;
  IGizmoAxisSource *pIVar5;
  IGizmoAxisSource *pIVar6;
  UGizmoScaledAndUnscaledTransformSources *local_res10;
  
  if ((((param_1->Component != (UPrimitiveComponent *)0x0) &&
       (param_1->TransformProxy != (UTransformProxy *)0x0)) && (param_1->Axis != None)) &&
     (bVar1 = UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>
                        (this,param_1,param_2,&local_res10), bVar1)) {
    pUVar2 = (UPackage *)param_1->OuterForSubobjects;
    if (pUVar2 == (UPackage *)0x0) {
      pUVar2 = GetTransientPackage();
    }
    pIVar6 = (IGizmoAxisSource *)0x0;
    pIVar5 = (IGizmoAxisSource *)&local_res10->_padding_;
    if (local_res10 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
      pIVar5 = pIVar6;
    }
    pIVar4 = pIVar6;
    if (*(longlong *)&this->AxisSource != 0) {
      pIVar4 = *(IGizmoAxisSource **)&(this->AxisSource).field_0x8;
    }
    pUVar3 = UGizmoPlaneTranslationParameterSource::Construct
                       (pIVar4,(IGizmoTransformSource *)pIVar5,(UObject *)pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UGizmoPlaneTranslationParameterSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pIVar5 = (IGizmoAxisSource *)&pUVar3->_padding_;
    if (pUVar3 == (UGizmoPlaneTranslationParameterSource *)0x0) {
      pIVar5 = pIVar6;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UGizmoPlaneTranslationParameterSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    *(UGizmoPlaneTranslationParameterSource **)&this->ParameterSource = pUVar3;
    *(IGizmoAxisSource **)&(this->ParameterSource).field_0x8 = pIVar5;
    return true;
  }
  return false;
}

// InitializeAsUniformScaleGizmo @ 1496ac320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UPlanePositionGizmo::InitializeAsUniformScaleGizmo
          (UPlanePositionGizmo *this,FTransformSubGizmoCommonParams *param_1,bool param_2,
          FTransformSubGizmoSharedState *param_3)

{
  TRefCountPtr<ITextData> TVar1;
  UObject *pUVar2;
  ulonglong uVar3;
  UTransformProxy *pUVar4;
  bool bVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UGizmoConstantFrameAxisSource *pUVar8;
  UGizmoUniformScaleParameterSource *pUVar9;
  longlong *plVar10;
  IToolContextTransactionProvider *pIVar11;
  IGizmoAxisSource *pIVar12;
  IGizmoAxisSource *pIVar13;
  IGizmoAxisSource *pIVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  FWeakObjectPtr local_120;
  UGizmoScaledAndUnscaledTransformSources *local_118;
  UObject *local_110;
  undefined1 local_108 [128];
  undefined1 local_88 [16];
  undefined8 local_78;
  TOptional<FText>_u_0 TStack_70;
  IToolContextTransactionProvider *pIStack_60;
  UObject *local_58;
  bool local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((param_1->Component == (UPrimitiveComponent *)0x0) ||
     (param_1->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  pIVar14 = (IGizmoAxisSource *)0x0;
  if ((param_1->Axis == None) ||
     (bVar5 = `UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l6::<lambda_1>::operator()
                        (local_128), bVar5)) {
    bVar5 = UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>
                      (this,param_1,param_3,&local_118);
    if (!bVar5) {
      return false;
    }
  }
  else {
    local_88._0_8_ = param_1->Component;
    TVar1.Reference = *(ITextData **)&(param_1->TransactionName).field0_0x0;
    local_88._8_8_ = param_1->TransformProxy;
    local_78._4_1_ = param_1->bAxisIsBasedOnRootComponent;
    TStack_70.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
    TStack_70._8_8_ = TStack_70._8_8_ & 0xffffffff00000000;
    if (TVar1.Reference != (ITextData *)0x0) {
      TStack_70.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)TVar1.Reference;
      (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,&local_120);
      TStack_70.TypedValue.Flags = (param_1->TransactionName).field0_0x0.TypedValue.Flags;
    }
    pIStack_60 = param_1->TransactionProvider;
    local_58 = param_1->OuterForSubobjects;
    local_50 = param_1->bManipulatesRootComponent;
    local_78 = (IToolContextTransactionProvider)((ulonglong)local_78 & 0xffffffff00000000);
    bVar5 = UE::GizmoUtil::SetCommonSubGizmoProperties<UPlanePositionGizmo>
                      (this,(FTransformSubGizmoCommonParams *)local_88,param_3,&local_118);
    if (!bVar5) {
      if (TStack_70.TypedValue.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*(ITextData *)TStack_70.TypedValue.TextData.Reference + 0x10))();
      return false;
    }
    if (TStack_70.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)TStack_70.TypedValue.TextData.Reference + 0x10))();
    }
  }
  pUVar6 = (UPackage *)param_1->OuterForSubobjects;
  if (pUVar6 == (UPackage *)0x0) {
    pUVar6 = GetTransientPackage();
  }
  if ((param_3 == (FTransformSubGizmoSharedState *)0x0) ||
     (pUVar8 = param_3->CameraAxisSource, pUVar8 == (UGizmoConstantFrameAxisSource *)0x0)) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_108,pUVar7);
    local_108._8_8_ = pUVar6;
    pUVar8 = (UGizmoConstantFrameAxisSource *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
    if (local_108._64_8_ != 0) {
      plVar10 = (longlong *)(local_108 + 0x50);
      if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_108._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    pUVar2 = *(UObject **)&param_1->Component->field_0xa8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    local_110 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_110);
    local_88._0_8_ = *(undefined8 *)&this->CustomTickFunction;
    pUVar4 = *(UTransformProxy **)&(this->CustomTickFunction).field_0x8;
    local_78 = *(IToolContextTransactionProvider *)&(this->CustomTickFunction).field_0x10;
    TStack_70.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)*(undefined8 *)&(this->CustomTickFunction).field_0x18;
    uVar3 = *(ulonglong *)&(this->CustomTickFunction).field_0x20;
    pIStack_60 = *(IToolContextTransactionProvider **)&(this->CustomTickFunction).field_0x28;
    *(code **)&this->CustomTickFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l20::<lambda_2>,void,float>
         ::Call;
    *(undefined8 *)&(this->CustomTickFunction).field_0x8 = local_88._8_8_;
    TStack_70.TypedValue.Flags = local_120.ObjectIndex;
    TStack_70._12_4_ = local_120.ObjectSerialNumber;
    *(undefined4 *)&(this->CustomTickFunction).field_0x10 = 0x51e9efc8;
    *(undefined4 *)&(this->CustomTickFunction).field_0x14 = 1;
    *(UPlanePositionGizmo **)&(this->CustomTickFunction).field_0x18 = this;
    *(uint *)&(this->CustomTickFunction).field_0x20 = TStack_70.TypedValue.Flags;
    *(undefined4 *)&(this->CustomTickFunction).field_0x24 = TStack_70._12_4_;
    *(undefined4 *)&(this->CustomTickFunction).field_0x28 = 0;
    *(undefined4 *)&(this->CustomTickFunction).field_0x2c = 0;
    local_88._8_8_ = pUVar4;
    TStack_70._8_8_ = uVar3;
    if ((UPrimitiveComponent *)local_88._0_8_ != (UPrimitiveComponent *)0x0) {
      pIVar11 = (IToolContextTransactionProvider *)&local_78;
      if (pIStack_60 != (IToolContextTransactionProvider *)0x0) {
        pIVar11 = pIStack_60;
      }
      (**(code **)((longlong)*pIVar11 + 0x10))();
    }
    if (param_3 != (FTransformSubGizmoSharedState *)0x0) {
      param_3->CameraAxisSource = pUVar8;
    }
    pIVar13 = pIVar14;
    if (pUVar8 == (UGizmoConstantFrameAxisSource *)0x0) goto LAB_1496ac5ca;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pIVar13 = (IGizmoAxisSource *)&pUVar8->_padding_;
LAB_1496ac5ca:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UGizmoConstantFrameAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UGizmoConstantFrameAxisSource **)&this->AxisSource = pUVar8;
  *(IGizmoAxisSource **)&(this->AxisSource).field_0x8 = pIVar13;
  pIVar13 = (IGizmoAxisSource *)&local_118->_padding_;
  if (local_118 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
    pIVar13 = pIVar14;
  }
  pIVar12 = (IGizmoAxisSource *)&pUVar8->_padding_;
  if (pUVar8 == (UGizmoConstantFrameAxisSource *)0x0) {
    pIVar12 = pIVar14;
  }
  pUVar9 = UGizmoUniformScaleParameterSource::Construct
                     (pIVar12,(IGizmoTransformSource *)pIVar13,(UObject *)pUVar6);
  if (pUVar9 != (UGizmoUniformScaleParameterSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pIVar14 = (IGizmoAxisSource *)&pUVar9->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoUniformScaleParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  *(UGizmoUniformScaleParameterSource **)&this->ParameterSource = pUVar9;
  *(IGizmoAxisSource **)&(this->ParameterSource).field_0x8 = pIVar14;
  return true;
}

// OnBeginHover @ 1496b4b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPlanePositionGizmo::OnBeginHover(UPlanePositionGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001496b4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496b4b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return;
}

// OnClickDrag @ 1496b4c20

void __thiscall UPlanePositionGizmo::OnClickDrag(UPlanePositionGizmo *this,FInputDeviceRay *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  TScriptInterface<IGizmoStateTarget> *pTVar7;
  longlong *plVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool local_res8 [8];
  FInputDeviceRay *local_res18;
  double local_58;
  double local_50;
  TVector<double>_u_0 local_48 [2];
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x28 == '\0') {
    return;
  }
  local_res18 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->HitTarget);
  pcVar4 = *(code **)&this->HitTarget;
  pTVar7 = &this->StateTarget;
  if (*(TScriptInterface<IGizmoStateTarget> **)&this->bEnableSignedAxis !=
      (TScriptInterface<IGizmoStateTarget> *)0x0) {
    pTVar7 = *(TScriptInterface<IGizmoStateTarget> **)&this->bEnableSignedAxis;
  }
  uVar6 = (**(code **)(*(longlong *)pTVar7 + 8))();
  cVar5 = (*pcVar4)(uVar6);
  if (cVar5 != '\0') {
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar4 = (code *)this->_padding_;
    plVar9 = *(longlong **)&(this->ShouldUseCustomDestinationFunc).field_0x20;
    plVar8 = (longlong *)&(this->ShouldUseCustomDestinationFunc).field_0x8;
    if (plVar9 != (longlong *)0x0) {
      plVar8 = plVar9;
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar5 = (*pcVar4)(uVar6,&local_res18,local_48);
    if (cVar5 != '\0') {
      dVar2 = *(double *)&(this->CustomDestinationFunc).field_0x20;
      pdVar1 = &(this->InteractionStartPoint).field0_0x0._s_0.Z;
      dVar3 = *(double *)&(this->CustomDestinationFunc).field_0x28;
      dVar13 = ((double)local_48[0]._8_8_ - *(double *)&(this->CustomDestinationFunc).field_0x8) *
               dVar2 + ((double)local_48[0]._0_8_ - *(double *)&this->CustomDestinationFunc) *
                       *(double *)&(this->CustomDestinationFunc).field_0x18 +
               ((double)local_48[0]._16_8_ - *(double *)&(this->CustomDestinationFunc).field_0x10) *
               dVar3;
      dVar12 = (double)local_48[0]._8_8_ - dVar13 * dVar2;
      dVar11 = (double)local_48[0]._16_8_ - dVar13 * dVar3;
      (this->InteractionAxisX).field0_0x0._s_0.Z =
           (double)local_48[0]._0_8_ - dVar13 * *(double *)&(this->CustomDestinationFunc).field_0x18
      ;
      (this->InteractionAxisY).field0_0x0._s_0.X = dVar12;
      (this->InteractionAxisY).field0_0x0._s_0.Y = dVar11;
      dVar12 = dVar12 - *(double *)&(this->CustomDestinationFunc).field_0x8;
      dVar11 = dVar11 - *(double *)&(this->CustomDestinationFunc).field_0x10;
      dVar10 = (this->InteractionAxisX).field0_0x0._s_0.Z - *(double *)&this->CustomDestinationFunc;
      dVar2 = (this->InteractionNormal).field0_0x0._s_0.X;
      dVar3 = (this->InteractionNormal).field0_0x0._s_0.Y;
      dVar13 = (this->InteractionOrigin).field0_0x0._s_0.Z;
      (this->InteractionStartPoint).field0_0x0._s_0.Y =
           dVar12 * (this->InteractionOrigin).field0_0x0._s_0.X +
           dVar10 * *(double *)&this->bInInteraction +
           dVar11 * (this->InteractionOrigin).field0_0x0._s_0.Y;
      *pdVar1 = dVar12 * dVar2 + dVar10 * dVar13 + dVar11 * dVar3;
      dVar13 = (this->InteractionStartPoint).field0_0x0._s_0.Y +
               (this->ParameterSigns).field0_0x0._s_0.X;
      (this->InteractionStartPoint).field0_0x0._s_0.Y = dVar13;
      *pdVar1 = (this->ParameterSigns).field0_0x0._s_0.Y + *pdVar1;
      goto LAB_1496b4f31;
    }
  }
  GizmoMath::RayPlaneIntersectionPoint
            ((TVector<double> *)&this->CustomDestinationFunc,
             (TVector<double> *)&(this->CustomDestinationFunc).field_0x18,(TVector<double> *)param_1
             ,&(param_1->WorldRay).Direction,local_res8,(TVector<double> *)&local_48[0]._s_0);
  if (local_res8[0] == false) {
    return;
  }
  (this->InteractionAxisX).field0_0x0._s_0.Z = (double)local_48[0]._0_8_;
  (this->InteractionAxisY).field0_0x0._s_0.X = (double)local_48[0]._8_8_;
  (this->InteractionAxisY).field0_0x0._s_0.Y = (double)local_48[0]._16_8_;
  dVar10 = (this->InteractionAxisY).field0_0x0._s_0.X -
           *(double *)&(this->CustomDestinationFunc).field_0x8;
  dVar12 = (this->InteractionAxisX).field0_0x0._s_0.Z - *(double *)&this->CustomDestinationFunc;
  dVar11 = (this->InteractionAxisY).field0_0x0._s_0.Y -
           *(double *)&(this->CustomDestinationFunc).field_0x10;
  dVar2 = (this->InteractionNormal).field0_0x0._s_0.X;
  dVar3 = (this->InteractionOrigin).field0_0x0._s_0.Z;
  dVar13 = (this->InteractionNormal).field0_0x0._s_0.Y;
  (this->InteractionStartPoint).field0_0x0._s_0.Y =
       dVar10 * (this->InteractionOrigin).field0_0x0._s_0.X +
       dVar12 * *(double *)&this->bInInteraction +
       dVar11 * (this->InteractionOrigin).field0_0x0._s_0.Y;
  (this->InteractionStartPoint).field0_0x0._s_0.Z =
       dVar10 * dVar2 + dVar12 * dVar3 + dVar11 * dVar13;
  dVar2 = (this->InteractionCurPoint).field0_0x0._s_0.Y;
  dVar13 = (this->InteractionCurPoint).field0_0x0._s_0.X *
           (this->InteractionStartPoint).field0_0x0._s_0.Y;
  dVar3 = (this->InteractionStartPoint).field0_0x0._s_0.Z;
  (this->InteractionStartPoint).field0_0x0._s_0.Y = dVar13;
  (this->InteractionStartPoint).field0_0x0._s_0.Z = dVar2 * dVar3;
LAB_1496b4f31:
  local_50 = ((this->InteractionStartPoint).field0_0x0._s_0.Z -
             (this->InteractionStartPoint).field0_0x0._s_0.X) +
             (this->InteractionCurParameter).field0_0x0._s_0.Y;
  local_58 = (dVar13 - (this->InteractionAxisY).field0_0x0._s_0.Z) +
             (this->InteractionCurParameter).field0_0x0._s_0.X;
  if (this->_padding_ == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar9 + 0x20))(SUB84(local_50,0),&local_58);
  return;
}

// OnClickPress @ 1496b5110

void __thiscall
UPlanePositionGizmo::OnClickPress(UPlanePositionGizmo *this,FInputDeviceRay *param_1)

{
  TUniqueFunction<bool___cdecl(UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&)>
  *pTVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  char cVar9;
  bool bVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool local_res8 [8];
  undefined1 local_a8 [16];
  double local_98;
  double local_90;
  double local_88;
  TVector<double>_u_0 local_80;
  undefined1 local_68 [80];
  
  uVar20 = *(undefined4 *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 0x10);
  uVar21 = *(undefined4 *)((longlong)&(this->InteractionCurPoint).field0_0x0 + 0x14);
  uVar18 = *(undefined4 *)&(this->InteractionStartParameter).field0_0x0;
  uVar19 = *(undefined4 *)((longlong)&(this->InteractionStartParameter).field0_0x0 + 4);
  pTVar1 = &this->CustomDestinationFunc;
  plVar13 = (longlong *)0x0;
  dVar2 = (this->InteractionStartParameter).field0_0x0._s_0.Y;
  *(undefined4 *)pTVar1 = uVar20;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x4 = uVar21;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x8 = uVar18;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0xc = uVar19;
  *(double *)&(this->CustomDestinationFunc).field_0x10 = dVar2;
  plVar12 = plVar13;
  if (this->_padding_ != 0) {
    plVar12 = (longlong *)this->_padding_;
  }
  puVar11 = (undefined4 *)(**(code **)(*plVar12 + 0x18))(uVar20,local_68);
  uVar20 = puVar11[1];
  uVar21 = puVar11[2];
  uVar18 = puVar11[3];
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x18 = *puVar11;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x1c = uVar20;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x20 = uVar21;
  *(undefined4 *)&(this->CustomDestinationFunc).field_0x24 = uVar18;
  *(undefined8 *)&(this->CustomDestinationFunc).field_0x28 = *(undefined8 *)(puVar11 + 4);
  plVar12 = plVar13;
  if (this->_padding_ != 0) {
    plVar12 = (longlong *)this->_padding_;
  }
  cVar9 = (**(code **)(*plVar12 + 0x20))();
  if (cVar9 == '\0') {
    GizmoMath::MakeNormalPlaneBasis
              ((TVector<double> *)&(this->CustomDestinationFunc).field_0x18,
               (TVector<double> *)&this->bInInteraction,
               (TVector<double> *)((longlong)&(this->InteractionOrigin).field0_0x0 + 0x10));
  }
  else {
    plVar12 = plVar13;
    if (this->_padding_ != 0) {
      plVar12 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar12 + 0x28))
              (plVar12,&this->bInInteraction,
               (undefined1 *)((longlong)&(this->InteractionOrigin).field0_0x0 + 0x10));
  }
  GizmoMath::RayPlaneIntersectionPoint
            ((TVector<double> *)pTVar1,(TVector<double> *)&(this->CustomDestinationFunc).field_0x18,
             (TVector<double> *)param_1,&(param_1->WorldRay).Direction,local_res8,
             (TVector<double> *)&local_80._s_0);
  if (local_res8[0] == false) {
    (this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
  }
  else {
    *(undefined4 *)((longlong)&(this->InteractionAxisX).field0_0x0 + 0x10) = local_80._0_4_;
    *(undefined4 *)((longlong)&(this->InteractionAxisX).field0_0x0 + 0x14) = local_80._4_4_;
    *(undefined4 *)&(this->InteractionAxisY).field0_0x0 = local_80._8_4_;
    *(undefined4 *)((longlong)&(this->InteractionAxisY).field0_0x0 + 4) = local_80._12_4_;
    *(undefined4 *)((longlong)&(this->InteractionNormal).field0_0x0 + 0x10) = local_80._0_4_;
    *(undefined4 *)((longlong)&(this->InteractionNormal).field0_0x0 + 0x14) = local_80._4_4_;
    *(undefined4 *)&(this->InteractionAxisX).field0_0x0 = local_80._8_4_;
    *(undefined4 *)((longlong)&(this->InteractionAxisX).field0_0x0 + 4) = local_80._12_4_;
    (this->InteractionAxisY).field0_0x0._s_0.Y = local_80._s_0.Z;
    (this->InteractionAxisX).field0_0x0._s_0.Y = local_80._s_0.Z;
    plVar12 = plVar13;
    if (this->_padding_ != 0) {
      plVar12 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12,&local_98);
    cVar9 = *(char *)&this->ParameterSource;
    uVar20 = SUB84(__real_bff0000000000000,0);
    uVar21 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    dVar2 = (this->InteractionNormal).field0_0x0._s_0.Z - local_98;
    uVar18 = SUB84(__real_3ff0000000000000,0);
    uVar19 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar16 = __real_3ff0000000000000;
    if ((cVar9 != '\0') &&
       (((this->InteractionAxisX).field0_0x0._s_0.X - local_90) *
        (this->InteractionOrigin).field0_0x0._s_0.X + dVar2 * *(double *)&this->bInInteraction +
        ((this->InteractionAxisX).field0_0x0._s_0.Y - local_88) *
        (this->InteractionOrigin).field0_0x0._s_0.Y < 0.0)) {
      dVar16 = __real_bff0000000000000;
    }
    uVar14 = uVar18;
    uVar15 = uVar19;
    if ((this->ParameterSource).field_0x1 != '\0') {
      uVar14 = uVar20;
      uVar15 = uVar21;
    }
    (this->InteractionCurPoint).field0_0x0._s_0.X = (double)CONCAT44(uVar15,uVar14) * dVar16;
    uVar14 = uVar18;
    uVar15 = uVar19;
    if ((cVar9 != '\0') &&
       (dVar2 * (this->InteractionOrigin).field0_0x0._s_0.Z +
        ((this->InteractionAxisX).field0_0x0._s_0.X - local_90) *
        (this->InteractionNormal).field0_0x0._s_0.X +
        ((this->InteractionAxisX).field0_0x0._s_0.Y - local_88) *
        (this->InteractionNormal).field0_0x0._s_0.Y < 0.0)) {
      uVar14 = uVar20;
      uVar15 = uVar21;
    }
    if ((this->ParameterSource).field_0x2 == '\0') {
      uVar20 = uVar18;
      uVar21 = uVar19;
    }
    dVar8 = (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar15,uVar14);
    (this->InteractionCurPoint).field0_0x0._s_0.Y = dVar8;
    dVar17 = (double)CONCAT44(local_80._12_4_,local_80._8_4_) -
             *(double *)&(this->CustomDestinationFunc).field_0x8;
    dVar16 = (double)CONCAT44(local_80._4_4_,local_80._0_4_) - *(double *)pTVar1;
    dVar2 = local_80._s_0.Z - *(double *)&(this->CustomDestinationFunc).field_0x10;
    dVar5 = dVar16 * (this->InteractionOrigin).field0_0x0._s_0.Z +
            dVar17 * (this->InteractionNormal).field0_0x0._s_0.X +
            dVar2 * (this->InteractionNormal).field0_0x0._s_0.Y;
    (this->InteractionAxisY).field0_0x0._s_0.Z =
         dVar17 * (this->InteractionOrigin).field0_0x0._s_0.X +
         dVar16 * *(double *)&this->bInInteraction +
         dVar2 * (this->InteractionOrigin).field0_0x0._s_0.Y;
    (this->InteractionStartPoint).field0_0x0._s_0.X = dVar5;
    local_98 = local_98 - *(double *)&this->CustomDestinationFunc;
    local_90 = local_90 - *(double *)&(this->CustomDestinationFunc).field_0x8;
    local_88 = local_88 - *(double *)&(this->CustomDestinationFunc).field_0x10;
    dVar2 = (this->InteractionOrigin).field0_0x0._s_0.Z;
    dVar16 = (this->InteractionNormal).field0_0x0._s_0.X;
    dVar17 = (this->InteractionNormal).field0_0x0._s_0.Y;
    dVar4 = (this->InteractionAxisY).field0_0x0._s_0.Z -
            (local_98 * *(double *)&this->bInInteraction +
             local_90 * (this->InteractionOrigin).field0_0x0._s_0.X +
            local_88 * (this->InteractionOrigin).field0_0x0._s_0.Y);
    (this->ParameterSigns).field0_0x0._s_0.X = dVar4;
    (this->ParameterSigns).field0_0x0._s_0.Y =
         dVar5 - (local_98 * dVar2 + local_90 * dVar16 + local_88 * dVar17);
    dVar8 = dVar8 * (this->InteractionStartPoint).field0_0x0._s_0.X;
    uVar20 = SUB84(dVar8,0);
    uVar21 = (undefined4)((ulonglong)dVar8 >> 0x20);
    dVar2 = (this->InteractionCurPoint).field0_0x0._s_0.X *
            (this->InteractionAxisY).field0_0x0._s_0.Z;
    auVar6._8_4_ = uVar20;
    auVar6._0_8_ = dVar2;
    auVar6._12_4_ = uVar21;
    *(undefined1 (*) [16])((longlong)&(this->InteractionAxisY).field0_0x0 + 0x10) = auVar6;
    auVar7._8_4_ = uVar20;
    auVar7._0_8_ = dVar2;
    auVar7._12_4_ = uVar21;
    *(undefined1 (*) [16])((longlong)&(this->InteractionStartPoint).field0_0x0 + 8) = auVar7;
    plVar12 = plVar13;
    if (this->_padding_ != 0) {
      plVar12 = (longlong *)this->_padding_;
    }
    puVar11 = (undefined4 *)(**(code **)(*plVar12 + 0x10))(SUB84(dVar4,0),local_a8);
    uVar20 = puVar11[1];
    uVar21 = puVar11[2];
    uVar18 = puVar11[3];
    *(undefined4 *)&(this->InteractionCurParameter).field0_0x0 = *puVar11;
    *(undefined4 *)((longlong)&(this->InteractionCurParameter).field0_0x0 + 4) = uVar20;
    *(undefined4 *)((longlong)&(this->InteractionCurParameter).field0_0x0 + 8) = uVar21;
    *(undefined4 *)((longlong)&(this->InteractionCurParameter).field0_0x0 + 0xc) = uVar18;
    if (this->_padding_ != 0) {
      plVar13 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (this->ShouldUseCustomDestinationFunc).field_0x28 = 1;
    if ((this->_padding_ != 0) && (*(longlong *)&this->AxisSource != 0)) {
      (**(code **)(**(longlong **)&this->AxisSource + 0x10))();
    }
    if ((this->_padding_ == 0) || (this->_padding_ == 0)) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<751127644778529045>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\PlanePositionGizmo.cpp"
                          ,0x115,"HitTarget");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      (**(code **)(*(longlong *)this->_padding_ + 0x20))
                ((longlong *)this->_padding_,(this->ShouldUseCustomDestinationFunc).field_0x28);
    }
  }
  return;
}

// OnClickRelease @ 1496b5700

void __thiscall
UPlanePositionGizmo::OnClickRelease(UPlanePositionGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x28 != '\0') {
    if (this->_padding_ == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar3 + 0x28))();
    if ((this->_padding_ != 0) && (*(longlong *)&this->AxisSource != 0)) {
      (**(code **)(**(longlong **)&this->AxisSource + 0x18))();
    }
    (this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001496b5766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<751127644778529111>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\PlanePositionGizmo.cpp"
                       ,0x157,"HitTarget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnEndHover @ 1496b5cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UPlanePositionGizmo::OnEndHover(UPlanePositionGizmo *this)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001496b5cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496b5ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,0);
  return;
}

// OnTerminateDragSequence @ 1496b5d90

void __thiscall UPlanePositionGizmo::OnTerminateDragSequence(UPlanePositionGizmo *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->ShouldUseCustomDestinationFunc).field_0x28 != '\0') {
    if (this->_padding_ == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar3 + 0x28))();
    if ((this->_padding_ != 0) && (*(longlong *)&this->AxisSource != 0)) {
      (**(code **)(**(longlong **)&this->AxisSource + 0x18))();
    }
    (this->ShouldUseCustomDestinationFunc).field_0x28 = 0;
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001496b5df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<751127644778529131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\PlanePositionGizmo.cpp"
                       ,0x16b,"HitTarget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdateHover @ 1496b6440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPlanePositionGizmo::OnUpdateHover(UPlanePositionGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return true;
  }
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return true;
}

// Setup @ 1496c1d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPlanePositionGizmo::Setup(UPlanePositionGizmo *this)

{
  UObject *pUVar1;
  UClickDragInputBehavior *pUVar2;
  UMouseHoverBehavior *pUVar3;
  UClass *pUVar4;
  UGizmoComponentHitTarget *pUVar5;
  longlong *plVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UInteractiveGizmo::Setup((UInteractiveGizmo *)this);
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UClickDragInputBehavior>(pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UClickDragInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar7 = (UObject *)0x0;
  (this->MouseBehavior).field0_0x0.DebugPtr = pUVar2;
  pUVar1 = (UObject *)&this->_padding_;
  if (this == (UPlanePositionGizmo *)0x0) {
    pUVar1 = pUVar7;
  }
  (**(code **)(*(longlong *)pUVar2 + 0x378))(pUVar2,pUVar1);
  pUVar2 = (this->MouseBehavior).field0_0x0.DebugPtr;
  local_a8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,local_a8);
  (**(code **)(this->_padding_ + 0x2e0))(this,(this->MouseBehavior).field0_0x0.DebugPtr);
  pUVar1 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UMouseHoverBehavior>(pUVar1);
  pUVar1 = (UObject *)&this->_padding_;
  if (this == (UPlanePositionGizmo *)0x0) {
    pUVar1 = pUVar7;
  }
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,pUVar1);
  local_a8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,local_a8);
  (**(code **)(this->_padding_ + 0x2e0))(this,pUVar3);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UGizmoConstantAxisSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = this;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar8 = pUVar1 + 1;
  if (pUVar1 == (UObject *)0x0) {
    pUVar8 = pUVar7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)&this->AxisSource = pUVar1;
  *(UObject **)&(this->AxisSource).field_0x8 = pUVar8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = this;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar8 = pUVar1 + 1;
  if (pUVar1 == (UObject *)0x0) {
    pUVar8 = pUVar7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)&this->ParameterSource = pUVar1;
  *(UObject **)&(this->ParameterSource).field_0x8 = pUVar8;
  pUVar5 = NewObject<UGizmoComponentHitTarget>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar1 = (UObject *)&pUVar5->_padding_;
  if (pUVar5 == (UGizmoComponentHitTarget *)0x0) {
    pUVar1 = pUVar7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoComponentHitTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(UGizmoComponentHitTarget **)&this->HitTarget = pUVar5;
  *(UObject **)&(this->HitTarget).field_0x8 = pUVar1;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UGizmoNilStateTarget::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = this;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar8 = pUVar1 + 1;
  if (pUVar1 == (UObject *)0x0) {
    pUVar8 = pUVar7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)&this->StateTarget = pUVar1;
  *(UObject **)&(this->StateTarget).field_0x8 = pUVar8;
  this->bInInteraction = false;
  return;
}

// StaticRegisterNativesUPlanePositionGizmo @ 1496c2ce0

void __cdecl UPlanePositionGizmo::StaticRegisterNativesUPlanePositionGizmo(void)

{
  return;
}

// Tick @ 1496c30c0

void __thiscall UPlanePositionGizmo::Tick(UPlanePositionGizmo *this,float param_1)

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

// operator() @ 150544050

bool __thiscall
`UPlanePositionGizmo::InitializeAsUniformScaleGizmo'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<751127644778528919>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<751127644778528919>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

