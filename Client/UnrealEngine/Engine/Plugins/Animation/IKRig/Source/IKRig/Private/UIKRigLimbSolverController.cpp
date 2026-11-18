// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14df014b0

UClass * __cdecl UIKRigLimbSolverController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigLimbSolverController",
               &Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton,
               StaticRegisterNativesUIKRigLimbSolverController,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigLimbSolverController>,
               InternalVTableHelperCtorCaller<UIKRigLimbSolverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton;
}

// UIKRigLimbSolverController @ 14df1a310

UIKRigLimbSolverController * __thiscall
UIKRigLimbSolverController::UIKRigLimbSolverController
          (UIKRigLimbSolverController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigLimbSolverController__6B_;
  return this;
}

// UIKRigLimbSolverController @ 14df1a340

UIKRigLimbSolverController * __thiscall
UIKRigLimbSolverController::UIKRigLimbSolverController
          (UIKRigLimbSolverController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigLimbSolverController__6B_;
  return this;
}

// ~UIKRigLimbSolverController @ 14df1c740

void __thiscall
UIKRigLimbSolverController::~UIKRigLimbSolverController(UIKRigLimbSolverController *this)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d360

UClass * __cdecl UIKRigLimbSolverController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigLimbSolverController",
               &Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton,
               StaticRegisterNativesUIKRigLimbSolverController,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigLimbSolverController>,
               InternalVTableHelperCtorCaller<UIKRigLimbSolverController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigLimbSolverController.InnerSingleton;
}

// GetSolverSettings @ 14df40350

FIKRigLimbSolverSettings * __thiscall
UIKRigLimbSolverController::GetSolverSettings
          (UIKRigLimbSolverController *this,FIKRigLimbSolverSettings *__return_storage_ptr__)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  *(undefined4 *)&__return_storage_ptr__->_padding_ = *(undefined4 *)(lVar2 + 8);
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = *(undefined1 *)(lVar2 + 0xc);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = *(undefined4 *)(lVar2 + 0x10);
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = *(undefined1 *)(lVar2 + 0x14);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = *(undefined4 *)(lVar2 + 0x18);
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = *(undefined1 *)(lVar2 + 0x1c);
  uVar1 = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = *(undefined4 *)(lVar2 + 0x24);
  *(undefined1 *)&__return_storage_ptr__->_padding_ = *(undefined1 *)(lVar2 + 0x28);
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 1) = *(undefined1 *)(lVar2 + 0x29);
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigLimbSolverSettings__6B_;
  __return_storage_ptr__->StartBone = *(FName *)(lVar2 + 0x30);
  __return_storage_ptr__->GoalName = *(FName *)(lVar2 + 0x38);
  __return_storage_ptr__->EndBone = *(FName *)(lVar2 + 0x40);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = uVar1;
  return __return_storage_ptr__;
}

// SetSolverSettings @ 14df560f0

void __thiscall
UIKRigLimbSolverController::SetSolverSettings
          (UIKRigLimbSolverController *this,FIKRigLimbSolverSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 0x40))();
  param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// StaticRegisterNativesUIKRigLimbSolverController @ 14df5a1a0

void __cdecl UIKRigLimbSolverController::StaticRegisterNativesUIKRigLimbSolverController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRigLimbSolverController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSolverSettings @ 14df66da0

void __cdecl
UIKRigLimbSolverController::execGetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (**(code **)(**(longlong **)(param_1 + 1) + 0x30))();
  uVar1 = *(undefined4 *)(lVar13 + 8);
  uVar5 = *(undefined1 *)(lVar13 + 0xc);
  uVar9 = *(undefined4 *)(lVar13 + 0x10);
  uVar6 = *(undefined1 *)(lVar13 + 0x14);
  uVar2 = *(undefined4 *)(lVar13 + 0x18);
  uVar3 = *(undefined4 *)(lVar13 + 0x20);
  uVar4 = *(undefined4 *)(lVar13 + 0x24);
  uVar7 = *(undefined1 *)(lVar13 + 0x28);
  uVar8 = *(undefined1 *)(lVar13 + 0x29);
  uVar10 = *(undefined8 *)(lVar13 + 0x30);
  uVar11 = *(undefined8 *)(lVar13 + 0x38);
  uVar12 = *(undefined8 *)(lVar13 + 0x40);
  *(undefined1 *)((longlong)param_3 + 0x1c) = *(undefined1 *)(lVar13 + 0x1c);
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar12;
  *(undefined4 *)((longlong)param_3 + 8) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar4;
  *(undefined1 *)((longlong)param_3 + 0xc) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar9;
  *(undefined1 *)((longlong)param_3 + 0x14) = uVar6;
  *(undefined1 *)((longlong)param_3 + 0x28) = uVar7;
  *(undefined1 *)((longlong)param_3 + 0x29) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar11;
  return;
}

// execSetSolverSettings @ 14df6acb0

void __cdecl
UIKRigLimbSolverController::execSetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_a0 = 0x3c23d70a;
  local_78 = 0;
  local_a8 = &___7FIKRigLimbSolverSettings__6B_;
  local_70 = 0;
  local_68 = 0;
  local_9c = 0;
  local_98 = 0xc;
  local_94 = 0;
  local_90 = 0x41700000;
  local_8c = 1;
  local_88 = 0x3f000000;
  local_84 = 0x3f333333;
  local_80 = 0x200;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_50 = local_a0;
  local_4c = local_9c;
  local_48 = local_98;
  local_44 = local_94;
  local_3c = local_8c;
  local_30 = (undefined1)local_80;
  local_2f = local_80._1_1_;
  local_28 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_70;
  local_40 = local_90;
  local_18 = local_68;
  local_38 = local_88;
  local_34 = local_84;
  local_58 = &___7FIKRigLimbSolverSettings__6B_;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x40))(*(longlong **)(param_1 + 1),&local_58);
  return;
}

