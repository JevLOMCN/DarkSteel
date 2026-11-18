// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14966e9e0

UClass * __cdecl URepositionableTransformGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"RepositionableTransformGizmo",
               &Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton,
               StaticRegisterNativesURepositionableTransformGizmo,0x5e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URepositionableTransformGizmo>,
               InternalVTableHelperCtorCaller<URepositionableTransformGizmo>,local_res8,
               UCombinedTransformGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673520

bool __cdecl URepositionableTransformGizmo::<lambda_63_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673530

bool __cdecl
URepositionableTransformGizmo::<lambda_64_>::<lambda_invoker_cdecl>
          (TRay<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// URepositionableTransformGizmo @ 149687de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

URepositionableTransformGizmo * __thiscall
URepositionableTransformGizmo::URepositionableTransformGizmo
          (URepositionableTransformGizmo *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UCombinedTransformGizmo::UCombinedTransformGizmo((UCombinedTransformGizmo *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->ShouldAlignPivot = 0;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAlignPivot).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldAlignPivot).field_0x18;
  *(code **)puVar1 = <lambda_63_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAlignPivot =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->PivotAlignmentRayCaster = 0;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x28 = 0;
  *(undefined ***)&(this->PivotAlignmentRayCaster).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->PivotAlignmentRayCaster).field_0x18;
  *(code **)puVar1 = <lambda_64_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PivotAlignmentRayCaster =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  (this->PivotAlignmentGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PivotAlignmentGizmos).ArrayNum = 0;
  (this->PivotAlignmentGizmos).ArrayMax = 0;
  (this->RepositionStateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  return this;
}

// URepositionableTransformGizmo @ 149687eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

URepositionableTransformGizmo * __thiscall
URepositionableTransformGizmo::URepositionableTransformGizmo(URepositionableTransformGizmo *this)

{
  undefined1 *puVar1;
  
  UCombinedTransformGizmo::UCombinedTransformGizmo((UCombinedTransformGizmo *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->ShouldAlignPivot = 0;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAlignPivot).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldAlignPivot).field_0x18;
  *(code **)puVar1 = <lambda_63_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAlignPivot =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->PivotAlignmentRayCaster = 0;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x28 = 0;
  *(undefined ***)&(this->PivotAlignmentRayCaster).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TRay_N_Math_UE__AEAU__TVector_N_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->PivotAlignmentRayCaster).field_0x18;
  *(code **)puVar1 = <lambda_64_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PivotAlignmentRayCaster =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  (this->PivotAlignmentGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PivotAlignmentGizmos).ArrayNum = 0;
  (this->PivotAlignmentGizmos).ArrayMax = 0;
  (this->RepositionStateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  return this;
}

// ~URepositionableTransformGizmo @ 14968a840

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
URepositionableTransformGizmo::~URepositionableTransformGizmo(URepositionableTransformGizmo *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  pFVar1 = (this->PivotAlignmentGizmos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->PivotAlignmentRayCaster != 0) {
    plVar2 = *(longlong **)&(this->PivotAlignmentRayCaster).field_0x28;
    plVar3 = (longlong *)&(this->PivotAlignmentRayCaster).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ShouldAlignPivot != 0) {
    plVar2 = *(longlong **)&(this->ShouldAlignPivot).field_0x28;
    plVar3 = (longlong *)&(this->ShouldAlignPivot).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UCombinedTransformGizmo::~UCombinedTransformGizmo((UCombinedTransformGizmo *)this);
  return;
}

// GetPrivateStaticClass @ 1496a7160

UClass * __cdecl URepositionableTransformGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"RepositionableTransformGizmo",
               &Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton,
               StaticRegisterNativesURepositionableTransformGizmo,0x5e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URepositionableTransformGizmo>,
               InternalVTableHelperCtorCaller<URepositionableTransformGizmo>,local_res8,
               UCombinedTransformGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmo.InnerSingleton;
}

// ModifyPivotAxisGizmo @ 1496b3830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URepositionableTransformGizmo::ModifyPivotAxisGizmo
          (URepositionableTransformGizmo *this,UInteractiveGizmo *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  TObjectPtr<UInputBehaviorSet>_u_0 TVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  UInputBehaviorSet *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 == (UInteractiveGizmo *)0x0) {
LAB_1496b387d:
    param_1 = (UInteractiveGizmo *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubGizmo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_1496b387d;
  }
  (**(code **)(*(longlong *)param_1[2]._padding_ + 0x360))();
  local_78 = param_1[2].InputBehaviors.field0_0x0.DebugPtr;
  lVar3 = param_1[3]._padding_;
  local_68 = param_1[3]._padding_;
  lStack_60 = param_1[3]._padding_;
  lVar8 = param_1[3]._padding_;
  plStack_50 = (longlong *)param_1[3]._padding_;
  param_1[2].InputBehaviors.field0_0x0.DebugPtr =
       (UInputBehaviorSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_1>,bool>
       ::Call;
  param_1[3]._padding_ = lStack_70;
  *(undefined4 *)&param_1[3]._padding_ = 0x51e9efe8;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 1;
  param_1[3]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[3]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&param_1[3]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 0;
  local_58 = lVar8;
  lStack_70 = lVar3;
  if (local_78 != (UInputBehaviorSet *)0x0) {
    plVar7 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar7 = plStack_50;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  local_48 = param_1[3]._padding_;
  TVar4 = param_1[3].InputBehaviors.field0_0x0;
  local_38 = param_1[4]._padding_;
  lStack_30 = param_1[4]._padding_;
  lVar8 = param_1[4]._padding_;
  plStack_20 = (longlong *)param_1[4]._padding_;
  param_1[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotAxisGizmo'::__l2::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  param_1[3].InputBehaviors.field0_0x0 = TStack_40;
  *(undefined4 *)&param_1[4]._padding_ = 0x51e9f008;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 1;
  param_1[4]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[4]._padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&param_1[4]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 0;
  TStack_40 = TVar4;
  local_28 = lVar8;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  lVar8 = param_1[2]._padding_;
  if (lVar8 != 0) {
    pUVar6 = UGizmoComponentHitTarget::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_1496b3a31;
  }
  lVar8 = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("HitTarget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                     ,0xb1,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1496b3a31:
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    plVar7 = (longlong *)(lVar8 + 0x80);
    if (*(longlong **)(lVar8 + 0x98) != (longlong *)0x0) {
      plVar7 = *(longlong **)(lVar8 + 0x98);
    }
    (**(code **)(*plVar7 + 0x10))();
    *(undefined8 *)(lVar8 + 0x70) = 0;
  }
  return;
}

// ModifyPivotFreeRotationGizmo @ 1496b3a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo
          (URepositionableTransformGizmo *this,UInteractiveGizmo *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStackY_78 [32];
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_1 == (UInteractiveGizmo *)0x0) {
LAB_1496b3be2:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5745643060579008263>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                       ,0xf9,"SubGizmo");
    if (!bVar5) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = Z_Construct_UClass_UFreeRotationSubGizmo_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) goto LAB_1496b3be2;
  (**(code **)(*(longlong *)param_1[2]._padding_ + 0x360))();
  lVar8 = param_1[1]._padding_;
  if (lVar8 != 0) {
    pUVar6 = UGizmoComponentHitTarget::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_1496b3b37;
  }
  lVar8 = 0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("HitTarget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                     ,0xfe,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1496b3b37:
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    plVar7 = (longlong *)(lVar8 + 0x80);
    if (*(longlong **)(lVar8 + 0x98) != (longlong *)0x0) {
      plVar7 = *(longlong **)(lVar8 + 0x98);
    }
    (**(code **)(*plVar7 + 0x10))();
    *(undefined8 *)(lVar8 + 0x70) = 0;
  }
  lVar4 = *(longlong *)(lVar8 + 0x40);
  local_38 = *(longlong *)(lVar8 + 0x50);
  uStack_30 = *(undefined8 *)(lVar8 + 0x58);
  uVar3 = *(undefined8 *)(lVar8 + 0x60);
  plStack_20 = *(longlong **)(lVar8 + 0x68);
  *(code **)(lVar8 + 0x40) =
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotFreeRotationGizmo'::__l2::<lambda_1>,bool,FInputDeviceRay_const_&>
       ::Call;
  *(undefined8 *)(lVar8 + 0x48) = uStack_40;
  *(undefined4 *)(lVar8 + 0x50) = 0x51e9f108;
  *(undefined4 *)(lVar8 + 0x54) = 1;
  *(URepositionableTransformGizmo **)(lVar8 + 0x58) = this;
  *(undefined4 *)(lVar8 + 0x60) = (undefined4)local_28;
  *(undefined4 *)(lVar8 + 100) = local_28._4_4_;
  *(undefined4 *)(lVar8 + 0x68) = 0;
  *(undefined4 *)(lVar8 + 0x6c) = 0;
  local_28 = uVar3;
  if (lVar4 == 0) {
    return;
  }
  plVar7 = &local_38;
  if (plStack_20 != (longlong *)0x0) {
    plVar7 = plStack_20;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// ModifyPivotFreeTranslationGizmo @ 1496b3c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo
          (URepositionableTransformGizmo *this,UInteractiveGizmo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  TObjectPtr<UInputBehaviorSet>_u_0 TVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  UInputBehaviorSet *pUVar10;
  undefined1 auStackY_a8 [32];
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_1 == (UInteractiveGizmo *)0x0) {
LAB_1496b3e47:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5745643060579008280>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                       ,0xe8,"SubGizmo");
    if (!bVar6) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = Z_Construct_UClass_UFreePositionSubGizmo_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_)) goto LAB_1496b3e47;
  (**(code **)(*(longlong *)param_1[2]._padding_ + 0x360))();
  pUVar10 = param_1[2].InputBehaviors.field0_0x0.DebugPtr;
  local_68 = param_1[3]._padding_;
  lStack_60 = param_1[3]._padding_;
  lVar4 = param_1[3]._padding_;
  plStack_50 = (longlong *)param_1[3]._padding_;
  param_1[2].InputBehaviors.field0_0x0.DebugPtr =
       (UInputBehaviorSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_1>,bool>
       ::Call;
  param_1[3]._padding_ = lStack_70;
  *(undefined4 *)&param_1[3]._padding_ = 0x51e9f0c8;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 1;
  param_1[3]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[3]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&param_1[3]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 0;
  local_58 = lVar4;
  if (pUVar10 != (UInputBehaviorSet *)0x0) {
    plVar8 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar8 = plStack_50;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  local_48 = param_1[3]._padding_;
  TVar5 = param_1[3].InputBehaviors.field0_0x0;
  local_38 = param_1[4]._padding_;
  lStack_30 = param_1[4]._padding_;
  lVar4 = param_1[4]._padding_;
  plStack_20 = (longlong *)param_1[4]._padding_;
  param_1[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotFreeTranslationGizmo'::__l2::<lambda_2>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  param_1[3].InputBehaviors.field0_0x0 = TStack_40;
  *(undefined4 *)&param_1[4]._padding_ = 0x51e9f0e8;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 1;
  param_1[4]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[4]._padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&param_1[4]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 0;
  TStack_40 = TVar5;
  local_28 = lVar4;
  if (local_48 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar10 = param_1[1].InputBehaviors.field0_0x0.DebugPtr;
  if (pUVar10 != (UInputBehaviorSet *)0x0) {
    pUVar7 = UGizmoComponentHitTarget::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_1496b3e1e;
  }
  pUVar10 = (UInputBehaviorSet *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("HitTarget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                     ,0xf2,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1496b3e1e:
  if (pUVar10[2]._padding_ == 0) {
    return;
  }
  pFVar2 = pUVar10[2].Behaviors.AllocatorInstance.Data;
  pFVar9 = (FScriptContainerElement *)&pUVar10[2]._padding_;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    pFVar9 = pFVar2;
  }
  (**(code **)(*(longlong *)pFVar9 + 0x10))();
  pUVar10[2]._padding_ = 0;
  return;
}

// ModifyPivotPlaneGizmo @ 1496b3ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URepositionableTransformGizmo::ModifyPivotPlaneGizmo
          (URepositionableTransformGizmo *this,UInteractiveGizmo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  TObjectPtr<UInputBehaviorSet>_u_0 TVar6;
  bool bVar7;
  UClass *pUVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  UInputBehaviorSet *pUVar11;
  undefined1 auStack_98 [32];
  UInputBehaviorSet *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 == (UInteractiveGizmo *)0x0) {
LAB_1496b3eed:
    param_1 = (UInteractiveGizmo *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubGizmo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                       ,0xbc,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar8 = UPlanePositionGizmo::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_1496b3eed;
  }
  (**(code **)(*(longlong *)param_1[2]._padding_ + 0x360))();
  local_78 = param_1[2].InputBehaviors.field0_0x0.DebugPtr;
  lVar5 = param_1[3]._padding_;
  local_68 = param_1[3]._padding_;
  lStack_60 = param_1[3]._padding_;
  lVar4 = param_1[3]._padding_;
  plStack_50 = (longlong *)param_1[3]._padding_;
  param_1[2].InputBehaviors.field0_0x0.DebugPtr =
       (UInputBehaviorSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_1>,bool>
       ::Call;
  param_1[3]._padding_ = lStack_70;
  *(undefined4 *)&param_1[3]._padding_ = 0x51e9f028;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 1;
  param_1[3]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[3]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&param_1[3]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 0;
  local_58 = lVar4;
  lStack_70 = lVar5;
  if (local_78 != (UInputBehaviorSet *)0x0) {
    plVar9 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_48 = param_1[3]._padding_;
  TVar6 = param_1[3].InputBehaviors.field0_0x0;
  local_38 = param_1[4]._padding_;
  lStack_30 = param_1[4]._padding_;
  lVar4 = param_1[4]._padding_;
  plStack_20 = (longlong *)param_1[4]._padding_;
  param_1[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotPlaneGizmo'::__l2::<lambda_2>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  param_1[3].InputBehaviors.field0_0x0 = TStack_40;
  *(undefined4 *)&param_1[4]._padding_ = 0x51e9f048;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 1;
  param_1[4]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[4]._padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&param_1[4]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 0;
  TStack_40 = TVar6;
  local_28 = lVar4;
  if (local_48 != 0) {
    plVar9 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar9 = plStack_20;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar11 = param_1[1].InputBehaviors.field0_0x0.DebugPtr;
  if (pUVar11 != (UInputBehaviorSet *)0x0) {
    pUVar8 = UGizmoComponentHitTarget::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_1496b40a1;
  }
  pUVar11 = (UInputBehaviorSet *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("HitTarget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                     ,0xc5,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1496b40a1:
  if (pUVar11[2]._padding_ != 0) {
    pFVar2 = pUVar11[2].Behaviors.AllocatorInstance.Data;
    pFVar10 = (FScriptContainerElement *)&pUVar11[2]._padding_;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      pFVar10 = pFVar2;
    }
    (**(code **)(*(longlong *)pFVar10 + 0x10))();
    pUVar11[2]._padding_ = 0;
  }
  return;
}

// ModifyPivotRotateGizmo @ 1496b40f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URepositionableTransformGizmo::ModifyPivotRotateGizmo
          (URepositionableTransformGizmo *this,UInteractiveGizmo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  TObjectPtr<UInputBehaviorSet>_u_0 *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  UInputBehaviorSet *pUVar11;
  UInteractiveGizmo *pUVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  TObjectPtr<UInputBehaviorSet>_u_0 local_98;
  longlong lStack_90;
  undefined8 local_88;
  TObjectPtr<UInputBehaviorSet>_u_0 *pTStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  TObjectPtr<UInputBehaviorSet>_u_0 TStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  UInputBehaviorSet *pUStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UInteractiveGizmo *)0x0) {
LAB_1496b414a:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubGizmo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                       ,0xd0,L"");
    param_1 = (UInteractiveGizmo *)0x0;
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_UAxisAngleGizmo_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_1496b414a;
  }
  (**(code **)(*(longlong *)param_1[2]._padding_ + 0x360))();
  local_a8 = param_1[2]._padding_;
  lVar5 = param_1[2]._padding_;
  local_98 = param_1[2].InputBehaviors.field0_0x0;
  lStack_90 = param_1[3]._padding_;
  lVar4 = param_1[3]._padding_;
  pTStack_80 = (TObjectPtr<UInputBehaviorSet>_u_0 *)param_1[3]._padding_;
  param_1[2]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_1>,bool>
       ::Call;
  param_1[2]._padding_ = lStack_a0;
  *(undefined4 *)&param_1[2].InputBehaviors.field0_0x0 = 0x51e9f068;
  *(undefined4 *)((longlong)&param_1[2].InputBehaviors.field0_0x0 + 4) = 1;
  param_1[3]._padding_ = (longlong)this;
  *(undefined4 *)&param_1[3]._padding_ = (undefined4)local_88;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = local_88._4_4_;
  *(undefined4 *)&param_1[3]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 0;
  local_88 = lVar4;
  lStack_a0 = lVar5;
  if (local_a8 != 0) {
    pTVar8 = &local_98;
    if (pTStack_80 != (TObjectPtr<UInputBehaviorSet>_u_0 *)0x0) {
      pTVar8 = pTStack_80;
    }
    (*(code *)pTVar8->DebugPtr->_padding_)();
  }
  local_78 = param_1[3]._padding_;
  lVar5 = param_1[3]._padding_;
  local_68 = param_1[3]._padding_;
  TStack_60 = param_1[3].InputBehaviors.field0_0x0;
  lVar4 = param_1[4]._padding_;
  plStack_50 = (longlong *)param_1[4]._padding_;
  param_1[3]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_2>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
       ::Call;
  param_1[3]._padding_ = lStack_70;
  *(undefined4 *)&param_1[3]._padding_ = 0x51e9f088;
  *(undefined4 *)((longlong)&param_1[3]._padding_ + 4) = 1;
  param_1[3].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)this;
  *(undefined4 *)&param_1[4]._padding_ = (undefined4)local_58;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&param_1[4]._padding_ = 0;
  *(undefined4 *)((longlong)&param_1[4]._padding_ + 4) = 0;
  lStack_70 = lVar5;
  local_58 = lVar4;
  if (local_78 != 0) {
    plVar9 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar12 = (UInteractiveGizmo *)param_1[1].InputBehaviors.field0_0x0.DebugPtr;
  if (pUVar12 != (UInteractiveGizmo *)0x0) {
    pUVar7 = UGizmoComponentHitTarget::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_1496b42e2;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("HitTarget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                     ,0xd9,L"");
  pUVar12 = (UInteractiveGizmo *)0x0;
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1496b42e2:
  if (pUVar12[2]._padding_ != 0) {
    pFVar2 = (((TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_> *)&pUVar12[2]._padding_)->
             AllocatorInstance).Data;
    pFVar10 = (FScriptContainerElement *)&pUVar12[2]._padding_;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      pFVar10 = pFVar2;
    }
    (**(code **)(*(longlong *)pFVar10 + 0x10))();
    pUVar12[2]._padding_ = 0;
  }
  local_48 = pUVar12[1]._padding_;
  lVar4 = pUVar12[1]._padding_;
  local_38 = pUVar12[1]._padding_;
  lStack_30 = pUVar12[1]._padding_;
  pFVar2 = (((TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_> *)&pUVar12[1]._padding_)->
           AllocatorInstance).Data;
  pUStack_20 = pUVar12[1].InputBehaviors.field0_0x0.DebugPtr;
  pUVar12[1]._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::ModifyPivotRotateGizmo'::__l2::<lambda_3>,bool,FInputDeviceRay_const_&>
       ::Call;
  pUVar12[1]._padding_ = lStack_40;
  *(undefined4 *)&pUVar12[1]._padding_ = 0x51e9f0a8;
  *(undefined4 *)((longlong)&pUVar12[1]._padding_ + 4) = 1;
  pUVar12[1]._padding_ = (longlong)this;
  *(undefined4 *)
   &(((TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_> *)&pUVar12[1]._padding_)->AllocatorInstance
    ).Data = (undefined4)local_28;
  *(undefined4 *)
   ((longlong)
    &(((TArray<FBehaviorInfo,TSizedDefaultAllocator<32>_> *)&pUVar12[1]._padding_)->
     AllocatorInstance).Data + 4) = local_28._4_4_;
  *(int *)&pUVar12[1].InputBehaviors.field0_0x0 = 0;
  *(int *)((longlong)&pUVar12[1].InputBehaviors.field0_0x0 + 4) = 0;
  lStack_40 = lVar4;
  local_28 = pFVar2;
  if (local_48 != 0) {
    pUVar11 = (UInputBehaviorSet *)&local_38;
    if (pUStack_20 != (UInputBehaviorSet *)0x0) {
      pUVar11 = pUStack_20;
    }
    (**(code **)(pUVar11->_padding_ + 0x10))();
  }
  return;
}

// SetActiveTarget @ 1496bc4b0

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
URepositionableTransformGizmo::SetActiveTarget
          (URepositionableTransformGizmo *this,UTransformProxy *param_1,
          IToolContextTransactionProvider *param_2)

{
  int *piVar1;
  USceneComponent *pUVar2;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UGizmoTransformProxyTransformSource *pUVar10;
  UGizmoScaledAndUnscaledTransformSources *pUVar11;
  UClass *pUVar12;
  IToolContextTransactionProvider *pIVar13;
  FText *pFVar14;
  UGizmoTransformChangeStateTarget *pUVar15;
  IGizmoTransformSource *pIVar16;
  IGizmoTransformSource *pIVar17;
  TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,TSizedDefaultAllocator<32>_>
  *pTVar19;
  UTransformProxy *local_res8;
  UInteractiveGizmo *local_f8;
  UInteractiveGizmo *local_f0;
  UInteractiveGizmo *local_e8;
  IGizmoTransformSource *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  longlong *local_c0;
  undefined4 local_b8;
  IToolContextTransactionProvider *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  UInteractiveGizmo *local_98;
  UInteractiveGizmo *local_90;
  UGizmoScaledAndUnscaledTransformSources *local_88;
  TObjectPtr<UGizmoTransformChangeStateTarget>_u_0 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FText local_38;
  
  if ((*(longlong *)&this->field_0x3e8 == 0) ||
     ((*(uint *)(*(longlong *)&this->field_0x3e8 + 8) >> 0x1e & 1) != 0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5745643060579008456>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                       ,0x38,"IsValid(GizmoActor)");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    UCombinedTransformGizmo::SetActiveTarget((UCombinedTransformGizmo *)this,param_1,param_2);
    pUVar10 = UGizmoTransformProxyTransformSource::Construct
                        (*(UTransformProxy **)&this->field_0x38,(UObject *)this);
    pIVar17 = (IGizmoTransformSource *)0x0;
    pUVar10->bOverrideSetPivotMode = true;
    pUVar2 = *(USceneComponent **)(*(longlong *)&this->field_0x3e8 + 0x1b8);
    pIVar16 = (IGizmoTransformSource *)&pUVar10->_padding_;
    if (pUVar10 == (UGizmoTransformProxyTransformSource *)0x0) {
      pIVar16 = pIVar17;
    }
    pUVar11 = UGizmoScaledAndUnscaledTransformSources::Construct(pIVar16,pUVar2,(UObject *)this);
    this_00 = *(UObjectBaseUtility **)(*(longlong *)&this->field_0x428 + 0x48);
    pIVar13 = (IToolContextTransactionProvider *)pIVar17;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar12 = Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
      pIVar13 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar12);
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_38,L"URepositionableTransformGizmo",L"TransformGizmoTransaction",
                         L"Reposition Pivot");
    pUVar15 = UGizmoTransformChangeStateTarget::Construct(pUVar2,pFVar14,pIVar13,(UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UGizmoTransformChangeStateTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->RepositionStateTarget).field0_0x0.DebugPtr = pUVar15;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    pIVar16 = ::operator_new(0x20);
    if (pIVar16 != (IGizmoTransformSource *)0x0) {
      pIVar16[1] = (IGizmoTransformSource)0x0;
      *pIVar16 = (IGizmoTransformSource)&___7FTransformProxyChangeSource__6B_;
      pIVar16[2] = (IGizmoTransformSource)0x0;
      *(undefined1 *)(pIVar16 + 3) = 0;
      local_res8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UTransformProxy *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(pIVar16 + 1),(FObjectPtr)&local_res8);
      pIVar17 = pIVar16;
    }
    *(undefined1 *)(pIVar17 + 3) = 1;
    pUVar15 = (this->RepositionStateTarget).field0_0x0.DebugPtr;
    pTVar19 = &pUVar15->DependentChangeSources;
    pFVar3 = (pTVar19->AllocatorInstance).Data;
    local_e0 = pIVar17;
    if (((pFVar3 <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 <
         pFVar3 + (longlong)(pUVar15->DependentChangeSources).ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (pUVar15->DependentChangeSources).ArrayNum;
    piVar1 = &(pUVar15->DependentChangeSources).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar19->AllocatorInstance,piVar1);
    }
    (pUVar15->DependentChangeSources).ArrayNum = iVar9 + 1;
    *(IGizmoTransformSource **)((pTVar19->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_e0;
    lVar4 = *(longlong *)&this->field_0x540;
    local_60 = 0;
    local_48 = 0;
    local_80 = (this->RepositionStateTarget).field0_0x0;
    local_e0 = (IGizmoTransformSource *)0x0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_88 = pUVar11;
    if (lVar4 == 0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5745643060579008425>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                         ,0x57,"SubGizmoSharedState.IsValid()");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      local_70 = *(undefined8 *)(lVar4 + 0x18);
      uStack_68 = *(undefined8 *)(lVar4 + 0x20);
      local_60 = *(undefined8 *)(lVar4 + 0x28);
    }
    local_d0 = *(undefined8 *)&this->field_0x38;
    lVar4 = *(longlong *)&this->field_0x3e8;
    local_d8 = 0;
    local_c4 = 1;
    local_c0 = (longlong *)0x0;
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 1;
    lVar5 = *(longlong *)(lVar4 + 0x2d0);
    lVar6 = *(longlong *)(lVar4 + 0x2d8);
    local_b0 = param_2;
    if (*(longlong *)(lVar4 + 0x2c8) != 0) {
      local_c8 = 1;
      local_d8 = *(longlong *)(lVar4 + 0x2c8);
      local_f8 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x378))(this,&local_d8,&local_88);
      ModifyPivotAxisGizmo(this,local_f8);
      pTVar18 = &this->PivotAlignmentGizmos;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f8;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    if (lVar5 != 0) {
      local_c8 = 2;
      local_d8 = lVar5;
      local_f8 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x378))(this,&local_d8,&local_88);
      ModifyPivotAxisGizmo(this,local_f8);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f8;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    if (lVar6 != 0) {
      local_c8 = 3;
      local_d8 = lVar6;
      local_f8 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x378))(this,&local_d8,&local_88);
      ModifyPivotAxisGizmo(this,local_f8);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f8;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    lVar4 = *(longlong *)&this->field_0x3e8;
    lVar5 = *(longlong *)(lVar4 + 0x2e8);
    lVar6 = *(longlong *)(lVar4 + 0x2f0);
    if (*(longlong *)(lVar4 + 0x2e0) != 0) {
      local_c8 = 1;
      local_d8 = *(longlong *)(lVar4 + 0x2e0);
      local_f0 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x388))(this,&local_d8,&local_88);
      ModifyPivotPlaneGizmo(this,local_f0);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f0;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    if (lVar5 != 0) {
      local_c8 = 2;
      local_d8 = lVar5;
      local_f0 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x388))(this,&local_d8,&local_88);
      ModifyPivotPlaneGizmo(this,local_f0);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f0;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    if (lVar6 != 0) {
      local_c8 = 3;
      local_d8 = lVar6;
      local_f0 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x388))(this,&local_d8,&local_88);
      ModifyPivotPlaneGizmo(this,local_f0);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f0;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    lVar4 = *(longlong *)&this->field_0x3e8;
    lVar5 = *(longlong *)(lVar4 + 0x300);
    lVar6 = *(longlong *)(lVar4 + 0x308);
    if (*(longlong *)(lVar4 + 0x2f8) != 0) {
      local_c8 = 1;
      local_d8 = *(longlong *)(lVar4 + 0x2f8);
      local_e8 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x398))(this,&local_d8,&local_88);
      ModifyPivotRotateGizmo(this,local_e8);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_e8;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    if (lVar5 != 0) {
      local_c8 = 2;
      local_d8 = lVar5;
      local_e8 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x398))(this,&local_d8,&local_88);
      ModifyPivotRotateGizmo(this,local_e8);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_e8;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    if (lVar6 != 0) {
      local_c8 = 3;
      local_d8 = lVar6;
      local_e8 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x398))(this,&local_d8,&local_88);
      ModifyPivotRotateGizmo(this,local_e8);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_e8;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    local_c8 = 0;
    lVar4 = *(longlong *)(*(longlong *)&this->field_0x3e8 + 800);
    if (lVar4 != 0) {
      local_d8 = lVar4;
      local_98 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x3d0))(this,&local_d8,&local_88);
      ModifyPivotFreeTranslationGizmo(this,local_98);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_98;
    }
    pTVar18 = &this->PivotAlignmentGizmos;
    lVar4 = *(longlong *)(*(longlong *)&this->field_0x3e8 + 0x318);
    if (lVar4 != 0) {
      local_d8 = lVar4;
      local_90 = (UInteractiveGizmo *)
                 (**(code **)(*(longlong *)this + 0x3d8))(this,&local_d8,&local_88);
      ModifyPivotFreeRotationGizmo(this,local_90);
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 <
           pFVar3 + (longlong)(this->PivotAlignmentGizmos).ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->PivotAlignmentGizmos).ArrayNum;
      piVar1 = &(this->PivotAlignmentGizmos).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar18->AllocatorInstance,piVar1);
        (this->PivotAlignmentGizmos).ArrayNum = iVar9;
      }
      (this->PivotAlignmentGizmos).ArrayNum = iVar9 + 1;
      *(UInteractiveGizmo **)((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_90;
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
      return;
    }
  }
  return;
}

// SetPivotAlignmentFunctions @ 1496bf320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URepositionableTransformGizmo::SetPivotAlignmentFunctions
          (URepositionableTransformGizmo *this,TUniqueFunction<bool___cdecl(void)> *param_1,
          TUniqueFunction<bool___cdecl(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&)>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UClass *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  uVar5 = *(undefined8 *)&this->ShouldAlignPivot;
  uVar6 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x8;
  lVar15 = 0;
  uVar7 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x10;
  uVar8 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x18;
  uVar9 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x20;
  uVar10 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x28;
  *(undefined8 *)&this->ShouldAlignPivot = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x28 = uVar4;
  *(undefined8 *)param_1 = uVar5;
  *(undefined8 *)&param_1->field_0x8 = uVar6;
  *(undefined8 *)&param_1->field_0x10 = uVar7;
  *(undefined8 *)&param_1->field_0x18 = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar9;
  *(undefined8 *)&param_1->field_0x28 = uVar10;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  uVar7 = *(undefined8 *)&this->PivotAlignmentRayCaster;
  uVar8 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x8;
  uVar9 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x10;
  uVar10 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x18;
  uVar4 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x20;
  uVar5 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x28;
  *(undefined8 *)&this->PivotAlignmentRayCaster = *(undefined8 *)param_2;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x28 = uVar6;
  *(undefined8 *)param_2 = uVar7;
  *(undefined8 *)&param_2->field_0x8 = uVar8;
  *(undefined8 *)&param_2->field_0x10 = uVar9;
  *(undefined8 *)&param_2->field_0x18 = uVar10;
  *(undefined8 *)&param_2->field_0x20 = uVar4;
  *(undefined8 *)&param_2->field_0x28 = uVar5;
  pFVar16 = (this->PivotAlignmentGizmos).AllocatorInstance.Data;
  iVar2 = (this->PivotAlignmentGizmos).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar2 * 8;
  do {
    if ((this->PivotAlignmentGizmos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UInteractiveGizmo_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_88);
    }
    if (pFVar16 == pFVar1) {
      return;
    }
    lVar13 = *(longlong *)pFVar16;
    if (lVar13 == 0) {
LAB_1496bf439:
      lVar14 = lVar15;
    }
    else {
      pUVar11 = Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
         (lVar14 = lVar13,
         (longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8)
         != &pUVar11->_padding_)) goto LAB_1496bf439;
    }
    if (lVar14 != 0) {
      local_78 = *(longlong *)(lVar14 + 0xa0);
      uVar5 = *(undefined8 *)(lVar14 + 0xa8);
      local_68 = *(longlong *)(lVar14 + 0xb0);
      uStack_60 = *(undefined8 *)(lVar14 + 0xb8);
      uVar4 = *(undefined8 *)(lVar14 + 0xc0);
      plStack_50 = *(longlong **)(lVar14 + 200);
      *(code **)(lVar14 + 0xa0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_1>,bool>
           ::Call;
      *(undefined8 *)(lVar14 + 0xa8) = uStack_70;
      *(undefined4 *)(lVar14 + 0xb0) = 0x51e9f168;
      *(undefined4 *)(lVar14 + 0xb4) = 1;
      *(URepositionableTransformGizmo **)(lVar14 + 0xb8) = this;
      *(undefined4 *)(lVar14 + 0xc0) = (undefined4)local_58;
      *(undefined4 *)(lVar14 + 0xc4) = local_58._4_4_;
      *(undefined4 *)(lVar14 + 200) = 0;
      *(undefined4 *)(lVar14 + 0xcc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      local_78 = *(longlong *)(lVar14 + 0xd0);
      uVar5 = *(undefined8 *)(lVar14 + 0xd8);
      local_68 = *(longlong *)(lVar14 + 0xe0);
      uStack_60 = *(undefined8 *)(lVar14 + 0xe8);
      uVar4 = *(undefined8 *)(lVar14 + 0xf0);
      plStack_50 = *(longlong **)(lVar14 + 0xf8);
      *(code **)(lVar14 + 0xd0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l9::<lambda_2>,bool,UAxisPositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar14 + 0xd8) = uStack_70;
      *(undefined4 *)(lVar14 + 0xe0) = 0x51e9f188;
      *(undefined4 *)(lVar14 + 0xe4) = 1;
      *(URepositionableTransformGizmo **)(lVar14 + 0xe8) = this;
      *(undefined4 *)(lVar14 + 0xf0) = (undefined4)local_58;
      *(undefined4 *)(lVar14 + 0xf4) = local_58._4_4_;
      *(undefined4 *)(lVar14 + 0xf8) = 0;
      *(undefined4 *)(lVar14 + 0xfc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    if (lVar13 == 0) {
LAB_1496bf57a:
      lVar14 = lVar15;
    }
    else {
      pUVar11 = UPlanePositionGizmo::StaticClass();
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
         (lVar14 = lVar13,
         (longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8)
         != &pUVar11->_padding_)) goto LAB_1496bf57a;
    }
    if (lVar14 != 0) {
      local_78 = *(longlong *)(lVar14 + 0xa0);
      uVar5 = *(undefined8 *)(lVar14 + 0xa8);
      local_68 = *(longlong *)(lVar14 + 0xb0);
      uStack_60 = *(undefined8 *)(lVar14 + 0xb8);
      uVar4 = *(undefined8 *)(lVar14 + 0xc0);
      plStack_50 = *(longlong **)(lVar14 + 200);
      *(code **)(lVar14 + 0xa0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_3>,bool>
           ::Call;
      *(undefined8 *)(lVar14 + 0xa8) = uStack_70;
      *(undefined4 *)(lVar14 + 0xb0) = 0x51e9f1a8;
      *(undefined4 *)(lVar14 + 0xb4) = 1;
      *(URepositionableTransformGizmo **)(lVar14 + 0xb8) = this;
      *(undefined4 *)(lVar14 + 0xc0) = (undefined4)local_58;
      *(undefined4 *)(lVar14 + 0xc4) = local_58._4_4_;
      *(undefined4 *)(lVar14 + 200) = 0;
      *(undefined4 *)(lVar14 + 0xcc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      local_78 = *(longlong *)(lVar14 + 0xd0);
      uVar5 = *(undefined8 *)(lVar14 + 0xd8);
      local_68 = *(longlong *)(lVar14 + 0xe0);
      uStack_60 = *(undefined8 *)(lVar14 + 0xe8);
      uVar4 = *(undefined8 *)(lVar14 + 0xf0);
      plStack_50 = *(longlong **)(lVar14 + 0xf8);
      *(code **)(lVar14 + 0xd0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l12::<lambda_4>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar14 + 0xd8) = uStack_70;
      *(undefined4 *)(lVar14 + 0xe0) = 0x51e9f1c8;
      *(undefined4 *)(lVar14 + 0xe4) = 1;
      *(URepositionableTransformGizmo **)(lVar14 + 0xe8) = this;
      *(undefined4 *)(lVar14 + 0xf0) = (undefined4)local_58;
      *(undefined4 *)(lVar14 + 0xf4) = local_58._4_4_;
      *(undefined4 *)(lVar14 + 0xf8) = 0;
      *(undefined4 *)(lVar14 + 0xfc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    if (lVar13 == 0) {
LAB_1496bf6bb:
      lVar14 = lVar15;
    }
    else {
      pUVar11 = Z_Construct_UClass_UAxisAngleGizmo_NoRegister();
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
         (lVar14 = lVar13,
         (longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8)
         != &pUVar11->_padding_)) goto LAB_1496bf6bb;
    }
    if (lVar14 != 0) {
      local_78 = *(longlong *)(lVar14 + 0x90);
      uVar5 = *(undefined8 *)(lVar14 + 0x98);
      local_68 = *(longlong *)(lVar14 + 0xa0);
      uStack_60 = *(undefined8 *)(lVar14 + 0xa8);
      uVar4 = *(undefined8 *)(lVar14 + 0xb0);
      plStack_50 = *(longlong **)(lVar14 + 0xb8);
      *(code **)(lVar14 + 0x90) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_5>,bool>
           ::Call;
      *(undefined8 *)(lVar14 + 0x98) = uStack_70;
      *(undefined4 *)(lVar14 + 0xa0) = 0x51e9f1e8;
      *(undefined4 *)(lVar14 + 0xa4) = 1;
      *(URepositionableTransformGizmo **)(lVar14 + 0xa8) = this;
      *(undefined4 *)(lVar14 + 0xb0) = (undefined4)local_58;
      *(undefined4 *)(lVar14 + 0xb4) = local_58._4_4_;
      *(undefined4 *)(lVar14 + 0xb8) = 0;
      *(undefined4 *)(lVar14 + 0xbc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      local_78 = *(longlong *)(lVar14 + 0xc0);
      uVar5 = *(undefined8 *)(lVar14 + 200);
      local_68 = *(longlong *)(lVar14 + 0xd0);
      uStack_60 = *(undefined8 *)(lVar14 + 0xd8);
      uVar4 = *(undefined8 *)(lVar14 + 0xe0);
      plStack_50 = *(longlong **)(lVar14 + 0xe8);
      *(code **)(lVar14 + 0xc0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l15::<lambda_6>,bool,UAxisAngleGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar14 + 200) = uStack_70;
      *(undefined4 *)(lVar14 + 0xd0) = 0x51e9f208;
      *(undefined4 *)(lVar14 + 0xd4) = 1;
      *(URepositionableTransformGizmo **)(lVar14 + 0xd8) = this;
      *(undefined4 *)(lVar14 + 0xe0) = (undefined4)local_58;
      *(undefined4 *)(lVar14 + 0xe4) = local_58._4_4_;
      *(undefined4 *)(lVar14 + 0xe8) = 0;
      *(undefined4 *)(lVar14 + 0xec) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    if (lVar13 == 0) {
LAB_1496bf7f9:
      lVar13 = lVar15;
    }
    else {
      pUVar11 = Z_Construct_UClass_UFreePositionSubGizmo_NoRegister();
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          != &pUVar11->_padding_)) goto LAB_1496bf7f9;
    }
    if (lVar13 != 0) {
      local_78 = *(longlong *)(lVar13 + 0xa0);
      uVar5 = *(undefined8 *)(lVar13 + 0xa8);
      local_68 = *(longlong *)(lVar13 + 0xb0);
      uStack_60 = *(undefined8 *)(lVar13 + 0xb8);
      uVar4 = *(undefined8 *)(lVar13 + 0xc0);
      plStack_50 = *(longlong **)(lVar13 + 200);
      *(code **)(lVar13 + 0xa0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_7>,bool>
           ::Call;
      *(undefined8 *)(lVar13 + 0xa8) = uStack_70;
      *(undefined4 *)(lVar13 + 0xb0) = 0x51e9f228;
      *(undefined4 *)(lVar13 + 0xb4) = 1;
      *(URepositionableTransformGizmo **)(lVar13 + 0xb8) = this;
      *(undefined4 *)(lVar13 + 0xc0) = (undefined4)local_58;
      *(undefined4 *)(lVar13 + 0xc4) = local_58._4_4_;
      *(undefined4 *)(lVar13 + 200) = 0;
      *(undefined4 *)(lVar13 + 0xcc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      local_78 = *(longlong *)(lVar13 + 0xd0);
      uVar5 = *(undefined8 *)(lVar13 + 0xd8);
      local_68 = *(longlong *)(lVar13 + 0xe0);
      uStack_60 = *(undefined8 *)(lVar13 + 0xe8);
      uVar4 = *(undefined8 *)(lVar13 + 0xf0);
      plStack_50 = *(longlong **)(lVar13 + 0xf8);
      *(code **)(lVar13 + 0xd0) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`URepositionableTransformGizmo::SetPivotAlignmentFunctions'::__l18::<lambda_8>,bool,UPlanePositionGizmo::FCustomDestinationParams_const_&,UE::Math::TVector<double>_&>
           ::Call;
      *(undefined8 *)(lVar13 + 0xd8) = uStack_70;
      *(undefined4 *)(lVar13 + 0xe0) = 0x51e9f248;
      *(undefined4 *)(lVar13 + 0xe4) = 1;
      *(URepositionableTransformGizmo **)(lVar13 + 0xe8) = this;
      *(undefined4 *)(lVar13 + 0xf0) = (undefined4)local_58;
      *(undefined4 *)(lVar13 + 0xf4) = local_58._4_4_;
      *(undefined4 *)(lVar13 + 0xf8) = 0;
      *(undefined4 *)(lVar13 + 0xfc) = 0;
      local_58 = uVar4;
      uStack_70 = uVar5;
      if (local_78 != 0) {
        plVar12 = &local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar12 = plStack_50;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// SetWorldAlignmentFunctions @ 1496c10b0

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
URepositionableTransformGizmo::SetWorldAlignmentFunctions
          (URepositionableTransformGizmo *this,TUniqueFunction<bool___cdecl(void)> *param_1,
          TUniqueFunction<bool___cdecl(UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&)>
          *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  UCombinedTransformGizmo::SetWorldAlignmentFunctions
            ((UCombinedTransformGizmo *)this,param_1,param_2);
  local_48 = *(longlong *)&this->ShouldAlignPivot;
  uVar2 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x8;
  local_38 = *(longlong *)&(this->ShouldAlignPivot).field_0x10;
  uStack_30 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x18;
  uVar1 = *(undefined8 *)&(this->ShouldAlignPivot).field_0x20;
  plStack_20 = *(longlong **)&(this->ShouldAlignPivot).field_0x28;
  *(code **)&this->ShouldAlignPivot =
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_1>,bool>
       ::Call;
  *(undefined8 *)&(this->ShouldAlignPivot).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ShouldAlignPivot).field_0x10 = 0x51e9f128;
  *(undefined4 *)&(this->ShouldAlignPivot).field_0x14 = 1;
  *(URepositionableTransformGizmo **)&(this->ShouldAlignPivot).field_0x18 = this;
  *(undefined4 *)&(this->ShouldAlignPivot).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShouldAlignPivot).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShouldAlignPivot).field_0x28 = 0;
  *(undefined4 *)&(this->ShouldAlignPivot).field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->PivotAlignmentRayCaster;
  uVar2 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x8;
  local_38 = *(longlong *)&(this->PivotAlignmentRayCaster).field_0x10;
  uStack_30 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x18;
  uVar1 = *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x20;
  plStack_20 = *(longlong **)&(this->PivotAlignmentRayCaster).field_0x28;
  *(code **)&this->PivotAlignmentRayCaster =
       UE::Core::Private::Function::
       TFunctionRefCaller<`URepositionableTransformGizmo::SetWorldAlignmentFunctions'::__l2::<lambda_2>,bool,UE::Math::TRay<double>_const_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(this->PivotAlignmentRayCaster).field_0x8 = uStack_40;
  *(undefined4 *)&(this->PivotAlignmentRayCaster).field_0x10 = 0x51e9f148;
  *(undefined4 *)&(this->PivotAlignmentRayCaster).field_0x14 = 1;
  *(URepositionableTransformGizmo **)&(this->PivotAlignmentRayCaster).field_0x18 = this;
  *(undefined4 *)&(this->PivotAlignmentRayCaster).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->PivotAlignmentRayCaster).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->PivotAlignmentRayCaster).field_0x28 = 0;
  *(undefined4 *)&(this->PivotAlignmentRayCaster).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// StaticRegisterNativesURepositionableTransformGizmo @ 1496c2d00

void __cdecl URepositionableTransformGizmo::StaticRegisterNativesURepositionableTransformGizmo(void)

{
  return;
}

