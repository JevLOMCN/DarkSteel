// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 14

// StaticClass @ 14dee78b0

UClass * __cdecl UIKRigBodyMoverController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigBodyMoverController",
               &Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton,
               StaticRegisterNativesUIKRigBodyMoverController,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigBodyMoverController>,
               InternalVTableHelperCtorCaller<UIKRigBodyMoverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton;
}

// UIKRigBodyMoverController @ 14df19c50

UIKRigBodyMoverController * __thiscall
UIKRigBodyMoverController::UIKRigBodyMoverController
          (UIKRigBodyMoverController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigBodyMoverController__6B_;
  return this;
}

// UIKRigBodyMoverController @ 14df19c80

UIKRigBodyMoverController * __thiscall
UIKRigBodyMoverController::UIKRigBodyMoverController
          (UIKRigBodyMoverController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigBodyMoverController__6B_;
  return this;
}

// ~UIKRigBodyMoverController @ 14df1c570

void __thiscall
UIKRigBodyMoverController::~UIKRigBodyMoverController(UIKRigBodyMoverController *this)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetGoalSettings @ 14df386b0

FIKRigBodyMoverGoalSettings * __thiscall
UIKRigBodyMoverController::GetGoalSettings
          (UIKRigBodyMoverController *this,FIKRigBodyMoverGoalSettings *__return_storage_ptr__,
          FName param_1)

{
  longlong lVar1;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  lVar1 = (**(code **)(**(longlong **)&this->field_0x28 + 0x70))
                    (*(longlong **)&this->field_0x28,local_res18);
  if (lVar1 != 0) {
    __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigGoalSettingsBase__6B_;
    __return_storage_ptr__->_padding_ = *(longlong *)(lVar1 + 8);
    __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigBodyMoverGoalSettings__6B_;
    __return_storage_ptr__->BoneName = *(FName *)(lVar1 + 0x10);
    __return_storage_ptr__->InfluenceMultiplier = *(float *)(lVar1 + 0x18);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->BoneName).ComparisonIndex = 0;
  (__return_storage_ptr__->BoneName).Number = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigBodyMoverGoalSettings__6B_;
  *(undefined8 *)&__return_storage_ptr__->InfluenceMultiplier = 0x3f800000;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14df3cf00

UClass * __cdecl UIKRigBodyMoverController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigBodyMoverController",
               &Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton,
               StaticRegisterNativesUIKRigBodyMoverController,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigBodyMoverController>,
               InternalVTableHelperCtorCaller<UIKRigBodyMoverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigBodyMoverController.InnerSingleton;
}

// GetSolverSettings @ 14df40230

FIKRigBodyMoverSettings * __thiscall
UIKRigBodyMoverController::GetSolverSettings
          (UIKRigBodyMoverController *this,FIKRigBodyMoverSettings *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  FName FVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigBodyMoverSettings__6B_;
  FVar3 = *(FName *)(lVar4 + 8);
  __return_storage_ptr__->PositionPositiveZ = *(float *)(lVar4 + 0x24);
  fVar1 = *(float *)(lVar4 + 0x28);
  __return_storage_ptr__->StartBone = FVar3;
  fVar2 = *(float *)(lVar4 + 0x10);
  __return_storage_ptr__->PositionNegativeZ = fVar1;
  fVar1 = *(float *)(lVar4 + 0x2c);
  __return_storage_ptr__->PositionAlpha = fVar2;
  fVar2 = *(float *)(lVar4 + 0x14);
  __return_storage_ptr__->RotationAlpha = fVar1;
  fVar1 = *(float *)(lVar4 + 0x30);
  __return_storage_ptr__->PositionPositiveX = fVar2;
  fVar2 = *(float *)(lVar4 + 0x18);
  __return_storage_ptr__->RotateXAlpha = fVar1;
  fVar1 = *(float *)(lVar4 + 0x34);
  __return_storage_ptr__->PositionNegativeX = fVar2;
  fVar2 = *(float *)(lVar4 + 0x1c);
  __return_storage_ptr__->RotateYAlpha = fVar1;
  fVar1 = *(float *)(lVar4 + 0x38);
  __return_storage_ptr__->PositionPositiveY = fVar2;
  fVar2 = *(float *)(lVar4 + 0x20);
  __return_storage_ptr__->RotateZAlpha = fVar1;
  __return_storage_ptr__->PositionNegativeY = fVar2;
  return __return_storage_ptr__;
}

// SetGoalSettings @ 14df54b20

void __thiscall
UIKRigBodyMoverController::SetGoalSettings
          (UIKRigBodyMoverController *this,FName param_1,FIKRigBodyMoverGoalSettings *param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  (**(code **)(**(longlong **)&this->field_0x28 + 0x78))
            (*(longlong **)&this->field_0x28,local_res10);
  param_2->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// SetSolverSettings @ 14df56090

void __thiscall
UIKRigBodyMoverController::SetSolverSettings
          (UIKRigBodyMoverController *this,FIKRigBodyMoverSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 0x40))();
  param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// StaticRegisterNativesUIKRigBodyMoverController @ 14df5a080

void __cdecl UIKRigBodyMoverController::StaticRegisterNativesUIKRigBodyMoverController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UIKRigBodyMoverController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGoalSettings @ 14df65010

void __cdecl
UIKRigBodyMoverController::execGetGoalSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  
  uVar3 = 0;
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 1) + 0x70))
                    (*(longlong **)(param_1 + 1),&local_res10);
  uVar4 = uVar3;
  uVar5 = __real_3f800000;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
  }
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar5;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
  return;
}

// execGetSolverSettings @ 14df66c50

void __cdecl
UIKRigBodyMoverController::execGetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 1) + 0x30))();
  uVar1 = *(undefined4 *)(lVar8 + 0x30);
  uVar2 = *(undefined4 *)(lVar8 + 0x34);
  uVar3 = *(undefined4 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x10);
  uVar5 = *(undefined8 *)(lVar8 + 0x18);
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)(lVar8 + 8);
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar7;
  return;
}

// execSetGoalSettings @ 14df68280

void __cdecl
UIKRigBodyMoverController::execSetGoalSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_50 = 0;
  local_58 = &___7FIKRigBodyMoverGoalSettings__6B_;
  local_48 = 0;
  local_40 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_20 = local_40;
  local_38 = &___7FIKRigBodyMoverGoalSettings__6B_;
  local_30 = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_48;
  local_res10 = local_res8;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x78))
            (*(longlong **)(param_1 + 1),&local_res10,&local_38);
  return;
}

// execSetSolverSettings @ 14df6aa30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRigBodyMoverController::execSetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_88 = &___7FIKRigBodyMoverSettings__6B_;
  local_80 = 0;
  local_78 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_70 = _UNK_15076b1f8;
  local_68 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_60 = _UNK_15076b1f8;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_38 = local_78;
  uStack_30 = uStack_70;
  local_48 = &___7FIKRigBodyMoverSettings__6B_;
  local_28 = local_68;
  uStack_20 = uStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_58;
  local_14 = local_54;
  local_10 = local_50;
  local_40 = local_80;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x40))(*(longlong **)(param_1 + 1),&local_48);
  return;
}

