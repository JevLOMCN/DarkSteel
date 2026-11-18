// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14df07d30

UClass * __cdecl UIKRigPoleSolverController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigPoleSolverController",
               &Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton,
               StaticRegisterNativesUIKRigPoleSolverController,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigPoleSolverController>,
               InternalVTableHelperCtorCaller<UIKRigPoleSolverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton;
}

// UIKRigPoleSolverController @ 14df1a370

UIKRigPoleSolverController * __thiscall
UIKRigPoleSolverController::UIKRigPoleSolverController
          (UIKRigPoleSolverController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigPoleSolverController__6B_;
  return this;
}

// UIKRigPoleSolverController @ 14df1a3a0

UIKRigPoleSolverController * __thiscall
UIKRigPoleSolverController::UIKRigPoleSolverController
          (UIKRigPoleSolverController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigPoleSolverController__6B_;
  return this;
}

// ~UIKRigPoleSolverController @ 14df1c760

void __thiscall
UIKRigPoleSolverController::~UIKRigPoleSolverController(UIKRigPoleSolverController *this)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d420

UClass * __cdecl UIKRigPoleSolverController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigPoleSolverController",
               &Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton,
               StaticRegisterNativesUIKRigPoleSolverController,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigPoleSolverController>,
               InternalVTableHelperCtorCaller<UIKRigPoleSolverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigPoleSolverController.InnerSingleton;
}

// GetSolverSettings @ 14df403e0

FIKRigPoleSolverSettings * __thiscall
UIKRigPoleSolverController::GetSolverSettings
          (UIKRigPoleSolverController *this,FIKRigPoleSolverSettings *__return_storage_ptr__)

{
  FName FVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigPoleSolverSettings__6B_;
  __return_storage_ptr__->StartBone = *(FName *)(lVar2 + 8);
  __return_storage_ptr__->EndBone = *(FName *)(lVar2 + 0x10);
  FVar1 = *(FName *)(lVar2 + 0x18);
  __return_storage_ptr__->Alpha = *(float *)(lVar2 + 0x20);
  __return_storage_ptr__->AimAtGoal = FVar1;
  return __return_storage_ptr__;
}

// SetSolverSettings @ 14df56120

void __thiscall
UIKRigPoleSolverController::SetSolverSettings
          (UIKRigPoleSolverController *this,FIKRigPoleSolverSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 0x40))();
  param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// StaticRegisterNativesUIKRigPoleSolverController @ 14df5a1e0

void __cdecl UIKRigPoleSolverController::StaticRegisterNativesUIKRigPoleSolverController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRigPoleSolverController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSolverSettings @ 14df66e60

void __cdecl
UIKRigPoleSolverController::execGetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 1) + 0x30))();
  uVar1 = *(undefined8 *)(lVar4 + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined4 *)((longlong)param_3 + 0x20) = *(undefined4 *)(lVar4 + 0x20);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  return;
}

// execSetSolverSettings @ 14df6ae10

void __cdecl
UIKRigPoleSolverController::execSetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = 0x3f800000;
  local_50 = 0;
  local_58 = &___7FIKRigPoleSolverSettings__6B_;
  local_48 = 0;
  local_40 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_10 = local_38;
  local_30 = &___7FIKRigPoleSolverSettings__6B_;
  local_28 = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_48;
  local_18 = local_40;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x40))(*(longlong **)(param_1 + 1),&local_30);
  return;
}

