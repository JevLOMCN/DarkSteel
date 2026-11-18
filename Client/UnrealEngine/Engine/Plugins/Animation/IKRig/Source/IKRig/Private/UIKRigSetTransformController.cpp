// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14deeb4f0

UClass * __cdecl UIKRigSetTransformController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSetTransformController",
               &Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton,
               StaticRegisterNativesUIKRigSetTransformController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigSetTransformController>,
               InternalVTableHelperCtorCaller<UIKRigSetTransformController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton;
}

// UIKRigSetTransformController @ 14df1a470

UIKRigSetTransformController * __thiscall
UIKRigSetTransformController::UIKRigSetTransformController
          (UIKRigSetTransformController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigSetTransformController__6B_;
  return this;
}

// UIKRigSetTransformController @ 14df1a4a0

UIKRigSetTransformController * __thiscall
UIKRigSetTransformController::UIKRigSetTransformController
          (UIKRigSetTransformController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRigSetTransformController__6B_;
  return this;
}

// ~UIKRigSetTransformController @ 14df1c7c0

void __thiscall
UIKRigSetTransformController::~UIKRigSetTransformController(UIKRigSetTransformController *this)

{
  *(undefined ***)this = &___7UIKRigSolverControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d590

UClass * __cdecl UIKRigSetTransformController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSetTransformController",
               &Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton,
               StaticRegisterNativesUIKRigSetTransformController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRigSetTransformController>,
               InternalVTableHelperCtorCaller<UIKRigSetTransformController>,local_res8,
               UIKRigSolverControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSetTransformController.InnerSingleton;
}

// GetSolverSettings @ 14df40430

FIKRigSetTransformSettings * __thiscall
UIKRigSetTransformController::GetSolverSettings
          (UIKRigSetTransformController *this,FIKRigSetTransformSettings *__return_storage_ptr__)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  __return_storage_ptr__->_padding_ = (longlong)&___7FIKRigSetTransformSettings__6B_;
  __return_storage_ptr__->Goal = *(FName *)(lVar2 + 8);
  __return_storage_ptr__->BoneToAffect = *(FName *)(lVar2 + 0x10);
  __return_storage_ptr__->PositionAlpha = *(float *)(lVar2 + 0x18);
  __return_storage_ptr__->RotationAlpha = *(float *)(lVar2 + 0x1c);
  fVar1 = *(float *)(lVar2 + 0x20);
  __return_storage_ptr__->bPropagateToChildren = *(bool *)(lVar2 + 0x24);
  __return_storage_ptr__->Alpha = fVar1;
  return __return_storage_ptr__;
}

// SetSolverSettings @ 14df56150

void __thiscall
UIKRigSetTransformController::SetSolverSettings
          (UIKRigSetTransformController *this,FIKRigSetTransformSettings *param_1)

{
  (**(code **)(**(longlong **)&this->field_0x28 + 0x40))();
  param_1->_padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  return;
}

// StaticRegisterNativesUIKRigSetTransformController @ 14df5a230

void __cdecl UIKRigSetTransformController::StaticRegisterNativesUIKRigSetTransformController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRigSetTransformController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSolverSettings @ 14df66ec0

void __cdecl
UIKRigSetTransformController::execGetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (**(code **)(**(longlong **)(param_1 + 1) + 0x30))();
  uVar4 = *(undefined8 *)(lVar6 + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  uVar1 = *(undefined4 *)(lVar6 + 0x1c);
  uVar2 = *(undefined4 *)(lVar6 + 0x20);
  uVar3 = *(undefined1 *)(lVar6 + 0x24);
  *(undefined4 *)((longlong)param_3 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar5;
  *(undefined1 *)((longlong)param_3 + 0x24) = uVar3;
  return;
}

// execSetSolverSettings @ 14df6aef0

void __cdecl
UIKRigSetTransformController::execSetSolverSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_40 = 0x3f800000;
  local_50 = 0;
  local_58 = &___7FIKRigSetTransformSettings__6B_;
  local_48 = 0;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_18 = local_40;
  local_28 = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_48;
  local_c = local_34;
  local_14 = local_3c;
  local_10 = local_38;
  local_30 = &___7FIKRigSetTransformSettings__6B_;
  (**(code **)(**(longlong **)(param_1 + 1) + 0x40))(*(longlong **)(param_1 + 1),&local_30);
  return;
}

